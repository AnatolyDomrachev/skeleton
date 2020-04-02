#include <iostream>

using namespace std;

struct student
{
	char name[50];
	int group;
	int ocenki[5];
	int sred;
};

int main()
{
	struct student S[10];
	cout << "Введите данные о 10 студентах"<<endl;
	for(int i=0; i<10; i++)
	{
		cout << "Фамилия и инициалы: ";
		cin >> S[i].name;
		cout << "Номер группы: ";
		cin >> S[i].group;
		cout << "Оценки по 5 предметам: ";
		for(int j =0; j<5; j++)
			cin >> S[i].ocenki[j];

		sum = 0;
		for(int j =0; j<5; j++)
			sum += S[i].ocenki[j];
		sred = sum/5;

	}

	return 0;
}


