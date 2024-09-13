#include <stdio.h> //Biblioteca de comunica�ao com o usuario
#include <stdlib.h> //biblioteca de aloca�ao de espa�o em memoria
#include <locale.h> //biblioteca de aloca�oes de texto por regiao
#include <string.h> //biblioteca responsavel por cuidar das string
int registro()//fun��o responsavel por cadastrar os usu�rios no sistema
{
	//inicio cria��o de vari�veis/string
	char arquivo[40]; 
	char cpf[40];
	char nome[40];
	char sobrenome[40];
	char cargo[40];
	//fim da cria��o de vari�veis/string
	
	printf("Digite o CPF a ser cadastrado: ");//coletando informa�ao do usuario
	scanf("%s", cpf);//%s refere-se a string e vai armazenar a variavel
	
	strcpy(arquivo, cpf); //Responsavel por copiar os valores das string
	
	FILE *file; //procura na biblioteca e cria o arquivo 
	file = fopen(arquivo, "w"); //cria o arquivo / w significa escrever
	printf("\n"); //espa�o pra ficar organizado
	fclose(file); //fecha o arquivo
	
	
	file = fopen(arquivo, "a"); //abrir arquivo e atualizar 'a'
	fprintf(file," CPF do usuario: %s   \n ",cpf);//nomeando o arquivo
	fclose(file);//fecha o arquivo
	
	
	    printf("Digite o nome a ser Cadastrado: " );
	    scanf("%s", nome);//%s refere-se a string e vai armazenar a variavel
	
	
	file = fopen(arquivo, "a"); //abrir arquivo e atualizar 'a'
	printf("\n");//espa�o pra ficar organizado
	fclose(file);//fecha o arquivo
	
	file = fopen(arquivo, "a"); //abrir arquivo e atualizar 'a'
	fprintf(file," Nome do usuario: %s \n ",nome);//nomeando o arquivo
	fclose(file);//fecha o arquivo
	
	    printf("Digite o Sobrenome a ser Cadastrado: " );
	    scanf("%s",sobrenome);//%s refere-se a string e vai armazenar a variavel
	
	file = fopen(arquivo, "a"); //abrir arquivo e atualizar 'a'
	printf("\n");//espa�o pra ficar organizado
	fclose(file);//fecha o arquivo
	
	file = fopen(arquivo, "a"); //abrir arquivo e atualizar 'a'
	fprintf(file," Sobrenome do usuario: %s   \n",sobrenome);//nomeando o arquivo
	printf("\n");
	fclose(file);//fecha o arquivo
	
	    printf("Digite o cargo a ser Cadastrado: ");
	    scanf("%s",cargo);//%s refere-se a string e vai armazenar a variavel
	
	file = fopen(arquivo, "a"); //abrir arquivo e atualizar 'a'
	fclose(file);//fecha o arquivo
	
	file = fopen(arquivo, "a"); //abrir arquivo e atualizar 'a'
	fprintf(file," Cargo do usuario: %s \n\n ",cargo);//nomeando o arquivo
	fclose(file);//fecha o arquivo
	printf("\n");
	printf("Cadastro realizado com sucesso!\n");//informando ao usuario
	
	system("pause");//pausa o sistema
	
	
	
		
}

int consulta()//fun��o responsavel por consultar os usu�rios no sistema
{
	setlocale(LC_ALL,"portuguese");//definindo linguagem
	
   char cpf[40];//definindo as variaveis
   char conteudo[200];
   
    printf("Digite o CPF a ser Consultado: ");//perguntando ao usuario
    scanf("%s", cpf);//salvando dentro da string de "CPF" 
    
    FILE *file;//consultar arquivo
    file = fopen(cpf,"r");//abrir arquivo e ler "r"
    
    if(file == NULL)//se o arquivo n�o existir
    {
    	printf("\n N�o foi possivel abrir o arquivo, n�o localizado!.\n\n");//informando ao usuario
    	system("pause");//pausa o sistema
        return 1;//retorna ao sistema
	}
	
	
	while(fgets(conteudo, 200, file) != NULL)//la�o de repeti�ao "while || Buscar "fgets" na variavel "conteudo" ate 200 caracters dentro do arquivo "file" || quando nao achar � Nulo "NULL".
	{
		
		printf("%s",conteudo);//salva o conteudo q esta dentro da string	
		
	}	
    fclose(file);//fechar arquivo
 	system("pause"); 	//pausar o sistema
}

int deletar()//fun��o responsavel por deletar os usu�rios no sistema
{
char cpf[40];//cria��o de vari�veis/string

	printf("Digite o CPF a ser deletado!\n"); //vai mostrar na tela
	scanf("%s",cpf); ////salvando dentro da string de "CPF" 

	
	FILE *file;//procurar arquivo
	file = fopen(cpf,"r");//abrir arquivo
	fclose(file);
      
        char opcao;
    printf("Deseja deletar este usu�rio do sistema? (S/N): \n");//perguntar ao usuario
    printf("%s",cpf);//mostrar o cpf que vai ser deletado
    printf("\n\n");//Espa�o
    getchar(); // Captura o '\n' deixado pelo scanf anterior
    opcao = getchar();//gerando a op�ao

   if (opcao == 'S' || opcao == 's')//escolha
	 {
    if (remove(cpf) == 0) //remove o cpf
		{
            printf("Usu�rio removido com sucesso!\n");//informando o usuario
        } 
	else 
		{
            printf("Erro ao remover o usu�rio.\n");//informando o usuario
        }
    } 
	else //qualquer letra q nao seja 's' vai dar esse
	{
        printf("Opera��o cancelada!\n");//informando ao usuario
    }

    system("pause");//pausa o sistema
    return 0;
    		  
	//fim da variavel de escolha
}
int main()
{
	setlocale(LC_ALL,"portuguese");//definindo linguagem
	int opcao=0; //Definindo as Variaveis
	int laco=1;
	char senhadigitada[10]="a";
	char logindigitado[10]="b";
	int comparacao;
	
	printf("Cart�rio da EBAC\n\n");
	printf("Login de adminstrador!\n\nDigite o seu Login:");
	scanf("%s",logindigitado);
	printf("Digite a sua Senha: ");
	scanf("%s",senhadigitada);
	
	comparacao = strcmp(logindigitado, "admin"); //string de compara�ao
	if(comparacao == 0)
	{
	
	comparacao = strcmp(senhadigitada, "admin"); //string de compara�ao
	
	if(comparacao == 0)
	{
	
 	    for(laco=1;laco=1;)
    	 {
 		
 		system("cls");// responsavel por limpar a tela

 	    setlocale(LC_ALL, "Portuguese"); //Defininfo a linguagem
 	 
 	    printf("\tRegistro EBAC\n\n"); //inicio do menu
 	    printf("Escolha a op��o desejada do menu:\n\n");
 	    printf("\t1 - Registro de usuario\n");
 	    printf("\t2 - Procurar usuario\n");
 	    printf("\t3 - Remover Usuario\n");
 	    printf("\t4 - Sair\n\n");
 	    printf("Op��o:"); //fim do menu
 	 
        scanf("%d", &opcao); //armazenando a escolha do usuario
	 
    	 system("cls");// responsavel por limpar a tela
 	 
 	    switch(opcao) //inicio da sele��o do menu
 	    {
 	    	case 1:
 	    		registro(); //chamada de fun�oes
 		        break;
 		    
			case 2:   
			    consulta(); 
 		        break;
 		        
 		    case 3:    
 		        deletar();
		        break;
		        
		    case 4:
                printf("Saindo...\n");
                exit(0); // Encerra o programa
		        
		    default:
			    printf("Op��o inv�lida!\n");
			    system("pause");
			    break;
				//fim da sele��o do menu
		    }
    	}
}
}
     else
         printf("senha incorreta!");//informando ao usuario 
}
	 

 
 

    


