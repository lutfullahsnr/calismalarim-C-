#include <stdio.h>
int main()
/*
Kullan�c�dan al�nan say� uzunlu�unda fibonacci 
dizisini ekrana yazd�ran program�n C kodunu yaz�n�z.
*/
{
	int sayi1 = 0,sayi2 = 1,limit,i,temp;
	printf("Fibonacci dizisinde g�rmek istediginiz terim sayisini giriniz...\n");
	scanf("%d",&limit);
	
	for(i=1;i <= limit;i++)
	{
		printf(",%d",sayi1);
		temp = sayi1 + sayi2;
		sayi1 = sayi2;
		sayi2 = temp;
		
	}
	
	
	
	return 0;
}
