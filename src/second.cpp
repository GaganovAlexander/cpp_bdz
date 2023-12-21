#include <iostream>


void print_matrix(int *matrix, int rows, int cols) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            std::cout << matrix[i * cols + j] << " ";
        }
        std::cout << std::endl;
    }
}

int *transpose_matrix(int *matrix, int rows, int cols) {
    int *Tmatrix[cols][rows];

    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            Tmatrix[i][j] = &matrix[j * cols + i];
        }
    }

    return Tmatrix[0][0];
}

int main(int argc, char *argv[]) {
    const int rows = 3;
    const int cols = 2;

    int matrix[rows][cols] = {{1, 2}, {3, 4}, {5, 6}};

    print_matrix(&matrix[0][0], rows, cols);

    int *Tmatrix = transpose_matrix(&matrix[0][0], rows, cols);

    std::cout << std::endl;

    print_matrix(&Tmatrix[0], cols, rows);

    return 0;
}