//preprocess directive
#include <stdio.h>
#include <math.h>
#define ShowSenPa printf("--------------------\n");
#define Smile "^_^"

//global declaration
int number = 555;
void showHi();

void showHey(){   //user-defined function
    printf("Hey!\n");
}

int main(){  //main function
    printf("Welcome to SAU\n%s\n", Smile);
    ShowSenPa
    showHi();
    showHey();
    ShowSenPa


    return 0;
}

void showHi(){  //user-defined function
    printf("Hi!\n");
}