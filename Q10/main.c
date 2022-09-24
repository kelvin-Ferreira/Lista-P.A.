#include <stdio.h>

int main()
{
    char v1[4]="abcd";
    short int v2[4]={1,2,3,4};
    float v3[4]={0.1,0.2,0.3,0.4};
    double v4[4]={1.1,2.2,3.3,4.4};

    printf("Resultado para char:\n");
    printf("%d\n", (v1+1));
    printf("%d\n", (v1+2));
    printf("%d\n", (v1+3));

    printf("Resultado para int:\n");
    printf("%d\n", (v2+1));
    printf("%d\n", (v2+2));
    printf("%d\n", (v2+3));

    printf("Resultado para float:\n");
    printf("%d\n", (v3+1));
    printf("%d\n", (v3+2));
    printf("%d\n", (v3+3));

    printf("Resultado para double:\n");
    printf("%d\n", (v4+1));
    printf("%d\n", (v4+2));
    printf("%d\n", (v4+3));

    /*As respostas dadas pelo programa estão de acordo com as idealizadas na
    questão anterior, um salto de 1, 2, 4 e 8 endereços de memoria entre os espaços
    dos vetors de cada tipo ('char', 'int', 'float' e 'double' respectivamente).*/

    return 0;
}
