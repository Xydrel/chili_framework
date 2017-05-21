#pragma once
#include "Core.h"

class Vertex
{
public:
	// default contruct and zero out values
	Vertex() : x(0.0), y(0.0), z(0.0) {}

	// construct from given values
	Vertex(double inX, double inY, double inZ) : x(inX), y(inY), z(inZ) {}
	~Vertex() {}

	INLINE bool operator==(Vertex& vec) { if ((vec.x == x) && (vec.y == y) && (vec.z == z)) { return true; } return false; }
	INLINE bool operator<(Vertex& vec) { if ((vec.x < x) || (vec.y < y) || (vec.z < z)) return true; return false; }
	INLINE bool operator>(Vertex& vec) { if ((vec.x > x) || (vec.y > y) || (vec.z > z)) return true; return false; }

	Vertex& GetPos() { return *this; }
	void SetPos(double x, double y, double z) { this->x = x, this->y = y, this->z = z; }

	double x;
	double y;
	double z;
private:

};

Vertex Verticies[] = 
{
	{ -5.0, -5.0, 0.0 },
	{ 0.0,   5.0, 0.0 },
	{ 5.0,  -5.0, 0.0 },
	{ 10.0,  5.0, 0.0 },
	{ 15.0, -5.0, 0.0 },
	{ 20.0,  5.0, 0.0 }
};