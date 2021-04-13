/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include <locale.h>

void main()
{
    setlocale(LC_ALL,"");
    int a = 1;
    char b = 'x';
    
    // código do if
    if (a == 1){
        printf("\nA opção escolhida: 1");
    }else {
        if (a == 2){
            printf("\nA opção escolhida: 2");
        }else {
            if (a == 3){
                printf("\nA opção escolhida: 3");
            }else {
                printf("\nOpção inválida");
            }
        }
    }
    // usando switch

    switch (a){
        case 1:
        printf ("\n Opção escolhida: 1");
        break; 
        case 2:
        printf("\n Opcão escolhida: 2");
        break;
        case 3:
        printf("\n Opção escolhida: 3");
        break;
        default:
        printf("\n Opção inválida");
        break;
    }
    // usando char
    switch(b){
        case 'x':
        printf("\n A letra é x");
        break;
        default:
        printf("\n Opção inválida");
        break;
    }
}

