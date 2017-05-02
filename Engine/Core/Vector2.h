#pragma once
#include "Core.h"

class Vector2
{
public:
	Vector2() : x(0.0), y(0.0) {}
	~Vector2() {}

	INLINE bool operator==(Vector2& vec) { if ((vec.x == x) && (vec.y == y)) { return true; } return false; }
	INLINE bool operator<(Vector2& vec) { if ((vec.x < x) || (vec.y < y)) return true; return false; }
	INLINE bool operator>(Vector2& vec) { if ((vec.x > x) || (vec.y > y)) return true; return false; }

	Vector2& GetPos() { return *this; }
	void SetPos(double x, double y) { this->x = x, this->y = y; }

	double x;
	double y;
private:
};