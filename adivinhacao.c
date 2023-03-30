#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main (){
	int chute;
	int ganhou=0;
	int tent=1;
	double pontos=1000;
	srand(time(0));
    int numero = rand() % 100;
	//cabecalho
	printf("*******************************\n");
	printf("Bem vindo ao jogo da adivinhação");
	printf("\n********************************\n");

    
    while(ganhou==0){
    	printf("Tentativa %d",tent);
    	printf("\nQual seu chute? ");
		scanf("%d", &chute);
   		printf("Seu chute foi %d\n", chute);
   		 if(chute<0){
   		 	printf("Voce não pode chutar números negativos!\n");
   		 	continue;
   		 }
   		int acertou= (chute==numero);
   		if (acertou){
    	    printf("Parabéns, voce acertou!");
    		ganhou=1;
    	} 
    	if (chute!=numero){
    		double perdidos=abs((chute-numero)/2);
    		pontos=pontos - perdidos;
    			if (chute>numero){
    				printf("Seu chute foi maior que o numero\n");
    				
    			}
    			else{
    				printf("Seu chute foi menor que o numero\n");
    			}
    			printf("\nVocê errou, tente novamente");

    		
    	}
    	tent=tent+1;
    }

    printf("Você acertou na %d Tentativa!! Parabéns!\n",tent-1);
    printf("Pontos= %.1f",pontos);


}    

  	


