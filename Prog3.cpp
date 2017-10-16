#include<stdio.h>
#include<conio.h>

//Prog3. Tablas de Multiplicar 1-10 (Función For)

int a,b,r;

main(){
	
	printf("\t\tTablas de Multiplicar (Funcion For)\n");
	for(a=1;a<11;a++){
		
		for(b=1;b<11;b++){
			r=a*b;
			printf("%d*%d=%d\t",a,b,r);
		}
		
	}
	getch();
}
