#include "main.h"
#include "point.h"

int main() {
	Point p1(1, 1);
	Point p2(2, 5);

	cout << p1.info() << endl;
	cout << p2.info() << endl;

	Point p3 = p1 + p2;			// p1 + p2
	cout << p3.info() << endl;

	Point p3 = p1 - 10;			// p1 + 10
	cout << p3.info() << endl;

	p3 = p1 - p2;				// p1 - p2
	cout << p3.info() << endl;

	p3 = -p1;
	p3 = p1.mul(3);					// p1 * 3
	cout << p3.info() << endl;	

	cout << (p1 * p2) << endl;

	/*int n = 10;
	int m = 20;
	int result = n + m;*/

	/*string s1 = "Max";
	string s2 = " is fool!";
	string s = s1 + s2;*/

	return 0;
}
