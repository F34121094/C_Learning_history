#include <stdio.h>

int main() {
    int size;

    // �ШϥΪ̿�J�}�C�j�p
    printf("Enter the size of the array: ");
    scanf("%d", &size);

    // �ŧi�@�Ӿ�ư}�C�A�j�p���ϥΪ̿�J����
    int array[size];

    // �ШϥΪ̿�J�}�C����
    printf("Enter the elements of the array:\n");
    for (int i = 0; i < size; ++i) {
        printf("Element %d: ", i + 1);
        scanf("%d", &array[i]);
    }

    // ���̤j��
    int max = array[0];
    for (int i = 1; i < size; ++i) {
        if (array[i] > max) {
            max = array[i];
        }
    }

    // ��X�̤j��
    printf("The maximum value in the array is: %d\n", max);

    return 0;
}

