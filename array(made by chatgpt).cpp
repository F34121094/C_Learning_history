#include<stdio.h>

int main() {
    double a[10];    // a[1] a[2] a[3]...

    int i;
    for (i = 0; i < 10; i++) {
        printf("Please type No.%d number:", i + 1);
        scanf("%lf", &a[i]); // 使用 %lf 來讀取 double 類型的數字
    }

    double sum = 0;
    for (i = 0; i < 10; i++) {
        sum += a[i];
    }

    printf("\nThe sum of these ten numbers is %.1f", sum);
    printf("\nThe average of these ten numbers is %.1f", sum / 10.0);
    printf("\n(The result is rounded)\n");

    return 0;
}

