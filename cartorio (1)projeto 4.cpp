#include <stdio.h>// biblioteca de comunicação com o usuário
#include <stdlib.h>//biblioteca de alocação de espaço em memória
#include <locale.h>//biblioteca de alocações de texto por região
#include <string.h>//biblioteca responsavel por cuidar das string

int registro() //função por cadastrar os usuarios no sistema
{
	//inicio criação de variaveis/string
   	 char arquivo[40];
   	 char cpf[40];
   	 char nome[40];
   	 char sobrenome[40];
   	 char cargo[40];
   	//fim criação de variaveis
   	
   	 printf("Digite o cpf a ser cadastrado: "); //coletando informação do usuario
   	 scanf("%s", cpf); //%s refere-se a string
   	
   	 strcpy(arquivo, cpf); //responsavel por copiar os valores das string
   	
   	 FILE *file; // cria o arquivo
   	 file = fopen(arquivo, "w"); // cria o arquivo
   	 fprintf(file,cpf); // salvo o valor da variavel
   	 fclose(file); //fecha o arquivo
   	
   	 file = fopen(arquivo, "a");
   	 fprintf(file,",");
   	 fclose(file);
   	
   	 printf("digite o nome a ser cadastrado: "); //a refere-se atualizar o arquivo
   	 scanf("%s",nome);
   	
   	 file = fopen(arquivo, "a");
   	 fprintf(file,nome);
   	 fclose(file);
   	
   	 file = fopen(arquivo, "a");
   	 fprintf(file,",");
   	 fclose(file);
   	
   	 printf("digite o sobrenome a ser cadastrado: ");
   	 scanf("%s",sobrenome);
   	
   	 file = fopen(arquivo, "a");
   	 fprintf(file,sobrenome);
   	 fclose(file);
   	
   	 file = fopen(arquivo, "a");
   	 fprintf(file,",");
   	 fclose(file);
   	
   	 printf("digite o cargo a ser cadastrado: ");
   	 scanf("%s",cargo);
   	
   	 file = fopen(arquivo, "a");
   	 fprintf(file,cargo);
   	 fclose(file);
   	
   	 system("pause");
   	   	    
}

int consulta()
{
	setlocale(LC_ALL, "Portuguese"); //definindo a linguagem
	    
	     char cpf[40];
	     char conteudo[200];
	    
	     printf("Digite o cpf a ser consultado: ");
	     scanf("%s",cpf);
	    
	     FILE *file;
	     file = fopen(cpf,"r");
	 
     if(file == NULL)
     { 
         printf("nao foi possivel abrir o arquivo, nao localizado!.\n");
	 }
	 
	 while(fgets(conteudo, 200, file) != NULL) //NULL refere-se a nulo  //while refere-se a enquant estiver escrevendo
	 {
	
	     printf("\nEssas sao informacoes do usuario: ");
	     printf("%s", conteudo);
	     printf("\n\n");   
     } 
    
         system("pause"); 
}  
 
int deletar()
{
    char cpf[40];
    
	printf("digite o cpf do usuario a ser deletado: ");
	scanf("%s",cpf);
	
	remove(cpf);
	
	FILE *file;
	file = fopen(cpf,"r"); //r refere-se a ler o arquivo
	
	if(file == NULL)
	{
		printf(" o usuario nao  se encontra no sistema!.\n ");
		system("pause");
	}
	
	    printf("usuario foi removido: ");
	    system("pause");
	
}
int main()
    {
    int opcao=0; //definindo variaveis
    int laco=1;
		
    for(laco=1;laco=1;)
    {
	
        system("cls");
	    
        setlocale(LC_ALL, "Portuguese"); //definindo a linguagem
    
    	printf("### cartorio de EBAC ###\n\n"); //inicio do menu
    	printf("Escolha a opçao desejada do menu:\n\n"); 
	    printf("\t1 - registrar nomes \n");
	    printf("\t2 - consultar nomes \n");
	    printf("\t3 - deletar nomes\n");
	    printf("opcao: ");//fim do menu
	
	    scanf("%d", &opcao); //armazenando a escolha do usuario 
      
        system("cls"); //responsavel por limpar a tela      	
	
		
	switch(opcao) //inicio da seleção
	{
		case 1: //fala tudo o que vai acontecer
        registro(); //chamada de funções
        break;
		 	    
 	    case 2:
        consulta();
        break;
     
        case 3:
        deletar();
        break; 
     
        default:
        printf("Essa opcao nao esta disponivel!\n");
        system("pause");	
        break; 
	}    	   
                             
    if(opcao==1) //inicio da seleçao 
    {
        printf("voce escolheu o registro de nomes!\n"); 	
	    system("pause");		
	}
	if(opcao==2)  
    {    
        printf("voce escolheu consultar os nome!\n");
        system("pause");
    }
    if(opcao==3) 
	{
	    printf("voce escolheu deletar nomes!\n");
        system("pause");
    }
    if(opcao>=4 || opcao<=0)
    {
        printf("Essa opcao nao esta disponivel!\n");
        system("pause");
    } //fim da selecao 

}
    
 }

 
	
	
	
	

