/*
 ============================================================================
 Name        : operazioni.c
 Author      : Andrea Gonzato
 Version     : 1.0
 Copyright   :
 Description :
 ============================================================================
 */



#include <stdio.h>
#include <stdlib.h>

int main(void) {

	//var
	float numero1, numero2;
	char op;
	short int controllo;


	printf("input: \n");
	controllo = scanf("%c %f %f", &op, &numero1, &numero2);

	//inserimento errato input
	if(controllo != 3){
		printf("inserimento errato");
		exit(1);
	}

	//var output
	float risultato;

	//identifico ed effetto la operazione richiesta
	switch (op) {
	  case '+' :
		  risultato = numero1 + numero2;
	  	  break;

	  case '-':
		  risultato = numero1 - numero2;
		  break;

	  case '*' :
		  risultato = numero1 * numero2;
		  break;

	  case '/' :
		  if(numero2 == 0){
			  printf("operazione non consentita");
			  exit(1);
		  }
		  risultato = numero1 / numero2;
		  break;

	  default :
		  //inserimento operazione errata
		  printf("operazione errata");
		  exit(1);
	}

	//output
	printf("output: \n %.3f", risultato);

	return EXIT_SUCCESS;
}
