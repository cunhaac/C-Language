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
    int raio, altura, volume;
		
    // SEQU�NCIA L�GICA DE INSTRU��ES
    printf("\n");

    printf("Raio: ");
    scanf("%i", &raio);
    printf("Altura: ");
    scanf("%i", &altura);    

    volume = (3,14159 * raio * raio * altura);

    printf("O volume da lata é %d", volume);
 
    printf("\n\n");
    
    return 0;
}
/*--------------------------------------------------*/