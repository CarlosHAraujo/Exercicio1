/*

**********************************************************************
* PUCMINAS S�O GABRIEL                                               *
* DISCIPLINA: LABORAT�RIO DE AED I                                   *
* PROFESSOR:  J�LIO CONWAY                                           *
* GRUPO: Carlos Ara�jo e Deyber Pimentel                             *
* PROGRAMA 1                                                         *
**********************************************************************

*/

#include <iostream>
#include <stdio.h>

using namespace std;

int main()
{
    //declarando e inicializando vari�veis:

    int anos=0;//recebe quantos anos de idade a pessoa tem.
    int meses=0;//recebe quantos meses de idade a pessoa tem.
    int dias=0;//recebe quantos dias de idade a pessoa tem.
    int idias=0;//variavel que retorna a idade expressa em dias.

    //Apresentando o programa ao usu�rio:

    printf("Exercicio 1\nPrograma para calcular a idade de uma pessoa em dias corridos.\nProgramacao: Carlos Araujo & Deyber Pimentel.\n\n");

    //Pedindo dados ao usu�rio:

    printf ("Digite sua idade em ANOS MESES E DIAS:\n");
    scanf ("%d %d %d",&anos,&meses,&dias); // recebe os valores de idade do usuario

    //Mostrando os dados inseridos:

    printf ( "Sua idade em Anos:%d Mes:%d Dias:%d",anos,meses,dias);

    //calculando a idade em dias corridos:

    idias=(anos*365)+(30*meses)+dias;

    //Mostrando a idade em dias corridos para o usu�rio:

    printf ("\n A sua idade expressa em dias corridos e %d :", idias);

    return 0;
}
