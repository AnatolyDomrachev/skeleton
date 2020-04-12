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

		int sum = 0;
		for(int j =0; j<5; j++)
			sum += S[i].ocenki[j];
		S[i].sred = sum/5;
	}

	int mins = S[0].sred;
	struct student t;
	for(int i=0; i<10; i++)
	{
		int mini = i;
		for(int j=i; j<10; j++)
			if(mins > S[j].sred)
			{
				mins = S[j].sred;
				mini = j;
			}
		t = S[i];
	       	S[i] = S[mini];
		S[mini] = t; 
	}

	cout << "Сортироовка по среднему баллу" << endl<<endl;

	cout << "Фамилия и инициалы: ";
	cout << "Номер группы: ";
	cout << "Оценки по 5 предметам: "<< endl;

	for(int i=0; i<10; i++)
	{
		cout << S[i].name << "\t";
		cout << S[i].group << "\t";
		for(int j =0; j<5; j++)
			cout << S[i].ocenki[j] << "\t";
		cout << endl;
	}

	cout << endl<<endl;
	cout << "Студенты, у которых есть 4 или 5" << endl<<endl;
	cout << "Фамилия и инициалы: ";
	cout << "Номер группы: ";
	cout << "Оценки по 5 предметам: "<< endl;

	int c;
	int d = 0;
	for(int i=0; i<10; i++)
	{
		c = 0;
		for(int j =0; j<5; j++)
			if(S[i].ocenki[j] == 4 || S[i].ocenki[j] == 5)
			{
				c++;
				d++;
			}
		if(c!=0)
		{	
			cout << S[i].name << "\t";
			cout << S[i].group << "\t";
			for(int j =0; j<5; j++)
				cout << S[i].ocenki[j] << "\t";
			cout << endl;
		}
	}

	if(d==0)
		cout << "Таких студентов нет" << endl;


	return 0;
}


