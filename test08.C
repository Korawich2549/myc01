#include <stdio.h>
#define showline printf("-----------------------\n");

int main(){ 

    int bus_number;

    showline
    printf("    number information\n");
    showline
    printf("Enter bus number:");
    scanf("%d" , &bus_number);
    showline
    if(bus_number == 57){
        printf("Gi to Pinklo, Bangkhunnon\n");
    }else if (bus_number == 3){
        printf("Go to Sanam Luang, Ladproao\n");
    }else if (bus_number == 71){
        printf("Go to Hua Lamphong, Yaowarat\n");
    }else if (bus_number == 56){
        printf("Go to Lamphu, Sapan Krungthon\n");
    }else if (bus_number == 539){
        printf("Go to Samsen, Anusawari Chai\n");
    }else{
        printf("Don\'t have data\n");
    }
    showline

    return 0;
}