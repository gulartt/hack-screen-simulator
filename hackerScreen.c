#include <stdlib.h>
#include <stdio.h>
#include <locale.h>
#include <conio.h>
#include <math.h>

// Samuel Gulart Moura - https://www.linkedin.com/in/samuel-gulart-656971216 - 09/01/2022

void limpaTela()
{
    system("@cls||clear");
}

main(){

    char randomKeys[][45] = {"Checking Values ", "Testing Updates ", "Struct group info ", ".Usage Storage Style ", "\n", "return null ", "invade new clients ", "Create Balance \n", "group_info->nblocks = nblocks;", "nblocks = nblocks ? : 1; \n", "Download updating ", "b = (void *)__get_free_page(GFP_USER);", "\n\n"};
    int dado;

    setlocale(LC_ALL, "Portuguese");
    printf("========================================================================================================================");
    printf("================================================= HACKER TYPER 1.0 =====================================================");
    printf("========================================================================================================================\n");
    printf("\n Hey user, welcome to >> HACKER TYPER 1.0 << press any key to init\n\n >> ");
    getche();
    limpaTela();
    printf("========================================================================================================================");
    printf("\n================================================= HACKER TYPER 1.0 =====================================================\n");
    printf("========================================================================================================================\n\n\n\n");

    srand(time(NULL));

    while(!kbhit()){
        system("COLOR 02");
        dado = rand() % 13 + 1;
        printf(randomKeys[dado]);
        Sleep(100);
    }
}
