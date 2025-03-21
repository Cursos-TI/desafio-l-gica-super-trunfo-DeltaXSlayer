#include <stdio.h>
#include <locale.h>
//#include <windows.h>

int main(){

    //tentei fazer ler o acento mas não consegui
    //SetConsoleOutputCP(CP_UTF8);
    setlocale(LC_ALL, "Portuguese_Brazil.utf8");
   // #ifdef _WIN32
      //SetConsoleOutputCP(CP_UTF8);
       //SetConsoleCP(CP_UTF8);
   // #endif

    char estado1[50];
    char cartaid1[10];
    char cidade1[50];
    int popu1;
    float area1;
    float pib1;
    unsigned int turistico1;
    float densidade1;
    float percapita1;

    char estado2[50];
    char cartaid2[10];
    char cidade2[50];
    int popu2;
    float area2;
    float pib2;
    unsigned int turistico2;
    float densidade2;
    float percapita2;



printf("Vamos jogar Super Trunfo! \n");
printf("Agora, vamos receber os valores dos status. \n");

//Tive que usar a sintaxe " %49[^\n]" para suportar um texto com espaço

printf("\n Digite o Estado a qual pertence a primeira carta: ");
scanf(" %49[^\n]", estado1);

//printf("Teste com acento %s", estado1);
//aqui no GitHub funciona. Não consegui ler o acento no Visual Studio pelo Windows

printf("\n Digite o código da primeira carta: ");    
scanf(" %s", &cartaid1);

printf("\n Digite o nome da cidade a qual pertence a primeira carta: ");    
scanf(" %49[^\n]", cidade1);

printf("\n Digite a população da primeira carta: ");  
scanf(" %d", &popu1);

printf("\n Digite a area da primeira carta: ");  
scanf(" %f", &area1);

printf("\n Digite o PIB da primeira carta: (use ponto em vez de vírgula para casas decimais) ");  
scanf(" %f", &pib1);

printf("\n Digite a quantidade de pontos turísticos da primeira carta: ");  
scanf(" %u", &turistico1);

//tive que colocar a divisão após a entrada dos valores, pois se colocado antes, o sistema não faz o cálculo.
//por segurança, converti o valor INT de popu para float.

densidade1 = (float)popu1 / area1;
percapita1= pib1 / (float)popu1;


//printf("Area: %f, População: %d \n", area1, popu1);
//printf("A densidade populacional é: %f e o PIB per capta, com base nas informações digitas, é R$%f \n", densidade1, percapita1);



printf("Agora, vamos entrar com os valores da segunda carta! \n");  

printf("\n Digite o Estado a qual pertence a segunda carta: ");
scanf(" %49[^\n]", &estado2);

printf("\n Digite o código da segunda carta: ");    
scanf(" %s", &cartaid2);

printf("\n Digite o nome da cidade a qual pertence a segunda carta: ");    
scanf(" %49[^\n]", &cidade2);

printf("\n Digite a população da segunda carta: ");  
scanf(" %d", &popu2);

printf("\n Digite a area da segunda carta: ");  
scanf(" %f", &area2);

printf("\n Digite o PIB (Produto Interno Bruto) da segunda carta: ");  
scanf(" %f", &pib2);

printf("\n Digite a quantidade de pontos turísticos da segunda carta: ");  
scanf(" %u", &turistico2);

//tive que colocar a divisão após a entrada dos valores, pois se colocado antes, o sistema não faz o cálculo.
//por segurança, converti o valor INT de popu para float.

densidade2 = (float)popu2 / area2;
percapita2 = pib2 / (float)popu2;

//coloquei estes comandos para imprimir se a informação estava calculando corretamente
//printf("Area: %f, População: %d \n", area2, popu2);
//printf("A densidade populacional é: %f e o PIB per capta, com base nas informações digitas, é R$%f \n", densidade2, percapita2);;
//printf(" %f", popu2 / area2);


//aqui, escolherei o atributo PIB per capita como vencedor

if (percapita1>percapita2)
{
    printf("Foi comparado o status de PIB per capita. \n");
    printf("Cidade: %s, PIB per capita: R$%f X Cidade: %s, PIB per capita: R$%f. \n", cidade1, percapita1, cidade2, percapita2);
    printf("A Carta vencedora é a %s, que representa a cidade %s, do Estado %s. \n", cartaid1, cidade1, estado1);

    
}
else
{
    printf("Foi comparado o status de PIB per capita. \n");
    printf("Cidade: %s, PIB per capita: R$%f X Cidade: %s, PIB per capita: R$%f. \n", cidade1, percapita1, cidade2, percapita2);
    printf("A Carta vencedora é a %s, que representa a cidade %s, do Estado %s. \n", cartaid2, cidade2, estado2);
}
printf("Fim de jogo!");

return 0;









}