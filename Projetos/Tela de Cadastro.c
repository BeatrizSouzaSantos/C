/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <locale.h> // Biblioteca de acentuação
#include <windows.h> // Biblioteca dos códigos
void main()
{
int decisao;
char opcao;
setlocale(LC_ALL, "Portuguese"); // Definindo português brasileiro como linguagem dentro de printf
inicio:
system("cls"); // Limpar tela
system("color 0F"); // Cor de fundo e letra do cmd

printf("1 - Cadastro de paciente \n2 - Cadastro funcionario \n3 - Cadastro de medico \n4 -SAIR\n");
opcao = getch();
switch (opcao) {
case '1':
system("cls");
printf("Cadastro de paciente\n");
Sleep(3000); // Aqui ele dorme por 3 segundos depois continua o código

exit(0); //Assim em vez de ele parar e pedir pra pressionar uma

tecla ele fecha de uma vez
case '2':
system("cls");
printf("Cadastro funcionario\n");
Sleep(3000);

exit(0);

case '3':
system("cls");
printf("Cadastro de medico\n");
Sleep(3000);

exit(0);

case '4':
system("cls");
printf("voce pediu para sair, fechando programa...\n");
Sleep(3000);

exit(0);

default:
printf("voce deve escolher uma opcao valida\n");
printf("Precione qualquer tecla para voltar ao menu\n");
system("pause");
goto inicio;
}
}
