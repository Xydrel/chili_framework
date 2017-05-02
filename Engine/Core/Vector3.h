#pragma once
#include "Core.h"

class Vector3
{
public:
	Vector3() : x(0.0), y(0.0), z(0.0) {}
	~Vector3() {}

	INLINE bool operator==(Vector3& vec) { if ((vec.x == x) && (vec.y == y) && (vec.z == z)) { return true; } return false; }
	INLINE bool operator<(Vector3& vec) { if ((vec.x < x) || (vec.y < y) || (vec.z < z)) return true; return false; }
	INLINE bool operator>(Vector3& vec) { if ((vec.x > x) || (vec.y > y) || (vec.z > z)) return true; return false; }

	Vector3& GetPos() { return *this; }
	void SetPos(double x, double y, double z) { this->x = x, this->y = y, this->z = z; }

	double x;
	double y;
	double z;
private:

};