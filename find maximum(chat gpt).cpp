#include <stdio.h>

int main() {
    int size;

    // 請使用者輸入陣列大小
    printf("Enter the size of the array: ");
    scanf("%d", &size);

    // 宣告一個整數陣列，大小為使用者輸入的值
    int array[size];

    // 請使用者輸入陣列元素
    printf("Enter the elements of the array:\n");
    for (int i = 0; i < size; ++i) {
        printf("Element %d: ", i + 1);
        scanf("%d", &array[i]);
    }

    // 找到最大值
    int max = array[0];
    for (int i = 1; i < size; ++i) {
        if (array[i] > max) {
            max = array[i];
        }
    }

    // 輸出最大值
    printf("The maximum value in the array is: %d\n", max);

    return 0;
}

