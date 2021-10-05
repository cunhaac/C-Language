/*--------------------------------------------------*/
/*####             PROGRAMA��O EM C             ####*/
/*--------------------------------------------------*/
/*$$$$ APLICA��O                                $$$$*/
/*$$$$ nome : <nomeAplicacao>.c                 $$$$*/
/*$$$$ autor: Pedro Cunha                           $$$$*/
/*--------------------------------------------------*/
/*@@@@ DIRECTIVAS DE INCLUS�O                   @@@@*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

/*@@@@ DIRECTIVAS DE DEFIN��O                   @@@@*/

/*@@@@ VARI�VEIS GLOBAIS                        @@@@*/

/*@@@@ ESTRUTURAS                               @@@@*/

/*@@@@ FUN��ES E PROCEDIMENTOS                  @@@@*/

/*@@@@ FUN��O MAIN                              @@@@*/
int main(void) {
	
    setlocale(LC_ALL, "Portuguese");
    system("COLOR FC");
	
    // DECLARA��O DE VARI�VEIS E DE CONSTANTES
	int A,B,C;
    int valor;
		
    // SEQU�NCIA L�GICA DE INSTRU��ES
    printf("\n");

    printf("Valor de A: ");
    scanf("%i", &A);
    printf("Valor de B: ");
    scanf("%i", &B);
    printf("Valor de C: ");
    scanf("%i", &C);

    valor = (A + B + C ) * (A + B + C);

    printf("O valor do quadrado da soma dos 3 números: %i", valor);
	
	    
    printf("\n\n");
    
    return 0;
}
/*--------------------------------------------------*/