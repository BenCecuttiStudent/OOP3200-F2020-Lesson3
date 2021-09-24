#include "CartesianPoint.h";
#include <iomanip>
#include <sstream> 			// stringstream
#include <cmath>			// sqrt()
#include <limits>			// INT_MAX

// constructor for CartesianPoint
CartesianPoint::CartesianPoint(int x, int y)
{
	SetPoint(x, y);
}

void CartesianPoint::SetPoint(int x, int y)
{
	SetX(x);
	SetY(y);
}

void CartesianPoint::SetX(int x)
{
	myX = x;
}

void CartesianPoint::SetY(int y)
{
	myY = y;
}

int CartesianPoint::GetX()
{
	return myX;
}

int CartesianPoint::GetY()
{
	return myY;
}


/** GetDistanceTo Method for CartesianPoint class
*	Determines the distance between this point and a second point.
*	@param	pointTo: CartesianPoint
*	@return	the distance as a double
*/
double CartesianPoint::GetDistanceTo(CartesianPoint pointTo) const
{
	// difference between x values
	int xDelta = pointTo.myX - myX;

	// difference between y values
	int yDelta = pointTo.myY - myY;

	// return the formula (based on Pythagorean theorem)
	return sqrt((xDelta * xDelta) + (yDelta * yDelta));
}

/** ToString Method for CartesianPoint class
*	Converts the obj to a string.
*	@return	the obj state as a string
*/

std::string CartesianPoint::ToString() const
{
	// declare a stringstream object
	std::stringstream strOut;

	// build the string
	strOut << "(" << myX << ", " << myY << ")";

	// return the string
	return strOut.str();
}