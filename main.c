#include "menu.h";
int main(){
    int selection = menu();
    while (1)
    {
        int selection = menu();
        printf("%d", selection);
        switch (selection)
        {
        case '1':
            printf("\nselected 1\n");
            break;
        case '2':
            printf("\nselected 2\n");
            break;
        case '3':
            printf("\nselected 3\n");
            break;

        default:
            break;
      }
    }
    
}