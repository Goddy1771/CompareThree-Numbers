#include <stdio.h>

int main() {
    int a, b, c;
    printf("Enter the values of a, b, c: ");
    scanf("%d %d %d", &a, &b, &c);

    if ((a > b) && (a > c)) {
        printf("a is greater\n");
    } 
    else
     if ((b > a) && (b > c)) {
        printf("b is greater\n");
    } else
    if ((c > a) && (c > b)) {
        printf("c is greater\n");
    } else {
        printf("There is a tie or all numbers are equal.\n");
    }

    return 0;
}