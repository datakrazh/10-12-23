#include<stdio.h>

void imprimir()//FUNCI�N QUE NO TIENE UN "RETURN"
{
	int x;
	for(x=0;x<10;x++)
		printf("%d\n", x);
}

int main()
{
	imprimir();
	imprimir();
	return 0;
}
