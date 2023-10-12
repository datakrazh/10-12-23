#include<stdio.h>

int checarNumerosPrimos(int n);
int main()
{
	int n1, n2, i, bandera;
	printf("Ingresar dos numeros: ");
	scanf("%d %d", &n1, &n2);
	printf("Primos entre %d y %d son:\n", n1, n2);
	for(i=n1+1;i<n2;++i)
	{
		//Si i es primo la función regresará un uno
		bandera=checarNumerosPrimos(i);
		if(bandera==1)
			printf("%d \n", i);
	}
	return 0;
}

int checarNumerosPrimos(int n)
{
	int j;
	for(j=2;j<=n/2;j++)
	{
		if(n%j==0){
			return 0;
		}
	}
	return 1;
}
