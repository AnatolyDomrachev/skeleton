#include <iostream>
#include <cmath>

using namespace std;

const double a =1;
const double b =2;

double F(double x,double y)
{
	double result = log(abs((x-a)/(y-b)))+exp(x/a)* (pow(x,3)+a*pow(x,2)+pow(a,2)*x+pow(a,3)) / pow(y-b,2);
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
