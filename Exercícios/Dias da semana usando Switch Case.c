/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
//Construir um programa para verificar o dia da semana a fim de exemplificar a utilização do switch...case.
//O usuário vai digitar um número e o programa vai retornar o dia da semana equivalente ao número.

#include <stdio.h>
#include <conio.h>

int main (void )
{
int valor;
printf ("Digite um valor de 1 a 7: ");
scanf("%d", &valor);
switch ( valor )
{
case 1 :
printf ("Domingo\n");
break;
case 2 :
printf ("Segunda\n");
break;
case 3 :
printf ("Terça\n");
break;
case 4 :
printf ("Quarta\n");
break;

case 5 :
printf ("Quinta\n");
break;
case 6 :
printf ("Sexta\n");
break;
case 7 :
printf ("Sabado\n");
break;
default :
printf ("Valor invalido!\n");
}
getch();
return 0;
}
