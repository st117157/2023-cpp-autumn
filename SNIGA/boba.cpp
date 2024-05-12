#include <iostream>
#include <vector>
#include <math.h>

using namespace std;

void gauss_method(vector<vector<double>> &A, vector<double> &b) {
    int n = A.size();

    // Прямой ход метода Гаусса
    for (int i = 0; i < n; i++) {
        int pivot = i;
        for (int j = i + 1; j < n; j++) {
            if (abs(A[j][i]) > abs(A[pivot][i])) {
                pivot = j;
            }
        }

        if (pivot != i) {
            // Перестановка строк матрицы
            for (int k = 0; k < n; k++) {
                swap(A[i][k], A[pivot][k]);
            }

            swap(b[i], b[pivot]);
        }

        // Исключение элементов строки
        for (int j = i + 1; j < n; j++) {
            double multiplier = A[j][i] / A[i][i];
            for (int k = i; k < n; k++) {
                A[j][k] -= A[i][k] * multiplier;
            }
            b[j] -= b[i] * multiplier;
        }
    }

    // Обратный ход метода Гаусса
    for (int i = n - 1; i >= 0; i--) {
        double sum = b[i];
        for (int j = i + 1; j < n; j++) {
            sum -= A[i][j] * b[j];
        }
        b[i] = sum / A[i][i];
    }
}

int main(){

    vector<vector<double>> A =
    {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };
}
    vector<double> b = {1, 2, 3};

