#include<stdio.h>
int sum(int a, int b){
	int resultado=a+b;
	return (resultado);
}
float prom (int a, int b){
	return ((a+b)/2.0);
}

int main(){
	printf("Res: %f\n", prom(sum(1,2),sum(2,3)));
	printf("Res: %f\n", prom(sum(5,6),sum(7,8)));
	printf("Res: %f\n", prom(sum(9,10),sum(11,12)));
}
