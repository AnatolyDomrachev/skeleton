#include <iostream>
#include <cmath>

using namespace std;

void sort(int* an, int n)
{
	double maxe;
	int maxn;

	for(int i=0; i<n;i++)
	{
		maxe = an[i];
		maxn = i;
		for(int j=i; j<n;j++)
			if(an[j] > maxe)
			{
				maxe = an[j];
				maxn = j;
			}
		swap(an[i], an[maxn]);
	}	
}

int fmin(int* an, int n)
{
	int index = 0;
	double mmin = abs(an[0]);
	for(int i=0; i<n;i++)
		if(abs(an[i]) < mmin)
		{
			mmin = abs(an[i]);
			index = i;
		}
	return index;
}

int fmax(int* an, int n)
{
	int index = 0;
	double mmax = abs(an[0]);
	for(int i=0; i<n;i++)
		if(abs(an[i]) > mmax)
		{
			mmax = abs(an[i]);
			index = i;
		}
	return index;
}


double proizv(int* an, int n)
{
	int imin, imax;
	imin = fmin(an,n);
	imax = fmax(an,n);

	if(imin > imax)
		swap(imin, imax);
	//cout << "imin = " << imin << endl;
	//cout << "imax = " << imax << endl;

	double pr = 1;
	for(int i=imin+1; i<imax;i++)
		pr *= an[i];

	if(imax - imin < 2)
		pr = 0;

	return pr;
}

double sumpol(int* an, int n)
{
	double sum = 0;
	for(int i=0; i<n;i++)
		if(an[i] > 0)
			sum += an[i];
	return sum;
}

int main()
{
	int n;
	cout << "Введите  n\n";
	cin >> n;
	int *an = new int[n];

	cout << "Введите элементы массива\n";
	for(int i=0; i<n;i++)
		cin >> an[i];

	double s = sumpol(an,n);
	cout << "Сумма положительных элементов = " << s << endl;

	double p = proizv(an,n);
	cout << "Произведение элементов между максимальным и минимальным по модулю = " << p << endl;

	sort(an,n);

	cout << "Отсортированный массив\n";
	for(int i=0; i<n;i++)
		cout << an[i]<<endl;
	return 0;
}
