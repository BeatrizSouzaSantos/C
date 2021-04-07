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
    //acento
   setlocale(LC_ALL,"");
   
   int a, b, c;
   
   printf("\nInsira três valores: ");
   scanf("%d %d %d", &a, &b, &c);
   
   if (a == b){
       if (b == c){
           printf("O triângulo é equilátero");
       } else{
           printf("\nO triângulo não é equilátero");
           
       } 
       
   }else{
       printf ("\nO triângulo não é equilátero");
           
       }
   }

