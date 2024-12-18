#include <stdio.h>
#include <stdlib.h>
int menu()
{
    printf("MENU\n");
    printf("1.Total of All Top Score for the Week\n");
    printf("2.Total of All High Score for the Week\n");
    printf("3.Total Machine High Score for the Week\n");
    printf("4.Machie High Score for the Week\n");
    printf("5.Exit\n");
    printf("Enter selection:");

    int selection = getchar();
    getchar();
    return selection;
}
