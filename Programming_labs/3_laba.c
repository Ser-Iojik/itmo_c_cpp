#include <stdio.h>

// Вариант №1
int main() {
    // Task 1
    // Ввели a в 8-ой сс
    int a;
    scanf("%o", &a);

    // Task 2
    // Вывели a в 10-ой сс
    printf("%d\n", a);

    // Task 3
    // Вывели a в 16-ой сс
    // И вывели с побитовым сдвигом влево на 2
    printf("%x\n", a);
    // a = a << 2;
    printf("%x\n", a << 2);

    // Task 4
    // Вывели число в 16-ой сс
    // Вывели число с побитовым отрицанием
    printf("%x\n", a);
    printf("%x\n", ~a);

    // Task 5
    int b;
    // Ввели число в 16-ой сс
    scanf("%x", &b);
    printf("%x", b ^ a);

    return 0;
}