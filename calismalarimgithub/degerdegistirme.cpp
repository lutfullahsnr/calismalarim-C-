#include <stdio.h>
int main()
{
	//De�i�kenlerin de�erlerini de�i�tirme
	int sayi1,sayi2,temp;
	sayi1=10;
	sayi2=20;
	temp=sayi1;
	sayi1=sayi2;
	printf("Ilk sayinin yeni degeri:%d",sayi1);
	sayi2=temp;
	printf("Ikinci sayinin yeni degeri:%d",sayi2);
	return 0;
}
