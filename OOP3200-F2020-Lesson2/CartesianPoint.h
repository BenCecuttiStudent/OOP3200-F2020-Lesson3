#pragma once
#ifndef __CARTESIAN_POINT__
#define __CARTESIAN_POINT__
#include <string>

// class declaration section
class CartesianPoint
{
public:

	/* Constructor: Used to initialize objects */
	CartesianPoint(int x = 1, int y = 1);
	~CartesianPoint();

	/* Copy Constructor */
	CartesianPoint(const CartesianPoint& point2);

	/* Operator overloads */
	CartesianPoint operator+(const CartesianPoint& point2) const;
	double operator- (const CartesianPoint& point_to) const;
	bool operator== (const CartesianPoint& other_point) const;

	/* Friend Overload */
	friend std::ostream& operator << (std::ostream& out, const CartesianPoint& point);
	friend std::istream& operator >> (std::istream& in, CartesianPoint& point);
	

	// --------------------------------------------------------------------------------
	/* Accessors: Used to query the state of the object */

	// get x
	int GetX() const;

	// get y
	int GetY() const;

	// -------------------------------------------------------------------------------
	/* Mutator(s): Used to change the state of the object */

	// set x
	void SetX(int x);

	// set y,
	void SetY(int y);

	// set point (both x and y)
	void SetPoint(int x, int y);


	// get the distance between this point and a second point
	double GetDistanceTo(const CartesianPoint& point_to) const;

	// convert the obj to a string
	std::string ToString() const;


private:
	// private data members for the dimensions of the point
	int m_x; // x-axis (horizontal) value
	int m_y;  // y-axis (vertical) value

};

#endif /*defined (__CARTESIAN_POINT__)*/