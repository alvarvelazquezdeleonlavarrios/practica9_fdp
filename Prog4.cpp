#include<stdio.h>
#include<math.h>
#include<conio.h> /* Función getch() */

//Prog4. Exponente del 1 al 10 de un número

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
