#include <stdio.h>

typedef struct{
    int name[20];
    int id;
    int age;
    float score;
}Sau;


int main(){
    Sau dataA;
    Sau dataD = {"Sombat", 1, 20, 99.99};
    
    printf("%.2f/n", dataD.score);
    dataD.id = 654568789;
    
    
    
    return 0; 
}