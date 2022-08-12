#include <stdio.h>

int main()
{
    int idade, nova_idade;

    printf("Ola, Digite sua idade:\n ");
    scanf("%i", &idade);



    nova_idade = idade + 1;

    printf("No proximo ano voce vai fazer: %i\n ", nova_idade);


    return 0;
}
