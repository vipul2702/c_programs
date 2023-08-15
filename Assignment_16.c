// 1. Write a program to calculate the sum of two matrices each of order 3x3.
#include <stdio.h>

void addMatrices(int mat1[3][3], int mat2[3][3], int result[3][3]) {
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            result[i][j] = mat1[i][j] + mat2[i][j];
        }
    }
}

int main() {
    int mat1[3][3], mat2[3][3], result[3][3];

    printf("Enter elements of the first matrix:\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            scanf("%d", &mat1[i][j]);
        }
    }

    printf("Enter elements of the second matrix:\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            scanf("%d", &mat2[i][j]);
        }
    }

    addMatrices(mat1, mat2, result);

    printf("Sum of matrices:\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf("%d ", result[i][j]);
        }
        printf("\n");
    }

    return 0;
}

// 2. Write a program to calculate the product of two matrices each of order 3x3.
#include <stdio.h>

void multiplyMatrices(int mat1[3][3], int mat2[3][3], int result[3][3]) {
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            result[i][j] = 0;
            for (int k = 0; k < 3; k++) {
                result[i][j] += mat1[i][k] * mat2[k][j];
            }
        }
    }
}

int main() {
    int mat1[3][3], mat2[3][3], result[3][3];

    printf("Enter elements of the first matrix:\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            scanf("%d", &mat1[i][j]);
        }
    }

    printf("Enter elements of the second matrix:\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            scanf("%d", &mat2[i][j]);
        }
    }

    multiplyMatrices(mat1, mat2, result);

    printf("Product of matrices:\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf("%d ", result[i][j]);
        }
        printf("\n");
    }

    return 0;
}

// 3. Write a program in C to find the transpose of a given matrix.
#include <stdio.h>

void transposeMatrix(int mat[3][3], int result[3][3]) {
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            result[j][i] = mat[i][j];
        }
    }
}

int main() {
    int mat[3][3], result[3][3];

    printf("Enter elements of the matrix:\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            scanf("%d", &mat[i][j]);
        }
    }

    transposeMatrix(mat, result);

    printf("Transpose of the matrix:\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf("%d ", result[i][j]);
        }
        printf("\n");
    }

    return 0;
}

// 4. Write a program in C to find the sum of right diagonals of a matrix.
#include <stdio.h>

int sumOfRightDiagonal(int mat[3][3]) {
    int sum = 0;
    for (int i = 0; i < 3; i++) {
        sum += mat[i][i];
    }
    return sum;
}

int main() {
    int mat[3][3];

    printf("Enter elements of the matrix:\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            scanf("%d", &mat[i][j]);
        }
    }

    int sum = sumOfRightDiagonal(mat);

    printf("Sum of right diagonal elements: %d\n", sum);

    return 0;
}

// 5. Write a program in C to find the sum of left diagonals of a matrix.
#include <stdio.h>

int sumOfLeftDiagonal(int mat[3][3]) {
    int sum = 0;
    for (int i = 0; i < 3; i++) {
        sum += mat[i][2 - i];
    }
    return sum;
}

int main() {
    int mat[3][3];

    printf("Enter elements of the matrix:\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            scanf("%d", &mat[i][j]);
        }
    }

    int sum = sumOfLeftDiagonal(mat);

    printf("Sum of left diagonal elements: %d\n", sum);

    return 0;
}

// 6. Write a program in C to find the sum of rows and columns of a Matrix.
#include <stdio.h>

void sumRowsColumns(int mat[3][3]) {
    int rowSum[3] = {0};
    int colSum[3] = {0};

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            rowSum[i] += mat[i][j];
            colSum[j] += mat[i][j];
        }
    }

    printf("Sum of rows:\n");
    for (int i = 0; i < 3; i++) {
        printf("Row %d: %d\n", i + 1, rowSum[i]);
    }

    printf("Sum of columns:\n");
    for (int j = 0; j < 3; j++) {
        printf("Column %d: %d\n", j + 1, colSum[j]);
    }
}

int main() {
    int mat[3][3];

    printf("Enter elements of the matrix:\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            scanf("%d", &mat[i][j]);
        }
    }

    sumRowsColumns(mat);

    return 0;
}

// 7. Write a program in C to print or display the lower triangular of a given matrix.
#include <stdio.h>

void printLowerTriangular(int mat[3][3]) {
    printf("Lower triangular matrix:\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            if (i >= j) {
                printf("%d ", mat[i][j]);
            } else {
                printf("0 ");
            }
        }
        printf("\n");
    }
}

int main() {
    int mat[3][3];

    printf("Enter elements of the matrix:\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            scanf("%d", &mat[i][j]);
        }
    }

    printLowerTriangular(mat);

    return 0;
}

// 8. Write a program in C to print or display an upper triangular matrix.
#include <stdio.h>

void printUpperTriangular(int mat[3][3]) {
    printf("Upper triangular matrix:\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            if (i <= j) {
                printf("%d ", mat[i][j]);
            } else {
                printf("0 ");
            }
        }
        printf("\n");
    }
}

int main() {
    int mat[3][3];

    printf("Enter elements of the matrix:\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            scanf("%d", &mat[i][j]);
        }
    }

    printUpperTriangular(mat);

    return 0;
}

// 9. Write a program in C to accept a matrix and determine whether it is a sparse matrix.
#include <stdio.h>

int isSparseMatrix(int mat[3][3]) {
    int zeroCount = 0;
    int totalElements = 3 * 3;

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            if (mat[i][j] == 0) {
                zeroCount++;
            }
        }
    }

    if (zeroCount > totalElements / 2) {
        return 1;  // Sparse matrix
    } else {
        return 0;  // Not sparse matrix
    }
}

int main() {
    int mat[3][3];

    printf("Enter elements of the matrix:\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            scanf("%d", &mat[i][j]);
        }
    }

    if (isSparseMatrix(mat)) {
        printf("The matrix is a sparse matrix.\n");
    } else {
        printf("The matrix is not a sparse matrix.\n");
    }

    return 0;
}

// 10. Write a program in C to find the row with maximum number of 1s.
#include <stdio.h>

int findRowWithMaxOnes(int mat[3][3]) {
    int maxOnesRow = -1;
    int maxOnesCount = 0;

    for (int i = 0; i < 3; i++) {
        int onesCount = 0;
        for (int j = 0; j < 3; j++) {
            if (mat[i][j] == 1) {
                onesCount++;
            }
        }
        if (onesCount > maxOnesCount) {
            maxOnesCount = onesCount;
            maxOnesRow = i;
        }
    }

    return maxOnesRow;
}

int main() {
    int mat[3][3];

    printf("Enter elements of the matrix:\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            scanf("%d", &mat[i][j]);
        }
    }

    int rowWithMaxOnes = findRowWithMaxOnes(mat);

    if (rowWithMaxOnes != -1) {
        printf("Row with the maximum number of 1s: %d\n", rowWithMaxOnes);
    } else {
        printf("No row with 1s found.\n");
    }

    return 0;
}
