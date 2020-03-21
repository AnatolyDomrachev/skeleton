#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	double xn, xk, dx, a, b, c, F, x;
	int ac,bc,cc, Fc;

	cout << "Введите  xn, xk, dx, a, b, c\n";
	cin >> xn >> xk >> dx >> a >> b >> c;
	ac = a;
	bc = b;
	cc = c;

	cout << "x" << "\t" << "F" << "\n";

	for(x = xn; x <= xk; x+=dx)
	{
		if(c<0 && b!=0)
			F = a*pow(x,2) + pow(b,2)*x;
		else if(c>0 && b==0)
			F = (x+a)/(x+c);
		else
			F = x/c;

		if( (ac & bc)|(ac & cc) == 0 )
		{
			Fc = F;
			F = Fc;
		}

		cout << x << "\t" << F << "\n";
	}

	return 0;
}
