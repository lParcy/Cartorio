#include <stdio.h> //Biblioteca de comunicaçao com o usuario
#include <stdlib.h> //biblioteca de alocaçao de espaço em memoria
#include <locale.h> //biblioteca de alocaçoes de texto por regiao
#include <string.h> //biblioteca responsavel por cuidar das string
int registro()//função responsavel por cadastrar os usuários no sistema
{
	//inicio criação de variáveis/string
	char arquivo[40]; 
	char cpf[40];
	char nome[40];
	char sobrenome[40];
	char cargo[40];
	//fim da criação de variáveis/string
	
	printf("Digite o CPF a ser cadastrado: ");//coletando informaçao do usuario
	scanf("%s", cpf);//%s refere-se a string e vai armazenar a variavel
	
	strcpy(arquivo, cpf); //Responsavel por copiar os valores das string
	
	FILE *file; //procura na biblioteca e cria o arquivo 
	file = fopen(arquivo, "w"); //cria o arquivo / w significa escrever
	printf("\n"); //espaço pra ficar organizado
	fclose(file); //fecha o arquivo
	
	
	file = fopen(arquivo, "a"); //abrir arquivo e atualizar 'a'
	fprintf(file," CPF do usuario: %s   \n ",cpf);//nomeando o arquivo
	fclose(file);//fecha o arquivo
	
	
	    printf("Digite o nome a ser Cadastrado: " );
	    scanf("%s", nome);//%s refere-se a string e vai armazenar a variavel
	
	
	file = fopen(arquivo, "a"); //abrir arquivo e atualizar 'a'
	printf("\n");//espaço pra ficar organizado
	fclose(file);//fecha o arquivo
	
	file = fopen(arquivo, "a"); //abrir arquivo e atualizar 'a'
	fprintf(file," Nome do usuario: %s \n ",nome);//nomeando o arquivo
	fclose(file);//fecha o arquivo
	
	    printf("Digite o Sobrenome a ser Cadastrado: " );
	    scanf("%s",sobrenome);//%s refere-se a string e vai armazenar a variavel
	
	file = fopen(arquivo, "a"); //abrir arquivo e atualizar 'a'
	printf("\n");//espaço pra ficar organizado
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

int consulta()//função responsavel por consultar os usuários no sistema
{
	setlocale(LC_ALL,"portuguese");//definindo linguagem
	
   char cpf[40];//definindo as variaveis
   char conteudo[200];
   
    printf("Digite o CPF a ser Consultado: ");//perguntando ao usuario
    scanf("%s", cpf);//salvando dentro da string de "CPF" 
    
    FILE *file;//consultar arquivo
    file = fopen(cpf,"r");//abrir arquivo e ler "r"
    
    if(file == NULL)//se o arquivo não existir
    {
    	printf("\n Não foi possivel abrir o arquivo, não localizado!.\n\n");//informando ao usuario
    	system("pause");//pausa o sistema
        return 1;//retorna ao sistema
	}
	
	
	while(fgets(conteudo, 200, file) != NULL)//laço de repetiçao "while || Buscar "fgets" na variavel "conteudo" ate 200 caracters dentro do arquivo "file" || quando nao achar é Nulo "NULL".
	{
		
		printf("%s",conteudo);//salva o conteudo q esta dentro da string	
		
	}	
    fclose(file);//fechar arquivo
 	system("pause"); 	//pausar o sistema
}

int deletar()//função responsavel por deletar os usuários no sistema
{
char cpf[40];//criação de variáveis/string

	printf("Digite o CPF a ser deletado!\n"); //vai mostrar na tela
	scanf("%s",cpf); ////salvando dentro da string de "CPF" 

	
	FILE *file;//procurar arquivo
	file = fopen(cpf,"r");//abrir arquivo
	fclose(file);
      
        char opcao;
    printf("Deseja deletar este usuário do sistema? (S/N): \n");//perguntar ao usuario
    printf("%s",cpf);//mostrar o cpf que vai ser deletado
    printf("\n\n");//Espaço
    getchar(); // Captura o '\n' deixado pelo scanf anterior
    opcao = getchar();//gerando a opçao

   if (opcao == 'S' || opcao == 's')//escolha
	 {
    if (remove(cpf) == 0) //remove o cpf
		{
            printf("Usuário removido com sucesso!\n");//informando o usuario
        } 
	else 
		{
            printf("Erro ao remover o usuário.\n");//informando o usuario
        }
    } 
	else //qualquer letra q nao seja 's' vai dar esse
	{
        printf("Operação cancelada!\n");//informando ao usuario
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
	
	printf("Cartório da EBAC\n\n");
	printf("Login de adminstrador!\n\nDigite o seu Login:");
	scanf("%s",logindigitado);
	printf("Digite a sua Senha: ");
	scanf("%s",senhadigitada);
	
	comparacao = strcmp(logindigitado, "admin"); //string de comparaçao
	if(comparacao == 0)
	{
	
	comparacao = strcmp(senhadigitada, "admin"); //string de comparaçao
	
	if(comparacao == 0)
	{
	
 	    for(laco=1;laco=1;)
    	 {
 		
 		system("cls");// responsavel por limpar a tela

 	    setlocale(LC_ALL, "Portuguese"); //Defininfo a linguagem
 	 
 	    printf("\tRegistro EBAC\n\n"); //inicio do menu
 	    printf("Escolha a opção desejada do menu:\n\n");
 	    printf("\t1 - Registro de usuario\n");
 	    printf("\t2 - Procurar usuario\n");
 	    printf("\t3 - Remover Usuario\n");
 	    printf("\t4 - Sair\n\n");
 	    printf("Opção:"); //fim do menu
 	 
        scanf("%d", &opcao); //armazenando a escolha do usuario
	 
    	 system("cls");// responsavel por limpar a tela
 	 
 	    switch(opcao) //inicio da seleção do menu
 	    {
 	    	case 1:
 	    		registro(); //chamada de funçoes
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
			    printf("Opção inválida!\n");
			    system("pause");
			    break;
				//fim da seleção do menu
		    }
    	}
}
}
     else
         printf("senha incorreta!");//informando ao usuario 
}
	 

 
 

    


