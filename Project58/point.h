#pragma once
#include "main.h"

class Point {
private:
	int x;
	int y;
public:
	Point();
	Point(int value1, int value2);

	int get_x();
	void set_x(int value);
	int get_y();
	void set_y(int value);

	Point sum(Point point);
	Point sub(Point point);
	Point mul(int value);

	Point static operator +(Point p1, Point p2) {
		int x = p1.x + p2.x;
		int y = p1.y + p2.y;
		return Point(x, y);
	}

	Point static operator +(Point point, int value) {
		int x = point.x + value;
		int y = point.y + value;
		return Point(x, y);
	}

	Point static operator -(Point p1, Point p2) {
		int x = p1.x - p2.x;
		int y = p1.y - p2.y;
		return Point(x, y);
	}

	Point static operator -(Point point, int value) {
		int x = point.x - value;
		int y = point.y - value;
		return Point(x, y);
	}

	Point static operator -(Point point) {
		int x = -point.x;
		int y = -point.y;
		return Point(x, y);
	}

	int static operator *(Point p1, Point p2) {
		int result = (int)sqrt(pow((p1.x + p2.x), 2) + pow((p1.y + p2.y), 2));
		return result;
	}

	Point static operator *(Point point, int value) {
		int x = point.x * value;
		int y = point.y * value;
		return Point(x, y);
	}

	// + - -/+ * / % 
	// ++/-- (x2)
	// > < >= <= == !=

	string info();
};
