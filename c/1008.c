#include <stdio.h>

int main() {
    int num, hour;
    double salary_per_hour;

    scanf("%d %d %lf", &num, &hour, &salary_per_hour);
    printf("NUMBER = %d\n", num);
    printf("SALARY = U$ %.2lf\n", hour * salary_per_hour);

    return 0;
}
