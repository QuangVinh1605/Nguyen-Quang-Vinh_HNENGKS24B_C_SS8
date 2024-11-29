#include <stdio.h>

int main() {
    int matrix[3][3] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };

    int size = 3;
    int sum = 0;
    printf("Cac phan tu  trên duong cheo chinh la: ");
    for (int i = 0; i < size; i++){
        printf("%d ", matrix[i][i]);
        sum += matrix[i][i];
    }

    printf("\n tong cac phan tu tren duong cheo chinh la: %d\n", sum);

    return 0;
}

