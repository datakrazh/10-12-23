#include<stdio.h>

void impresion(int n)
{
	int i;
	for (i=1;i<=n;i++)
		printf("*");
	printf("\n");
}

int main(){
	int a=10;
	impresion(20);
	impresion(a);
	impresion(a+2);
	return 0;
}
