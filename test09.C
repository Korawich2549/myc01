#include <stdio.h>
#define showline printf("-----------------------\n");
int main(){ 

    int bus_number;
    
    showline
    printf("Bus number information\n");
    showline
    printf("Enter bus number:");
    scanf("%d" , &bus_number);
    showline
    switch(bus_number){
        case 57 : printf("Gi0 to Pinklo, Bangkhunnon\n");
            break;
        case 3 : printf("Go to Sanam Luang, Ladproao\n");
            break;
        case 71 : printf("Go to Hua Lamphong, Yaowarat\n");
            break;
        case 56 : printf("Go to Lamphu, Sapan Krungthon\n");
            break;
        case 539 : printf("Go to Samsen, Anusawari Chai\n");
            break;
        default:
            printf("Don\'t have data\n");
    }
    showline

    return 0;
}