#include <stdio.h>
int main()
//Y�ld�zlarla dik ��gen olu�turma
{
	int i,j,n;
	scanf("%d",&n);
	int adet=1;
	for(i=0;i < n;i++)
	{
		for(j=1;j < adet;j++)
		{
			printf("*");
		}
		printf("\n");
		adet++;
	}
	return 0;
}
