#include<stdio.h>
#include<math.h>
#include<conio.h> /* Funci�n getch() */

//Prog4. Exponente del 1 al 10 de un n�mero

int a, b=1, c;

main(){
	printf("\t\tExponenciales\n");
	printf("Introducir un valor entero: ");
	scanf("%d",&a);
	
	while (b<11){
		c=pow(a,b);
		printf("%d elevado a la %d = %d\n",a,b,c);
		b++;
	}
	
	getch();
}
