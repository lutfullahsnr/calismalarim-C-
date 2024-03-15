#include <stdio.h>

int main()
{
	int sayi, temp, i, rem, ters;
	printf("Bir sayi giriniz \n");
	scanf("%d",&sayi);
	temp = sayi;
	ters = 0;
	while(temp>0)
	{
		rem = temp%10;
		ters = (ters*10)+rem;
		temp = temp/10;
	}
	if(ters == sayi)
	{
		printf("Bu sayi bir palindrom sayisidir.");
	}
	else 
	{
		printf("Bu sayi bir palindrom sayisi degildir.");
	}
	return 0;
}
