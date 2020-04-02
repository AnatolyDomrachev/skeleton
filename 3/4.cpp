#include <iostream>
#include <string.h>

using namespace std;

int main()
{
	char s[1000];
	char news[1000];
	int count;
	int k=0;
	cout << "Введите строку"<<endl;
	cin >> s;

	for(int i=0; i<strlen(s); i++)
	{
		count = 0;
		for(int j=0; j<strlen(s); j++)
			if(s[i] == s[j])
				count++;
		if(count == 1)
		{
			news[k] = s[i];
			k++;
		}
	}
	news[k] = '\0';

	cout << "Новая строка"<< endl << news << endl;

	return 0;
}




