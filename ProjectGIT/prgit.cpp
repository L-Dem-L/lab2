#include <iostream>
#define _USE_MATH_DEFINES
#include <math.h>
using namespace std;

int main() {
	double a;
	cout << "a = ";
	cin >> a;

	double z1 = (sin((M_PI / 2.0) + (3.0 * a))) / ((1.0 - (sin((3.0 * a) - M_PI))));
	//double z2 = (1.0 / ((tan(((5.0 / 4.0) * M_PI) + ((3.0 / 2.0) * a)))));

	double exp = (5.0 / 4.0) * M_PI + (3.0 / 2.0) * a;
	double z2 = 1.0 / tan(exp);

	cout << "z1 = " << z1 << endl;
	cout << "z2 = " << z2 << endl;
}