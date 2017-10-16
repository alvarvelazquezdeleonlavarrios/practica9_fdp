#include<stdio.h>
#include<conio.h>

//Prog1. Tablas de Multiplicar 1-10 (Función While)

int a=1,b=1,r;

main(){
	printf("\t\tTablas de Multiplicar (Funcion While)\n");
	while(a<11){
		b=1;
		while(b<11){
			r=a*b;
			printf("%d*%d=%d\t",a,b,r);
			b++;
		}
		a++;
	}
	getch();
}
