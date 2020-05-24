#include "stdio.h"

int main()
{
	int a[] = {118, -38, 0, 17, -16, 0, 10, 0, 0, -103};
	int n = 0;
	int i;
	for(i=0;i<10;i++)
		if(a[i]%2==0 && a[i] != 0)
		{
			n++;
			printf("%d ", a[i]);
		}

	printf("%d ", n);
	return 0;
}

	

	
