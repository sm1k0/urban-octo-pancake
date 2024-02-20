#include <iostream>
using namespace std;

int main() {
    const int ROWS = 3;
    const int COLS = 5;
    double matrix[ROWS][COLS];
    
    cout << "Введите элементы матрицы " << ROWS << "x" << COLS << ":" << endl;
    for (int i = 0; i < ROWS; ++i) {
        cout << "Строка " << i+1 << ":" << endl;
        for (int j = 0; j < COLS; ++j) {
            cin >> matrix[i][j];
        }
    }
    

    cout << "Средние арифметические для каждой строки:" << endl;
    for (int i = 0; i < ROWS; ++i) {
        double sum = 0;
        for (int j = 0; j < COLS; ++j) {
            sum += matrix[i][j];
        }
        double average = sum / COLS;
        cout << "Строка " << i+1 << ": " << average << endl;
    }
    
    return 0;
}
