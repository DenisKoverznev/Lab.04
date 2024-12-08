#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS

#define N 5

int main() {
    int arr[N][N] = {
        {2, 3, 1, 5, 4},
        {7, 6, 4, 1, 2},
        {8, 1, 9, 3, 6},
        {4, 7, 2, 9, 5},
        {1, 4, 8, 2, 3}
    };

    int max_sum = 0, max_x = 0, max_y = 0;

    for (int i = 0; i <= N - 3; i++) {
        for (int j = 0; j <= N - 3; j++) {
            int sum = arr[i][j] + arr[i + 1][j + 1] + arr[i + 2][j + 2] +
                arr[i + 2][j] + arr[i + 1][j + 1] + arr[i][j + 2];
            if (sum > max_sum) {
                max_sum = sum;
                max_x = i;
                max_y = j;
            }
        }
    }

    for (int i = max_x; i < max_x + 3; i++) {
        for (int j = max_y; j < max_y + 3; j++) {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }

    return 0;
}