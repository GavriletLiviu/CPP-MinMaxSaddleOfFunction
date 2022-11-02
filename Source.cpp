#include<iostream>
using namespace std;
int main()
{
	double a1, a2, b1, b2, c, x, y, fderx, fxder, fyder, fxxder, fyyder, fxyder, fyxder, delta;
	cout << " this shall compute the local min or local max or saddle point of a given function f(x,y) =a1*x(squared)+a2*y(squared)+b1*x+b2*y+c \n";
	cout << " please input the coeficient of x squared = ";
	cin >> a1;
	cout << " please input the coeficient of y squared = ";
	cin >> a2; cout << "\n";	cout << " please input the coeficient of x = ";
	cin >> b1;
	cout << "please input the coeficient of y = ";
	cin >> b2; cout << "\n";
	cout << "please input the free coeficient = ";
	cin >> c;
	if (a1 != 0)
	{
		x = -b1 / (2 * a1);
	}
	else
		cout << "cannot compute x \n ";
	if (a2 != 0)
	{
		y = -b2 / (2 * a2);
	}
	else
		cout << "cannot compute y \n";
	cout << "The local point which was found equals the f (" << x << "," << y << ") = ";
	cout << a1 * x * x + a2 * y * y + b1 * x + b2 * y + c << "\n";
	fxder = 2 * a1 * x + b1;
	fyder = 2 * a2 * y + b2;
	fxxder = 2 * a1;
	fyyder = 2 * a2;
	fxyder = 0;
	delta = fxxder * fyyder;
	cout << "delta is = " << delta << "\n";
	if (delta > 0 && fxxder < 0)
	{
		cout << " f (" << x << "," << y << ") is a local maximum point ";
	}
	if (delta > 0 && fxxder > 0)
	{
		cout << " f (" << x << "," << y << ") is a local minimum point ";
	}
	if (delta < 0)
	{
		cout << " f (" << x << "," << y << ") is a saddle point ";
	}
	//this is the end of the file!
}