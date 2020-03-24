#include <iostream>

using namespace std;

int seria(double ** amn, int M, int N)
{
	return 0;
}

int stolb(double ** amn, int M, int N)
{
	int num=0;

	for(int j =0; j<N;j++)
		for(int i =0; i<M;i++)
			if(amn[i][j] == 0)
			{
				num += 1;
				break;
			}

	return num;
}

int main()
{
	int M,N;
	cout << "Введите размер массива M,N" << endl;
	cin >> M >> N ;
	cout << M <<" " << N << endl ;

	cout << "Введите элементы массива " << endl;

	double ** amn = new double*[M];
	for(int i =0; i<M;i++)
		amn[i] = new double[N];

	for(int i =0; i<M;i++)
		for(int j =0; j<N;j++)
			cin >> amn[i][j];

	cout << "Введён массив " << endl;

	for(int i =0; i<M;i++)
	{
		cout<<endl;
		for(int j =0; j<N;j++)
			cout << amn[i][j] << "\t";
	}

	int s = stolb(amn,M,N);
	cout << endl << "Количество столбцов, содержащих нулевой элемент = " << s;

	int ser = seria(amn,M,N);
	cout << endl << "Номер строки содержащей самую длинную серию одинаковых элементов = " << ser;

	return 0;
}
