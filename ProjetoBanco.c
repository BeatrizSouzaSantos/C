
#include<stdlib.h>
#include <stdio.h>
#include<locale.h>
#include <time.h>
#include <string.h>



void
limpaTela ()
{				// funcao que limpa a tela
  system ("cls");
}

//void filapreferencial (int idade);

void
filapreferencial (char nome[255], int idade)
{


  // Funcao que gera senha para fila preferencial
  int senhaf = rand () % 10;
  limpaTela ();
  printf
    ("\nBem Vindo Sr(a).%sao Banco ViniBank S/A\ndevido sua idade vocC* recebera uma senha preferencial\nSenha:%d\n",
     nome, senhaf);
  printf ("\n \n    (AGUARDE SER CHAMADO )\n   ");


}

void
filnormal (char nome[255], int idade)
{



  int senhac = rand () % 100;
  limpaTela ();
  printf
    ("\nBem Vindo Sr(a).%sao Banco ViniBank S/A\ndevido sua idade vocC* recebera uma senha de Atendimento Normal\nSenha: %d \n",
     nome, senhac);

  printf ("\n\n     (AGUARDE SER CHAMADO )\n   ");


}

int
main ()
{
  // funcao que permite escreve com acento.
  setlocale (LC_ALL, "");
  // Funcao que permite gerar numeros aleatorios
  srand ((unsigned) time (NULL));


  // Declarando Variaveis na Main
  int preferencial, normal, opcao, idade;
  int senhaC = rand () % 1000;
  int senhaf = rand () % 100;
  char nome[255];		// declarando uma string


  printf
    ("\n----------------------------------------------------------------\n");
  printf
    ("\n----------------------------------------------------------------\n");
  printf
    ("\n              Seja bem vindo Banco ViniBank S/A               \n\n");
  printf
    ("\n  Por Favor Digite os dados necessarios e aguarde sua senha     \n");
  printf
    ("\n  Tenha em mC#os seus Documentos com foto em cartC#o do Banco     \n");
  printf
    ("\n----------------------------------------------------------------\n");
  printf
    ("\n----------------------------------------------------------------\n");
  printf ("\nInsira seu nome Completo\n");
  setbuf (stdin, 0);		// limpa o buf da string
  fgets (nome, 255, stdin);	// lendo uma string
  nome[strlen (nome) - 1] = '\0';	// funcao que permite minha string a ocupar o espaco que eu digitar e nao o seu maximo que e 255
  printf ("\nInforme sua Idade\n");
  scanf ("%d", &idade);
  printf ("\n-----------------------------\n");
  printf ("\n-----------------------------\n");

  system ("cls");


  if (idade >= 60)
    {


      filapreferencial (nome, idade);	// chamando a funcao caso a idade for menor que 60
    }

  if (idade < 60)
    {



      filnormal (nome, idade);	// chamando a funcao caso a idade for menor que 60

    }







}
