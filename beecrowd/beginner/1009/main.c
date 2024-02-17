#include <stdio.h>

int main(){
    char name;
    double salary;
    double seller;
    double total;
    scanf("%s", &name);
    scanf("%lf", &salary);
    scanf("%lf", &seller);
    total = salary + seller * 0.15;
    printf("TOTAL = R$ %.2lf", total);
    printf("\n");
    return 0;
}