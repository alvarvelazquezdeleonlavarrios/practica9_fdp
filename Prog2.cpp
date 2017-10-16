#include<stdio.h>
#include<conio.h>

//Prog2. Tablas de Multiplicar 1-10 (Función Do-While)

int a=1,b=1,r;

main(){
	printf("\t\tTablas de Multiplicar (Funcion Do-While)\n");
	do{
		b=1;
		do{
			r=a*b;
			printf("%d*%d=%d\t",a,b,r);
			b++;
		} while(b<11);
		a++;
	} while(a<11);
	getch();
}
