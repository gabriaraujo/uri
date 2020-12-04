#include <stdio.h>

int main() {
    char name[100];
    double salary, sells, total;

    scanf("%s %lf %lf", name, &salary, &sells);
    total = salary + sells * ((double) 15 / 100);
    printf("TOTAL = R$ %.2lf\n", total);

    return 0;
}
