#include <stdio.h>

int main(){

    int dataA;
    int *p_dataA = &dataA;

    dataA = 10;

    //แสดง address number ของ dataA
    printf("Address of A is  : %p\n", &dataA);
    printf("Address of A is  : %d\n", &dataA);  
    printf("%p\n", p_dataA);
    printf("%d\n", p_dataA);

    //แสดงคำที่อยู่ในช่อง dataA
    printf("VAlue A %d\n", dataA);
    printf("VAlue A %d\n", p_dataA);

    printf("Address of p_dataA is : %p\n", &p_dataA);
    *p_dataA = 999;
    printf("VAlue A %d\n", dataA);
    printf("VAlue A %d\n", p_dataA);
    return 0;
}