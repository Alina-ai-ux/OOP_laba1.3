#include <iostream>
#include "Point.h"
using namespace std;
int main()
{
	Point A;
	A.SetX(19);
	A.SetY(-6);
	Point B;
	B.SetX(1);
	B.SetY(5);
	cout << A.Distance(B) << endl;
	Point A1;
	double x, y;
	cout << "Enter A(x)" << endl;
	cin >> x;
	A1.SetX(x);
	cout << "Enter A(y)" << endl;
	cin >> y;
	A1.SetY(y);
	Point B1;
	double x1, y1;
	cout << "Enter B(x)" << endl;
	cin >> x1;
	B1.SetX(x1);
	cout << "Enter B(y)" << endl;
	cin >> y1;
	B1.SetY(y1);
	cout << A1.Distance(B1) << endl;
	return 0;

}