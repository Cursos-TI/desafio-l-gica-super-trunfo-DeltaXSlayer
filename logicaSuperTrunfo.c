#include <stdio.h>
#include <locale.h>
#include <windows.h>

int main(){

    //tentei fazer ler o acento mas não consegui
    //SetConsoleOutputCP(CP_UTF8);
    //setlocale(LC_ALL, "Portuguese_Brazil.utf8");
   // #ifdef _WIN32
      // SetConsoleOutputCP(CP_UTF8);
       SetConsoleCP(CP_UTF8);
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
    unsigned int menucomparacao1;
    unsigned int menucomparacao2;
    float somaatributos1;
    float somaatributos2;



printf("Vamos jogar Super Trunfo! \n");
printf("Agora, vamos receber os valores dos status. \n");

//Tive que usar a sintaxe " %49[^\n]" para suportar um texto com espaço

printf("\n Digite o Estado a qual pertence a primeira carta: ");
scanf(" %49[^\n]", estado1);

//printf("Teste com acento %s", estado1);

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

printf("Você poderá escolher dois atributos para comparar entre as cartas, que serão somados. Sendo eles: \n");
printf("1 - População. \n");
printf("2 - Área. \n");
printf("3 - PIB. \n");
printf("4 - Quantidade de pontos turísticos. \n");
printf("5 - Densidade demográfica. \n");
printf("Digite o número correspondente ao primeiro atributo a ser comparado e tecle ENTER. \n");
scanf("%u",&menucomparacao1);

//aqui, coloco a escolha do segundo atributo, sempre ocultando o anterior. Caso o usuário escolha o mesmo, retornará a mensagem de opção inválida.

switch(menucomparacao1) {
    case 1:
    printf("Agora, digite o número correspondente ao segundo atributo a ser comparado e tecle ENTER. \n");
    printf("2 - Área. \n");
    printf("3 - PIB. \n");
    printf("4 - Quantidade de pontos turísticos. \n");
    printf("5 - Densidade demográfica. \n");
    scanf("%u",&menucomparacao2);
    if (menucomparacao2 == menucomparacao1) {
        printf("Opção inválida. Não é permitido utilizar duas vezes o mesmo atributo!\n");
    }
    break;

    case 2: 
    printf("Agora, digite o número correspondente ao segundo atributo a ser comparado e tecle ENTER. \n");
    printf("1 - População. \n");
    printf("3 - PIB. \n");
    printf("4 - Quantidade de pontos turísticos. \n");
    printf("5 - Densidade demográfica. \n");
    scanf("%u",&menucomparacao2);
    if (menucomparacao2 == menucomparacao1) {
        printf("Opção inválida. Não é permitido utilizar duas vezes o mesmo atributo!\n");
    }
    break;

    case 3:
    printf("Agora, digite o número correspondente ao segundo atributo a ser comparado e tecle ENTER. \n");
    printf("1 - População. \n");
    printf("2 - Área. \n");
    
    printf("4 - Quantidade de pontos turísticos. \n");
    printf("5 - Densidade demográfica. \n");
    scanf("%u",&menucomparacao2);
    if (menucomparacao2 == menucomparacao1) {
        printf("Opção inválida. Não é permitido utilizar duas vezes o mesmo atributo!\n");
    }
    break;

    case 4:
    printf("Agora, digite o número correspondente ao segundo atributo a ser comparado e tecle ENTER. \n");
    printf("1 - População. \n");
    printf("2 - Área. \n");
    printf("3 - PIB. \n");
   
    printf("5 - Densidade demográfica. \n");
    scanf("%u",&menucomparacao2);
    if (menucomparacao2 == menucomparacao1) {
        printf("Opção inválida. Não é permitido utilizar duas vezes o mesmo atributo!\n");
    }
    break;

    case 5:
    printf("1 - População. \n");
    printf("2 - Área. \n");
    printf("3 - PIB. \n");
    printf("4 - Quantidade de pontos turísticos. \n");
    scanf("%u",&menucomparacao2);
    if (menucomparacao2 == menucomparacao1) {
        printf("Opção inválida. Não é permitido utilizar duas vezes o mesmo atributo!\n");
    }
    
    break;

    default :
    printf("Opção inválida!\n");
    break;
}   
    

//aqui, consegui fazer uma soma eficaz dos atributos. Visto que somar 1 +2 ou 2+1 daria o mesmo resultado pois não existem valores negativos, do jeito que fiz deu certo.
//ao todo, são 10 combinações diferentes de soma, sem repetição, sendo:
/// 1+2, 1+3, 1+4, 1+5, 2+3, 2+4, 2+5, 3+4, 3+5, 4+5

if (menucomparacao1 ==1 && menucomparacao2 ==2 || menucomparacao1 ==2 && menucomparacao2 ==1) {
    somaatributos1 = popu1 + area1;
    somaatributos2 = popu2 + area2;
    printf("Os atributos escolhidos foram: população e área!\n");
    printf("A primeira carta, que representa a cidade de %s possui %d pessoas e sua área é de %f.\n", cidade1, popu1, area1);
    printf("A segunda carta, que representa a cidade de %s possui %d pessoas e sua área é de %f.\n", cidade2, popu2, area2);
    if (somaatributos1 > somaatributos2){
        printf("A carta, que representa a cidade de %s, é a vitoriosa, fazendo o total de %f pontos!\n", cidade1, somaatributos1);
    }   else if (somaatributos2 > somaatributos1) {
        printf("A carta, que representa a cidade de %s, é a vitoriosa, fazendo o total de %f pontos!\n", cidade2, somaatributos2);
    }   else {
        printf("Empate!\n");
    }
}  

    else if (menucomparacao1 ==1 && menucomparacao2 ==3 || menucomparacao1 ==3 && menucomparacao2 ==1) {
    somaatributos1 = popu1 + pib1;
    somaatributos2 = popu2 + pib2;
    printf("Os atributos escolhidos foram: população e PIB!\n");
    printf("A primeira carta, que representa a cidade de %s possui %d pessoas e seu PIB é de %f. \n", cidade1, popu1, pib1);
    printf("A segunda carta, que representa a cidade de %s possui %d pessoas e seu PIB é de %f. \n", cidade2, popu2, pib2);
    if (somaatributos1 > somaatributos2) {
        printf("A carta, que representa a cidade de %s, é a vitoriosa, fazendo o total de %f pontos!\n", cidade1, somaatributos1);
    }   else if (somaatributos2 > somaatributos1) {
        printf("A carta, que representa a cidade de %s, é a vitoriosa, fazendo o total de %f pontos!\n", cidade2, somaatributos2);
    }   else {
        printf("Empate!\n");
    }
}
else if (menucomparacao1 ==1 && menucomparacao2 ==4 || menucomparacao1 ==4 && menucomparacao2 ==1) {
    somaatributos1 = popu1 + turistico1;
    somaatributos2 = popu2 + turistico2;
    printf("Os atributos escolhidos foram: população e Pontos turísticos!\n");
    printf("A primeira carta, que representa a cidade de %s possui %d pessoas e possui %d pontos turísticos. \n", cidade1, popu1, turistico1);
    printf("A segunda carta, que representa a cidade de %s possui %d pessoas e possui %d pontos turísticos. \n", cidade2, popu2, turistico2);
    if (somaatributos1 > somaatributos2) {
        printf("A carta, que representa a cidade de %s, é a vitoriosa, fazendo o total de %f pontos!\n", cidade1, somaatributos1);
    }   else if (somaatributos2 > somaatributos1) {
        printf("A carta, que representa a cidade de %s, é a vitoriosa, fazendo o total de %f pontos!\n", cidade2, somaatributos2);
    }   else {
        printf("Empate!\n");
    }
}
else if (menucomparacao1 ==1 && menucomparacao2 ==5 || menucomparacao1 ==5 && menucomparacao2 ==1) {
    somaatributos1 = popu1 + densidade1;
    somaatributos2 = popu2 + densidade2;
    printf("Os atributos escolhidos foram: população e densidade demográfica!\n");
    printf("A primeira carta, que representa a cidade de %s possui %d pessoas e sua densidade demográfica é de %f. \n", cidade1, popu1, densidade1);
    printf("A segunda carta, que representa a cidade de %s possui %d pessoas e sua densidade demográfica é de %f. \n", cidade2, popu2, densidade2);
    if (somaatributos1 > somaatributos2) {
        printf("A carta, que representa a cidade de %s, é a vitoriosa, fazendo o total de %f pontos!\n", cidade1, somaatributos1);
    }   else if (somaatributos2 > somaatributos1) {
        printf("A carta, que representa a cidade de %s, é a vitoriosa, fazendo o total de %f pontos!\n", cidade2, somaatributos2);
    }   else {
        printf("Empate!\n");
    }
} 
else if (menucomparacao1 ==2 && menucomparacao2 ==3 || menucomparacao1 ==3 && menucomparacao2 ==2) {
    somaatributos1 = area1 + pib1;
    somaatributos2 = area2 + pib2;
    printf("Os atributos escolhidos foram: área e PIB!\n");
    printf("A primeira carta, que representa a cidade de %s possui %.2f de área e seu PIB é de %.2f. \n", cidade1, area1, pib1);
    printf("A segunda carta, que representa a cidade de %s possui %.2f de área e seu PIB é de %.2f. \n", cidade2, area2, pib2);
    if (somaatributos1 > somaatributos2) {
        printf("A carta, que representa a cidade de %s, é a vitoriosa, fazendo o total de %f pontos!\n", cidade1, somaatributos1);
    }   else if (somaatributos2 > somaatributos1) {
        printf("A carta, que representa a cidade de %s, é a vitoriosa, fazendo o total de %f pontos!\n", cidade2, somaatributos2);
    }   else {
        printf("Empate!\n");
    }
}
else if (menucomparacao1 ==2 && menucomparacao2 ==4 || menucomparacao1 ==4 && menucomparacao2 ==2) {
    somaatributos1 = area1 + turistico1;
    somaatributos2 = area2 + turistico2;
    printf("Os atributos escolhidos foram: área e pontos turísticos!\n");
    printf("A primeira carta, que representa a cidade de %s possui uma área de %.2f e possui %d pontos turísticos. \n", cidade1, area1, turistico1);
    printf("A segunda carta, que representa a cidade de %s possui uma área de %.2f e possui %d pontos turísticos. \n", cidade2, area2, turistico2);
    if (somaatributos1 > somaatributos2) {
        printf("A carta, que representa a cidade de %s, é a vitoriosa, fazendo o total de %f pontos!\n", cidade1, somaatributos1);
    }   else if (somaatributos2 > somaatributos1) {
        printf("A carta, que representa a cidade de %s, é a vitoriosa, fazendo o total de %f pontos!\n", cidade2, somaatributos2);
    }   else {
        printf("Empate!\n");
    }    
}
else if (menucomparacao1 ==2 && menucomparacao2 ==5 || menucomparacao1 ==5 && menucomparacao2 ==2) {
    somaatributos1 = area1 + densidade1;
    somaatributos2 = area2 + densidade2;
    printf("Os atributos escolhidos foram: área e densidade demográfica!\n");
    printf("A primeira carta, que representa a cidade de %s possui uma área de %.2f  e sua densidade demográfica é de %.2f. \n", cidade1, area1, densidade1);
    printf("A segunda carta, que representa a cidade de %s possui uma área de %.2f  e sua densidade demográfica é de %.2f. \n", cidade2, area2, densidade2);
    if (somaatributos1 > somaatributos2) {
        printf("A carta, que representa a cidade de %s, é a vitoriosa, fazendo o total de %f pontos!\n", cidade1, somaatributos1);
    }   else if (somaatributos2 > somaatributos1) {
        printf("A carta, que representa a cidade de %s, é a vitoriosa, fazendo o total de %f pontos!\n", cidade2, somaatributos2);
    }   else {
        printf("Empate!\n");
    }
}
else if (menucomparacao1 ==3 && menucomparacao2 ==4 || menucomparacao1 ==4 && menucomparacao2 ==3) {
    somaatributos1 = turistico1 + pib1;
    somaatributos2 = turistico2 + pib2;
    printf("Os atributos escolhidos foram: pontos turísticos e PIB!\n");
    printf("A primeira carta, que representa a cidade de %s possui %d pontos turísticos e seu PIB é de %f. \n", cidade1, turistico1, pib1);
    printf("A segunda carta, que representa a cidade de %s possui %d pontos turísticos e seu PIB é de %f. \n", cidade2, turistico2, pib2);
    if (somaatributos1 > somaatributos2) {
        printf("A carta, que representa a cidade de %s, é a vitoriosa, fazendo o total de %f pontos!\n", cidade1, somaatributos1);
    }   else if (somaatributos2 > somaatributos1) {
        printf("A carta, que representa a cidade de %s, é a vitoriosa, fazendo o total de %f pontos!\n", cidade2, somaatributos2);
    }   else {
        printf("Empate!\n");
    }
}
else if (menucomparacao1 ==3 && menucomparacao2 ==5 || menucomparacao1 ==5 && menucomparacao2 ==3) {
    somaatributos1 = densidade1 + pib1;
    somaatributos2 = densidade2 + pib2;
    printf("Os atributos escolhidos foram: densidade demográfica e PIB!\n");
    printf("A primeira carta, que representa a cidade de %s possui %.2f de densidade demográfica e seu PIB é de %f. \n", cidade1, densidade1, pib1);
    printf("A segunda carta, que representa a cidade de %s possui %.2f de densidade demográfica e seu PIB é de %f. \n", cidade2, densidade2, pib2);
    if (somaatributos1 > somaatributos2) {
        printf("A carta, que representa a cidade de %s, é a vitoriosa, fazendo o total de %f pontos!\n", cidade1, somaatributos1);
    }   else if (somaatributos2 > somaatributos1) {
        printf("A carta, que representa a cidade de %s, é a vitoriosa, fazendo o total de %f pontos!\n", cidade2, somaatributos2);
    }   else {
        printf("Empate!\n");
    }
}
else if (menucomparacao1 ==4 && menucomparacao2 ==5 || menucomparacao1 ==5 && menucomparacao2 ==4) {
    somaatributos1 = densidade1 + turistico1;
    somaatributos2 = densidade2 + turistico2;
    printf("Os atributos escolhidos foram: densidade demográfica e pontos turísticos!\n");
    printf("A primeira carta, que representa a cidade de %s possui %.2f de densidade demográfica e %d pontos turísticos. \n", cidade1, densidade1, turistico1);
    printf("A segunda carta, que representa a cidade de %s possui %.2f de densidade demográfica e %d pontos turísticos. \n", cidade2, densidade2, turistico2);
    if (somaatributos1 > somaatributos2) {
        printf("A carta, que representa a cidade de %s, é a vitoriosa, fazendo o total de %f pontos!\n", cidade1, somaatributos1);
    }   else if (somaatributos2 > somaatributos1) {
        printf("A carta, que representa a cidade de %s, é a vitoriosa, fazendo o total de %f pontos!\n", cidade2, somaatributos2);
    }   else {
        printf("Empate!\n");
    }
}

//vou comentar o bloco abaixo para testes
//este bloco era para o desafio anterior, portanto foi comentado. Agora, no atual desafio, são dois atributos somados.


// switch (menucomparacao1)
// {
//     case 1:
//     printf("O atributo escolhido foi: População.\n");
//     printf("A população da carta da cidade de %s é de %d.\n",cidade1,popu1);
//     printf("A população da carta da cidade de %s é de %d.\n",cidade2,popu2);
//         if(popu1>popu2) {
//             printf("A carta em nome da cidade de %s é a vencedora!\n",cidade1);
//         } else if (popu2>popu1) {
//             printf("A carta em nome da cidade de %s é a vencedora!\n",cidade2);
//         }   else {
//             printf("As cidades possuem o mesmo número de habitantes. Empate!\n");
//         }
//     break;
//     case 2:
//     printf("O atributo escolhido foi: Área.\n");
//     printf("A área da carta da cidade de %s é de  %f.\n",cidade1,area1);
//     printf("A área da carta da cidade de %s é de  %f.\n",cidade2,area2);
//         if(area1>area2) {
//             printf("A carta em nome da cidade de %s é a vencedora!\n",cidade1);
//         } else if (area2>area1) {
//             printf("A carta em nome da cidade de %s é a vencedora!\n",cidade2);
//         }   else {
//             printf("As cidades possuem a mesma área. Empate!\n");
//         }
//     break;
//     case 3:
//     printf("O atributo escolhido foi: PIB.\n");
//     printf("O PIB da carta da cidade de %s é de  %f.\n",cidade1,pib1);
//     printf("O PIB da carta da cidade de %s é de %f.\n",cidade2,pib2);
//         if(pib1>pib2) {
//             printf("A carta em nome da cidade de %s é a vencedora!\n",cidade1);
//         } else if (pib2>pib1) {
//             printf("A carta em nome da cidade de %s é a vencedora!\n",cidade2);
//         }   else {
//             printf("As cidades possuem o mesmo PIB. Empate!\n");
//         }    
//     break;
//     case 4:
//     printf("O atributo escolhido foi: Pontos turísticos.\n");
//     printf("A quantidade de pontos turísticos da carta da cidade de %s é de %d.\n",cidade1,turistico1);
//     printf("A quantidade de pontos turísticos da carta da cidade de %s é de %d.\n",cidade2,turistico2);
//         if(turistico1>turistico2) {
//             printf("A carta em nome da cidade de %s é a vencedora!\n",cidade1);
//         } else if (turistico2>turistico1) {
//             printf("A carta em nome da cidade de %s é a vencedora!\n",cidade2);
//         }   else {
//             printf("As cidades possuem a mesma quantidade de pontos turísticos. Empate!\n");
//         }    
//     break;
//     case 5:
//     printf("O atributo escolhido foi: Densidade demográfica.\n");
//     printf("A Densidade demográfica da carta da cidade de %s é de %f.\n",cidade1,densidade1);
//     printf("A Densidade demográfica da carta da cidade de %s é de %f.\n",cidade2,densidade2);
//         if(densidade1>densidade2) {
//             printf("A carta em nome da cidade de %s é a vencedora!\n",cidade2);
//         } else if (densidade2>densidade1) {
//             printf("A carta em nome da cidade de %s é a vencedora!\n",cidade1);
//         }   else {
//             printf("As cidades possuem a mesma quantidade de pontos turísticos. Empate!\n");
//         }    
//     break;
// default:
//     printf("Opção inválida, tente novamente.\n");
//     break;
// }


//até aqui os testes

//aqui, escolherei o atributo PIB per capita como vencedor

// if (percapita1>percapita2)
// {
//     printf("Foi comparado o status de PIB per capita. \n");
//     printf("Cidade: %s, PIB per capita: R$%f X Cidade: %s, PIB per capita: R$%f. \n", cidade1, percapita1, cidade2, percapita2);
//     printf("A Carta vencedora é a %s, que representa a cidade %s, do Estado %s. \n", cartaid1, cidade1, estado1);

    
// }
// else
// {
//     printf("Foi comparado o status de PIB per capita. \n");
//     printf("Cidade: %s, PIB per capita: R$%f X Cidade: %s, PIB per capita: R$%f. \n", cidade1, percapita1, cidade2, percapita2);
//     printf("A Carta vencedora é a %s, que representa a cidade %s, do Estado %s. \n", cartaid2, cidade2, estado2);
// }
printf("Fim de jogo!");

return 0;

}