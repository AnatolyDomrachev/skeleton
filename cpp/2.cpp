#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	double p, vklad;
	int days;

	cout << "Вычисление дохода по вкладу" << endl;
	cout << "Введите исходные данные:" << endl;

	cout << "Величина вклада (руб) -> " ;
	cin >> vklad;
	cout << "Срок вклада (дней) -> " ;
	cin >> days;
	cout << "Процентная ставка (годовых) -> " ;
	cin >> p;

	double dohod = vklad * days/365 * p/100;
	int dohod_r = dohod;
	int dohod_k = (dohod - dohod_r)*100 ;

	double summa = vklad + dohod;
	int summa_r = summa;
	int summa_k = (summa - summa_r)*100 ;

	cout  << "Доход: " << dohod_r <<" руб.  "<< dohod_k << " коп."<< endl;
	cout  << "Сумма по окончании срока вклада: " << summa_r <<" руб. "<< summa_k << " коп." << endl;
	return 0;
}


