#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <locale.h>
#include <time.h>

int main()
{
	
	//Uso do setlocale para usar 'ç' ou acentuação.	
	setlocale(LC_ALL, "Portuguese");
	
	//                 Declaração de váriaveis.
	
	int i;
	int forca,agilidade,inteligencia,constituicao,carisma ;
	char nomesPersonagem[1][20];
	char raca[4][100] ={ "Ogro", "Humano", "Fada","Elfo" };
	char classe[4][15] ={ "Guerreiro", "Arqueiro", "Mago","Clerigo" };
	char habilidade[3][100];
	
	int valorRecebido;
	int racaSelect [4];
	int classSelect[4];
	
	//Váriaveis de escolhas.
	int escolha_1, escolha_2;
	
	//Váriaveis de combate.
	char rolar_dado[10];
	int cav_dano = 10;
	int cav_hp = 50;
	int numero_sortido1;
	int escolha_combate, tentar_novamente;
	int hp = 100;
	int dano_base = 10;
	
	
	
	/*Início do programa com:
		Introdução;
		Criação da ficha;	
		Contem a criação do seu personagem neste primeiro bloco contem as definições de:
		Nome,Classe e raça.
	*/
		
		printf("                                        CAVERNA DOS SHREKS\n\n\n");
		
		printf("Bem-Vindo ao Contos de Tão Tão Distante!\n\n\n");
		
		system("pause");
		
		printf("\n\n\nAqui, você irá explorar durante poucas linhas o universo de Shrek não contada nos filmes... Se divirta!");
		
		printf("\nPrimeiramente, começaremos com a criação do seu personagem meu aventureiro!\n\n\n");
		
		system("pause");
			
		printf("\nDigite o nome do seu persongem:\n\n");
		scanf("%s",&nomesPersonagem[0]);
		selectRaca:
		printf("\nEscolha sua raça \n\n           0-Ogro 1-Humano\n           2-Fada 3-elfo\n");
		
		scanf("%d",&racaSelect[0]);
		valorRecebido = racaSelect[0];	
		printf("\nSua escolha foi '%s'\n\n Deseja continuar?? \n\n           1-voltar a escolha de raça\n          2-Qualquer outro valor para continuar \n",raca[valorRecebido]);
		scanf("%d",&valorRecebido);		
		if(valorRecebido ==1){
			goto selectRaca;
		}
		selectClass:
		printf("\nEscolha sua classe \n\n            0-Guerreiro 1-Arqueiro\n           2-Mago 3-Clerigo \n");
		scanf("%d",&classSelect[0]);
		valorRecebido=classSelect[0];
		printf("\nSua escolha foi '%s' \n\n Deseja continuar? \n\n           1-Voltar a escolha de classe\n          Qualquer outro valor para continuar \n",classe[valorRecebido]);
		scanf("%d",&valorRecebido);		
		if(valorRecebido ==1){
			goto selectClass;
		}
		
	
	
		int val1 = racaSelect[0];
		valorRecebido = classSelect[0];	
		printf("\nSeu nome é:%s\nSua raça é: %s\nSua classe é: %s\n\n",nomesPersonagem[0],raca[val1],classe[valorRecebido]);
		/*
		Segundo bloco :Neste bloco contem a seleção de atributos com base de sua raça

		*/
		// Segundo bloco 
	printf("Agora é hora dos atributos\n");
	system("pause");
	system("cls");
	   if(racaSelect[0]==0){
              
              printf("\n A raça dos ogros, fortes, resistentes agressivos e burros.\n");
              system("pause");
              printf("\nAtribua com sabedoria seus pontos de habilidade.\nVocê tem apenas 10 pontos para distribuir: \n");
              	
				 atributos:
    	       do{   
               printf("\nVocê ainda somar com os atributos base com base da sua raça\nDigite os pontos de força,agilidade,inteligencia,constituição e carisma apos digitar pressione enter: \n");
               scanf("%d%d%d%d%d",&forca,&agilidade,&inteligencia,&constituicao,&carisma);
               if(forca+agilidade+inteligencia+constituicao+carisma>10){
               	printf("\nVocê ultrapassou o limite de 10 digite novamente\n");
               	goto atributos ;
			   }if (forca+agilidade+inteligencia+constituicao+carisma<10){
			   	printf("\n Voce não atribuiu todos os pontos digite novamente\n");
			   	goto atributos;
			   }
				}while(forca+agilidade+inteligencia+constituicao+carisma < 10);
				forca=forca+5;
				agilidade=agilidade+1;
				inteligencia=inteligencia-4;
				constituicao=constituicao+4;
				carisma=carisma-3;
				printf("\nSeus abitibutos são \n\nforça %d   inteligencia =%d   constituição = %d carisma =%d\n",forca,agilidade,constituicao,carisma);
              }
              system("pause");
		  if (racaSelect[0]==1){
   				printf("\n A raça dos Humanos, Não muito fracos, Com uma consideravel resistencia e Espertos.\n");
   				system("pause");
              printf("\nAtribua com sabedoria seus pontos de habilidade.\nVocê tem apenas 10 pontos para distribuir: \n");
              atributos1:
    	       do{   
               printf("\nVoce ainda somar com os atributos base com base da sua raça\nDigite os pontos de força,agilidade,inteligencia,constituição e carisma apos digitar pressione enter: \n");
               scanf("%d%d%d%d%d",&forca,&agilidade,&inteligencia,&constituicao,&carisma);
               if(forca+agilidade+inteligencia+constituicao+carisma>10){
               	printf("\nVoce ultrapassou o limite de 10 digite novamente\n");
               	goto atributos1 ;
			   }if (forca+agilidade+inteligencia+constituicao+carisma<10){
			   	printf("\n Voce não atribuiu todos os pontos digite novamente\n");
			   	goto atributos1 ;
			   }
				}while(forca+agilidade+inteligencia+constituicao+carisma < 10);
				forca=forca+0;
				agilidade=agilidade+1;
				inteligencia=inteligencia+2;
				constituicao=constituicao-3;
				carisma=carisma+4;
            	printf("\nSeus abitibutos são \n\nforça %d   inteligencia =%d   constituição = %d carisma =%d\n\n",forca,agilidade,constituicao,carisma);  
			  }if (racaSelect[0]==2){
				printf("\n A raça das fadas, Frageis, praticamente sem resistencia porem espertas e fofas.\n");
				system("pause");
              printf("\nAtribua com sabedoria seus pontos de habilidade.\nVocê tem apenas 10 pontos para distribuir: \n");
              atributos2 :
    	       do{   
               printf("\nVoce ainda somar com os atributos base com base da sua raça\nDigite os pontos de força,agilidade,inteligencia,constituição e carisma apos digitar pressione enter: \n");
               scanf("%d%d%d%d%d",&forca,&agilidade,&inteligencia,&constituicao,&carisma);
               if(forca+agilidade+inteligencia+constituicao+carisma>10){
               	printf("\nVocê ultrapassou o limite de 10 digite novamente\n");
               	goto atributos2 ;
			   }if (forca+agilidade+inteligencia+constituicao+carisma<10){
			   	printf("\n Você não atribuiu todos os pontos digite novamente\n");
			   	goto atributos2 ;
			   }
				}while(forca+agilidade+inteligencia+constituicao+carisma < 10);
				forca=forca-3;
				agilidade=agilidade+1;
				inteligencia=inteligencia+4;
				constituicao=constituicao-5;
				carisma=carisma+6;
				printf("\nSeus abitibutos são \n\nforça %d   inteligencia =%d   constituição = %d carisma =%d\n",forca,agilidade,constituicao,carisma);  
				
			  }if(classSelect[i]==3){    
			printf("\n A raça das elfo, Frageis, praticamente sem resistencia porem muito rapido e amigaveis.\n");
			system("pause");
              printf("\nAtribua com sabedoria seus pontos de habilidade.\nVocê tem apenas 10 pontos para distribuir: \n");
              atributos3:
    	       do{   
               printf("\nVoce ainda somar com os atributos base com base da sua raça\nDigite os pontos de força,agilidade,inteligencia,constituição e carisma apos digitar pressione enter: \n");
               scanf("%d%d%d%d%d",&forca,&agilidade,&inteligencia,&constituicao,&carisma);
               if(forca+agilidade+inteligencia+constituicao+carisma>10){
               	printf("\nVocê ultrapassou o limite de 10 digite novamente\n");
               	goto atributos3 ;
			   }if (forca+agilidade+inteligencia+constituicao+carisma<10){
			   	printf("\n Você não atribuiu todos os pontos digite novamente\n");
			   	goto atributos3	;
			   }
				}while(forca+agilidade+inteligencia+constituicao+carisma < 10);
				forca=forca-4;
				agilidade=agilidade+7;
				inteligencia=inteligencia+1;
				constituicao=constituicao-6;
				carisma=carisma+2;
				printf("\nSeus abitibutos são \n\nforça %d   inteligencia =%d   constituição = %d carisma =%d\n",forca,agilidade,constituicao,carisma);  	  
		}
				system("cls");
				/*
				Terceiro bloco: Contem a criação de suas habilidades			
	      		*/
	      		//Terceiro bloco
				printf("\nDigite suas 3 habilidades sua classe é: %s \n\n Digite sua primeira habilidade: ",classe[0]);   
				scanf("%s",&habilidade[0]); 
				printf("\nDigite sua 2 habilidade: ");
				scanf("%s",habilidade[1]);	
				printf("\nDigite sua 3 habilidade: ");
				scanf("%s",habilidade[2]);
				
				printf("\nSuas hablidades são: %s , %s , %s\n",habilidade[0],habilidade[1],habilidade[2]);
				system("pause");
				system("cls");
	
	
	//Narração do ambiente com uso de Narrador Observador.
	inicio:
	printf("ÍNICIO DA HISTÓRIA: \n\n\n");
	
	printf("Narrador: A aventura se inicia, você e aqueles que logo irão se juntar a ti, se encontram todos na Maçã Envenenada\n\n");
	
	printf("Narrador: O Local era uma taverna suja e com baixa iluminação, várias mesas redondas espalhadas ao redor.\nEstava com uma clientela enorme mas não tão civilizada ou de bons corações.\n\n");
	
	printf("Narrador: Dois cavaleiros do lorde Farquaad adentram o recinto com um chute tremendo na porta,\nchamando a atenção de todos a sua volta\n\n");
	
	printf("Narrador: Os cavaleiros tocam a trombeta sinalizando suas chegadas e anunciam para todos o que procuram\n\n");
	
	printf("Cavaleiro 1: - Estamos atrás de monstros e seres praticantes de magias, muitos fazendeiros afirmam que eles ultrapassam pela região de nosso lorde extremamente alto Farquaad.\n\n");
	
	printf("Narrador: Você aventueiro, se sente encurralado pois por azar do destino você se encaixa na descrição.");
	
	//Uso de If, Else If e Else para escolha de rotas
	printf("O que você faz?:\n1- Desafiar os guardas \n2- Permanece em silêncio\n3- Chora\n\n");
    scanf("%d",&escolha_1);
    	if(escolha_1==1){
        	printf("\nVocê escolheu desafiar os guardas\n Logo ao se levantar.. \nRapidamente chamando a atenção dos dois que correm em sua direção.\n\n");
         }
        else if(escolha_1==2){
        	printf("\n\nVocê escolheu permancecer em silêncio.\n\n Os dois guardas adentram mais fundo no recinto olhando pessoa por pessoa. Até que você, um dos únicos seres bizarros que tinha lá, chamam a atenção dos guardas que se aproximam rapidamente e dizem: \n\n");    
         }
		else if(escolha_1==3){
			printf("\n\nVocê começa a chorar que nem um bebê fazendo com que todos ao redor comecem a rir e apontar os indicadores de suas mãos à você\n\n Os guardas rapidamente vão em sua direção e dizem: \n\n");
		}
		else{
			printf("\n\nVocê não faz nada.\n\nOs dois guardas adentram mais fundo no recinto olhando pessoa por pessoa.\n\nAté que você, um dos únicos seres bizarros que tinha lá, chamam a atenção dos guardas que se aproximam rapidamente e dizem: \n\n ");
		}
	
	system("pause");
	system("cls");
		
	printf("\n\nCavaleiro 2: Você aí ó ser esquisito, nosso Lorde Farquaad (Já falei que ele é bem alto?) exige sua presença em seu maravilhoso e pomporoso calabouço do Éden, você vai se entregar sem hesitar?\n\n");
	printf("O que você faz?:\n1- Se entregar fácilmente, e game over sem retorno, sinto muito mas aqui é Shrek Souls\n2- Não vou se entregar (INICIA O COMBATE)\n\n");
	scanf("%d",&escolha_2);	
		if(escolha_2==1){
			printf("\n\n\nInfelizmente você foi muito fraco para continuar e uma vergonha para o Shrek e Fiona... FIM DE JOGO\n\n\n\n");
		// Goto Inicio significa que ao escolher essa rota, ele retornará para a linha 14 escrita "inicio:".	
			goto inicio;
		}
		else if(escolha_2==2){
			printf("\n\nVocê escolhe não se entregar.\n\nCavaleiro 1 e 2: -Então pague com seu sangue!!!\n\n(INICIA O COMBATE)\n\n");
		}
		else{
			printf("\n\nOs guardas começam a segurar você e por ninguém se sentir confortável por um agarrão, você decide resistir e se defender \n\n(INICIA O COMBATE)\n\n");
		}
	printf("\n\nO Combate se inicia, Boa Sorte!\n\n");
	
	//Início do Combate.
	
	system("pause");
	system("cls");
				
	printf("\n\nO cavaleiro 1 se aproxima de você. \n\nEle está equipado com uma armadura bem velha e que aparenta frágil e uma espada enferrujada que é mais fácil matar você de tétano do quê com um golpe.\n\n");
  
  	do{
     //Seu turno.
	 printf("\n\nO que você deseja fazer?\n 1-Atacá-lo.\n\n");
     scanf("%d",&escolha_combate);
     if(escolha_combate=1){
        printf("\n\nRole o dado para tentar atacá-lo\n\n");
        scanf("%s",&rolar_dado);
        srand(time(NULL));
        numero_sortido1=(rand() % 10);
        printf("\n\n%d\n\n", numero_sortido1);
    	}
        if(numero_sortido1<2){
           printf("\n\nVocê se apavora ao tentar ataca-lo e acaba escorregando ao fazer o movimento e bate a cabeça no chão.\n\n");
		}
		else if(numero_sortido1<6){
           printf("\n\nVocê tentou bater nele e ele mesmo com essa armadura ruim conseguiu desviar\n\n");
        }
        else{
           printf("\n\nVocê o acerta bem no saco!\n\n");
           cav_hp = cav_hp - dano_base;
           printf("\n\nVida do inimigo = %i\n\n", cav_hp);
       	}  	
		system("pause");
		system("cls");	
		printf("\n\nTURNO DO INIMIGO!!!!\n\n");
		//Turno inimigo
    	printf("\nLá vem o cavaleiro tentar te atacar, o homi é bravo, se prepara\n\n");
        srand(time(NULL));
        numero_sortido1=(rand() % 10);
        if(numero_sortido1<6){
           printf("\n\nO cavaleiro com muito ódio, tenta te acertar, mas por milagre ou sorte você consegue esquivar.\n\n");
    	}
        else{
           printf("\n\nO cavaleiro te acerta bem onde você não queria que acertasse! Doeu muito hein\n\n");
           hp = hp - cav_dano;
           printf("\n\nSua vida é: %i\n\n", hp);
		   }
		}while(cav_hp>0||hp>0);
		
		if(cav_hp <=0){
			printf("Você esbagaça o cavaleiro e todos na taverna fogem temerosos.");
		}
		else if(hp <=0){
			printf("\n\nVocê morreu da forma mais triste de todas... Tente novamente...\n\n");
			goto inicio;
		}
		else{
			printf("FIM DO COMBATE");
		}
	
	printf("\nVocê esbagaça o cavaleiro, todos da taverna se borram de medo e correm temendo suas vidas... Parece que você venceu por equanto...");
	
	printf("Mas espera...\n");
	
	printf("Parece que 3 pessoas não fugiram da brutalidade que você fez com este possível pai de família...");
	
	printf("Estes misteriosos seres, serão seus futuros companheiros em mais jornadas...");
	
	return 0;	
	
	
}

