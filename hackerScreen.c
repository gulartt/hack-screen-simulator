#include <stdlib.h>
#include <stdio.h>
#include <conio.h>
#include <math.h>
#include <Windows.h>
#include <time.h>

// Samuel Gulart Moura - https://www.linkedin.com/in/samuel-gulart-656971216 - 09/01/2022

void cleanScreen()
{
    system("@cls||clear");
}

int main(){
    char randomKeys[][45] = {"Checking Values ", "Testing Updates ", "Struct group info ", ".Usage Storage Style ", "\n", "return null ", "invade new clients ",
    "Create Balance \n", "group_info->nblocks = nblocks;", "nblocks = nblocks ? : 1; \n", "Download updating ", "b = (void *)__get_free_page(GFP_USER);\n\n", "\t"};

    int dado;

    //menu screen
    cleanScreen();
    printf("========================================================================================================================");
    printf("================================================= HACKER SCREEN 1.0 ====================================================");
    printf("========================================================================================================================\n");
    printf("\nHey user, welcome to >> HACKER TYPER 1.0 << press any key to start... ");
    getche();

    cleanScreen();

    //loading screen
    printf("\nPlease Wait...Loading\n");
    printf("\n\n");

    for(int i = 0; i < 120 ; i++){
        Sleep(12);
        printf("%c", 219);
    }
    system("COLOR 02");
    printf("\n\n\nSucessfully loaded!!");

    Sleep(1200);
    cleanScreen();
    srand(time(NULL));

    //hacking screen
    while(!kbhit()){
        dado = rand() % 13 + 1;
        printf(randomKeys[dado]);
        Sleep(100);
    }

    //pentest result
    if(dado >= 6){
        system("COLOR 0C");
        printf("\n\n\t\t\t\t\t\tACESS DENIED!!\n\n");
    }else{
        printf("\n\n\t\t\t\t\t\tACESS GRANTED!!\n\n");
    }

    Sleep(1200);
}
