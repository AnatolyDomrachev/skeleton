#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	double a;
	cout << "Введите альфа: "; 
	cin >> a;

	double y = (sin(2*a) + sin(5*a) - sin(3*a))/(cos(a) + 1 - 2*pow(sin(2*a), 2));
	double z = 2*sin(a);

	cout << "y= " << y << endl;
	cout << "z= " << z << endl;

	return 0;
}
