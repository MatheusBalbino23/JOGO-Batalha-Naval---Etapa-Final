#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

struct almirante{

	char nome[100];
    int placar;
};

struct almirante jogador;

void introducao(){

    puts("      ____________________________________________________________________");
    puts("     |                                                                    |");
  	puts("     |  ****************************************************************  |");
  	puts("     |  ***************** BEM-VINDO AO BATALHA NAVAL *******************  |");
  	puts("     |  ****************************************************************  |");
 	puts("     |____________________________________________________________________|\n\n");
    puts("Voce eh um almirante que tem a missao de derrubar as embarcacoes inimigas\ne dar vantagem para o seu pais na guerra. Voce tera 20 vidas para completar sua missao. Eai, voce consegue?");
    printf("\n");
    puts("Qual seu nome?");
    fflush(stdin); 
    gets(jogador.nome);
}


void batalha_naval(){

    char campo[14][14]; 
    int hidro_cont, porta_cont, des_cont;
    int l, c;
    int c1 = 0, l1 = 0;
    int vida = 20; 
    jogador.placar = 0; 
    hidro_cont = 0;
    porta_cont = 0;
    des_cont = 0;

    char inimigo[14][14] ={
        {0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 4},
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 4},
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 2, 4},
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
        {0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0},
        {4, 4, 4, 0, 0, 0, 2, 3, 2, 0, 0, 0, 0, 0},
        {0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0},
        {0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0},
        {0, 0, 0, 0, 1, 0, 0, 3, 0, 0, 0, 0, 0, 0},
        {0, 3, 0, 0, 4, 4, 4, 0, 0, 0, 0, 0, 0, 0},
        {0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2},
        {0, 3, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 2, 0},
        {0, 3, 3, 3, 3, 3, 2, 0, 2, 0, 0, 1, 0, 2}
    };

	printf("\t1 \t2 \t3 \t4 \t5 \t6 \t7 \t8 \t9 \t10 \t11 \t12 \t13 \t14");
    printf("\n");

    for(l = 0; l < 14; l = l + 1){
    	printf("%d", l+1);
        for(c = 0; c < 14; c = c + 1){
        	campo[l][c] = '0';
            printf(" \t%c" , campo[l][c]);
        }
        printf("\n");
    }

    while (vida != 0){
    	
    	printf("Almirante %s\n", jogador.nome);
    	printf("Vida: %i\n\n", vida);
    	printf("Linha: ");
    	scanf("%i", &l);
   	 	printf("Coluna: ");
    	scanf("%i", &c);
    	system("cls");
    	printf("\n");

 		if(l < 14 && l >=0 && c < 14 && c >=0 && campo[l][c] == '0'){
			switch(inimigo[l][c]){
				case 0: campo[l][c] = '*';
					vida--;
					printf("Voce errou!! Tente novamente!!\n");
					break;

				case 1: campo[l][c] = 'S';
			  		printf("Acertou!!\n");
					break;

				case 2: campo[l][c] = 'H';
					hidro_cont = (hidro_cont == 3 ? 0 : hidro_cont+1);
					printf("Acertou!!\n");
					break;

				case 3: campo[l][c] = 'P';
					porta_cont = (porta_cont == 4 ? 0 : porta_cont+1);
					printf("Acertou!!\n");
					break;

				case 4: campo[l][c] = 'D';
                	des_cont = (des_cont == 3 ? 0 : des_cont+1);
                	printf("Acertou!!\n");
                	break;
                
				default:
				printf("ERROU!\n");
			}
		}
	
    	for(l = 0; l < 14; l = l + 1){
    		for (c = 0; c < 14; c = c + 1){
        		printf(" \t%c", campo[l][c]);
        	}
        	printf("\n");
    	}

   		if(vida == 0){
    		system("cls");
        	puts("FIM DO JOGO");
        	jogador.placar = jogador.placar + 1;
        	printf("Jogador: %s\nPlacar: %i", jogador.nome, jogador.placar);
    	}
	}
}


int main (){
	
    setlocale(LC_ALL,"portuguese");

    introducao();
    system("cls");
    batalha_naval ();
    system("pause");
    return 0;
    
}
