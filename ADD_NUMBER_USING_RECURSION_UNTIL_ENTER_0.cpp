#include<stdio.h>

int fun(int num) {
    if (num == 0) {
        return 0;
    } else {
        return (num % 10) + fun(num / 10);
    }
}

int main() {
    int num;
    printf("Enter number to add the digits: ");
    scanf("%d", &num);

    int sum = fun(num);
    printf("%d\n", sum);
    return 0;
}

