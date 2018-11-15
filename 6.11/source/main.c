#include<stdio.h>
#include<stdlib.h>
main()
{
	int a[5] = { 26,5,81,7,63 };
	int i, j,b,k=4;
	int temp[5] = { 0 };
	for (i = 0; i < 4; i++)
	{
		int is_change = 0 ;
		for (j = i; j < 4; j++)
		{
			if (a[j] < a[j + 1])
			{
				continue;
			}
            else if (a[j] > a[j + 1])
			{
				is_change = 1;
				temp[j]=a[j];
				a[j] = a[j + 1];
				a[j + 1] = temp[j];
			}
		}
		if (a[j] < a[j + 1] || is_change == 0  )
		{
			break;
		}
		printf("loop %d:",i);
		for (b = 0; b < 5; b++)
			printf("%4d", a[b]);
		printf("\n");
	}
	system("pause");
}