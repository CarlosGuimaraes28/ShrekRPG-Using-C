#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <locale.h>
#include <time.h>

int main()
{
	
	//Uso do setlocale para usar '�' ou acentua��o.	
	setlocale(LC_ALL, "Portuguese");
	
	//                 Declara��o de v�riaveis.
	
	int i;
	int forca,agilidade,inteligencia,constituicao,carisma ;
	char nomesPersonagem[1][20];
	char raca[4][100] ={ "Ogro", "Humano", "Fada","Elfo" };
	char classe[4][15] ={ "Guerreiro", "Arqueiro", "Mago","Clerigo" };
	char habilidade[3][100];
	
	int valorRecebido;
	int racaSelect [4];
	int classSelect[4];
	
	//V�riaveis de escolhas.
	int escolha_1, escolha_2;
	
	//V�riaveis de combate.
	char rolar_dado[10];
	int cav_dano = 10;
	int cav_hp = 50;
	int numero_sortido1;
	int escolha_combate, tentar_novamente;
	int hp = 100;
	int dano_base = 10;
	
	
	
	/*In�cio do programa com:
		Introdu��o;
		Cria��o da ficha;	
		Contem a cria��o do seu personagem neste primeiro bloco contem as defini��es de:
		Nome,Classe e ra�a.
	*/
		
		printf("                                        CAVERNA DOS SHREKS\n\n\n");
		
		printf("Bem-Vindo ao Contos de T�o T�o Distante!\n\n\n");
		
		system("pause");
		
		printf("\n\n\nAqui, voc� ir� explorar durante poucas linhas o universo de Shrek n�o contada nos filmes... Se divirta!");
		
		printf("\nPrimeiramente, come�aremos com a cria��o do seu personagem meu aventureiro!\n\n\n");
		
		system("pause");
			
		printf("\nDigite o nome do seu persongem:\n\n");
		scanf("%s",&nomesPersonagem[0]);
		selectRaca:
		printf("\nEscolha sua ra�a \n\n           0-Ogro 1-Humano\n           2-Fada 3-elfo\n");
		
		scanf("%d",&racaSelect[0]);
		valorRecebido = racaSelect[0];	
		printf("\nSua escolha foi '%s'\n\n Deseja continuar?? \n\n           1-voltar a escolha de ra�a\n          2-Qualquer outro valor para continuar \n",raca[valorRecebido]);
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
		printf("\nSeu nome �:%s\nSua ra�a �: %s\nSua classe �: %s\n\n",nomesPersonagem[0],raca[val1],classe[valorRecebido]);
		/*
		Segundo bloco :Neste bloco contem a sele��o de atributos com base de sua ra�a

		*/
		// Segundo bloco 
	printf("Agora � hora dos atributos\n");
	system("pause");
	system("cls");
	   if(racaSelect[0]==0){
              
              printf("\n A ra�a dos ogros, fortes, resistentes agressivos e burros.\n");
              system("pause");
              printf("\nAtribua com sabedoria seus pontos de habilidade.\nVoc� tem apenas 10 pontos para distribuir: \n");
              	
				 atributos:
    	       do{   
               printf("\nVoc� ainda somar com os atributos base com base da sua ra�a\nDigite os pontos de for�a,agilidade,inteligencia,constitui��o e carisma apos digitar pressione enter: \n");
               scanf("%d%d%d%d%d",&forca,&agilidade,&inteligencia,&constituicao,&carisma);
               if(forca+agilidade+inteligencia+constituicao+carisma>10){
               	printf("\nVoc� ultrapassou o limite de 10 digite novamente\n");
               	goto atributos ;
			   }if (forca+agilidade+inteligencia+constituicao+carisma<10){
			   	printf("\n Voce n�o atribuiu todos os pontos digite novamente\n");
			   	goto atributos;
			   }
				}while(forca+agilidade+inteligencia+constituicao+carisma < 10);
				forca=forca+5;
				agilidade=agilidade+1;
				inteligencia=inteligencia-4;
				constituicao=constituicao+4;
				carisma=carisma-3;
				printf("\nSeus abitibutos s�o \n\nfor�a %d   inteligencia =%d   constitui��o = %d carisma =%d\n",forca,agilidade,constituicao,carisma);
              }
              system("pause");
		  if (racaSelect[0]==1){
   				printf("\n A ra�a dos Humanos, N�o muito fracos, Com uma consideravel resistencia e Espertos.\n");
   				system("pause");
              printf("\nAtribua com sabedoria seus pontos de habilidade.\nVoc� tem apenas 10 pontos para distribuir: \n");
              atributos1:
    	       do{   
               printf("\nVoce ainda somar com os atributos base com base da sua ra�a\nDigite os pontos de for�a,agilidade,inteligencia,constitui��o e carisma apos digitar pressione enter: \n");
               scanf("%d%d%d%d%d",&forca,&agilidade,&inteligencia,&constituicao,&carisma);
               if(forca+agilidade+inteligencia+constituicao+carisma>10){
               	printf("\nVoce ultrapassou o limite de 10 digite novamente\n");
               	goto atributos1 ;
			   }if (forca+agilidade+inteligencia+constituicao+carisma<10){
			   	printf("\n Voce n�o atribuiu todos os pontos digite novamente\n");
			   	goto atributos1 ;
			   }
				}while(forca+agilidade+inteligencia+constituicao+carisma < 10);
				forca=forca+0;
				agilidade=agilidade+1;
				inteligencia=inteligencia+2;
				constituicao=constituicao-3;
				carisma=carisma+4;
            	printf("\nSeus abitibutos s�o \n\nfor�a %d   inteligencia =%d   constitui��o = %d carisma =%d\n\n",forca,agilidade,constituicao,carisma);  
			  }if (racaSelect[0]==2){
				printf("\n A ra�a das fadas, Frageis, praticamente sem resistencia porem espertas e fofas.\n");
				system("pause");
              printf("\nAtribua com sabedoria seus pontos de habilidade.\nVoc� tem apenas 10 pontos para distribuir: \n");
              atributos2 :
    	       do{   
               printf("\nVoce ainda somar com os atributos base com base da sua ra�a\nDigite os pontos de for�a,agilidade,inteligencia,constitui��o e carisma apos digitar pressione enter: \n");
               scanf("%d%d%d%d%d",&forca,&agilidade,&inteligencia,&constituicao,&carisma);
               if(forca+agilidade+inteligencia+constituicao+carisma>10){
               	printf("\nVoc� ultrapassou o limite de 10 digite novamente\n");
               	goto atributos2 ;
			   }if (forca+agilidade+inteligencia+constituicao+carisma<10){
			   	printf("\n Voc� n�o atribuiu todos os pontos digite novamente\n");
			   	goto atributos2 ;
			   }
				}while(forca+agilidade+inteligencia+constituicao+carisma < 10);
				forca=forca-3;
				agilidade=agilidade+1;
				inteligencia=inteligencia+4;
				constituicao=constituicao-5;
				carisma=carisma+6;
				printf("\nSeus abitibutos s�o \n\nfor�a %d   inteligencia =%d   constitui��o = %d carisma =%d\n",forca,agilidade,constituicao,carisma);  
				
			  }if(classSelect[i]==3){    
			printf("\n A ra�a das elfo, Frageis, praticamente sem resistencia porem muito rapido e amigaveis.\n");
			system("pause");
              printf("\nAtribua com sabedoria seus pontos de habilidade.\nVoc� tem apenas 10 pontos para distribuir: \n");
              atributos3:
    	       do{   
               printf("\nVoce ainda somar com os atributos base com base da sua ra�a\nDigite os pontos de for�a,agilidade,inteligencia,constitui��o e carisma apos digitar pressione enter: \n");
               scanf("%d%d%d%d%d",&forca,&agilidade,&inteligencia,&constituicao,&carisma);
               if(forca+agilidade+inteligencia+constituicao+carisma>10){
               	printf("\nVoc� ultrapassou o limite de 10 digite novamente\n");
               	goto atributos3 ;
			   }if (forca+agilidade+inteligencia+constituicao+carisma<10){
			   	printf("\n Voc� n�o atribuiu todos os pontos digite novamente\n");
			   	goto atributos3	;
			   }
				}while(forca+agilidade+inteligencia+constituicao+carisma < 10);
				forca=forca-4;
				agilidade=agilidade+7;
				inteligencia=inteligencia+1;
				constituicao=constituicao-6;
				carisma=carisma+2;
				printf("\nSeus abitibutos s�o \n\nfor�a %d   inteligencia =%d   constitui��o = %d carisma =%d\n",forca,agilidade,constituicao,carisma);  	  
		}
				system("cls");
				/*
				Terceiro bloco: Contem a cria��o de suas habilidades			
	      		*/
	      		//Terceiro bloco
				printf("\nDigite suas 3 habilidades sua classe �: %s \n\n Digite sua primeira habilidade: ",classe[0]);   
				scanf("%s",&habilidade[0]); 
				printf("\nDigite sua 2 habilidade: ");
				scanf("%s",habilidade[1]);	
				printf("\nDigite sua 3 habilidade: ");
				scanf("%s",habilidade[2]);
				
				printf("\nSuas hablidades s�o: %s , %s , %s\n",habilidade[0],habilidade[1],habilidade[2]);
				system("pause");
				system("cls");
	
	
	//Narra��o do ambiente com uso de Narrador Observador.
	inicio:
	printf("�NICIO DA HIST�RIA: \n\n\n");
	
	printf("Narrador: A aventura se inicia, voc� e aqueles que logo ir�o se juntar a ti, se encontram todos na Ma�� Envenenada\n\n");
	
	printf("Narrador: O Local era uma taverna suja e com baixa ilumina��o, v�rias mesas redondas espalhadas ao redor.\nEstava com uma clientela enorme mas n�o t�o civilizada ou de bons cora��es.\n\n");
	
	printf("Narrador: Dois cavaleiros do lorde Farquaad adentram o recinto com um chute tremendo na porta,\nchamando a aten��o de todos a sua volta\n\n");
	
	printf("Narrador: Os cavaleiros tocam a trombeta sinalizando suas chegadas e anunciam para todos o que procuram\n\n");
	
	printf("Cavaleiro 1: - Estamos atr�s de monstros e seres praticantes de magias, muitos fazendeiros afirmam que eles ultrapassam pela regi�o de nosso lorde extremamente alto Farquaad.\n\n");
	
	printf("Narrador: Voc� aventueiro, se sente encurralado pois por azar do destino voc� se encaixa na descri��o.");
	
	//Uso de If, Else If e Else para escolha de rotas
	printf("O que voc� faz?:\n1- Desafiar os guardas \n2- Permanece em sil�ncio\n3- Chora\n\n");
    scanf("%d",&escolha_1);
    	if(escolha_1==1){
        	printf("\nVoc� escolheu desafiar os guardas\n Logo ao se levantar.. \nRapidamente chamando a aten��o dos dois que correm em sua dire��o.\n\n");
         }
        else if(escolha_1==2){
        	printf("\n\nVoc� escolheu permancecer em sil�ncio.\n\n Os dois guardas adentram mais fundo no recinto olhando pessoa por pessoa. At� que voc�, um dos �nicos seres bizarros que tinha l�, chamam a aten��o dos guardas que se aproximam rapidamente e dizem: \n\n");    
         }
		else if(escolha_1==3){
			printf("\n\nVoc� come�a a chorar que nem um beb� fazendo com que todos ao redor comecem a rir e apontar os indicadores de suas m�os � voc�\n\n Os guardas rapidamente v�o em sua dire��o e dizem: \n\n");
		}
		else{
			printf("\n\nVoc� n�o faz nada.\n\nOs dois guardas adentram mais fundo no recinto olhando pessoa por pessoa.\n\nAt� que voc�, um dos �nicos seres bizarros que tinha l�, chamam a aten��o dos guardas que se aproximam rapidamente e dizem: \n\n ");
		}
	
	system("pause");
	system("cls");
		
	printf("\n\nCavaleiro 2: Voc� a� � ser esquisito, nosso Lorde Farquaad (J� falei que ele � bem alto?) exige sua presen�a em seu maravilhoso e pomporoso calabou�o do �den, voc� vai se entregar sem hesitar?\n\n");
	printf("O que voc� faz?:\n1- Se entregar f�cilmente, e game over sem retorno, sinto muito mas aqui � Shrek Souls\n2- N�o vou se entregar (INICIA O COMBATE)\n\n");
	scanf("%d",&escolha_2);	
		if(escolha_2==1){
			printf("\n\n\nInfelizmente voc� foi muito fraco para continuar e uma vergonha para o Shrek e Fiona... FIM DE JOGO\n\n\n\n");
		// Goto Inicio significa que ao escolher essa rota, ele retornar� para a linha 14 escrita "inicio:".	
			goto inicio;
		}
		else if(escolha_2==2){
			printf("\n\nVoc� escolhe n�o se entregar.\n\nCavaleiro 1 e 2: -Ent�o pague com seu sangue!!!\n\n(INICIA O COMBATE)\n\n");
		}
		else{
			printf("\n\nOs guardas come�am a segurar voc� e por ningu�m se sentir confort�vel por um agarr�o, voc� decide resistir e se defender \n\n(INICIA O COMBATE)\n\n");
		}
	printf("\n\nO Combate se inicia, Boa Sorte!\n\n");
	
	//In�cio do Combate.
	
	system("pause");
	system("cls");
				
	printf("\n\nO cavaleiro 1 se aproxima de voc�. \n\nEle est� equipado com uma armadura bem velha e que aparenta fr�gil e uma espada enferrujada que � mais f�cil matar voc� de t�tano do qu� com um golpe.\n\n");
  
  	do{
     //Seu turno.
	 printf("\n\nO que voc� deseja fazer?\n 1-Atac�-lo.\n\n");
     scanf("%d",&escolha_combate);
     if(escolha_combate=1){
        printf("\n\nRole o dado para tentar atac�-lo\n\n");
        scanf("%s",&rolar_dado);
        srand(time(NULL));
        numero_sortido1=(rand() % 10);
        printf("\n\n%d\n\n", numero_sortido1);
    	}
        if(numero_sortido1<2){
           printf("\n\nVoc� se apavora ao tentar ataca-lo e acaba escorregando ao fazer o movimento e bate a cabe�a no ch�o.\n\n");
		}
		else if(numero_sortido1<6){
           printf("\n\nVoc� tentou bater nele e ele mesmo com essa armadura ruim conseguiu desviar\n\n");
        }
        else{
           printf("\n\nVoc� o acerta bem no saco!\n\n");
           cav_hp = cav_hp - dano_base;
           printf("\n\nVida do inimigo = %i\n\n", cav_hp);
       	}  	
		system("pause");
		system("cls");	
		printf("\n\nTURNO DO INIMIGO!!!!\n\n");
		//Turno inimigo
    	printf("\nL� vem o cavaleiro tentar te atacar, o homi � bravo, se prepara\n\n");
        srand(time(NULL));
        numero_sortido1=(rand() % 10);
        if(numero_sortido1<6){
           printf("\n\nO cavaleiro com muito �dio, tenta te acertar, mas por milagre ou sorte voc� consegue esquivar.\n\n");
    	}
        else{
           printf("\n\nO cavaleiro te acerta bem onde voc� n�o queria que acertasse! Doeu muito hein\n\n");
           hp = hp - cav_dano;
           printf("\n\nSua vida �: %i\n\n", hp);
		   }
		}while(cav_hp>0||hp>0);
		
		if(cav_hp <=0){
			printf("Voc� esbaga�a o cavaleiro e todos na taverna fogem temerosos.");
		}
		else if(hp <=0){
			printf("\n\nVoc� morreu da forma mais triste de todas... Tente novamente...\n\n");
			goto inicio;
		}
		else{
			printf("FIM DO COMBATE");
		}
	
	printf("\nVoc� esbaga�a o cavaleiro, todos da taverna se borram de medo e correm temendo suas vidas... Parece que voc� venceu por equanto...");
	
	printf("Mas espera...\n");
	
	printf("Parece que 3 pessoas n�o fugiram da brutalidade que voc� fez com este poss�vel pai de fam�lia...");
	
	printf("Estes misteriosos seres, ser�o seus futuros companheiros em mais jornadas...");
	
	return 0;	
	
	
}

