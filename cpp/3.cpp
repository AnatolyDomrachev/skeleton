#include <iostream>
#include <cmath>

using namespace std;

const double a =1;
const double b =2;

double F(double x,double y)
{
	double result = a*x+b*y;
	return result ;
}

int main()
{
	double x;
	cout << "Введите x: "; 
	cin >> x;

	double y;
	cout << "Введите y: "; 
	cin >> y;

	cout << "F(x,y) = " << F(x,y);

	return 0;
}
