#include <iostream>
#include <ctime>
using namespace std;

int main() {
    srand(time(0));
    const int max_row = 100;
    const int max_col = 100;
    int row, col;
    double sum = 0;
   
    
    double average;

    do {
        cout << "Enter the number of rows: ";
        cin >> row;
    } while (row < 1 || row > max_row);

    do {
        cout << "Enter the number of columns: ";
        cin >> col;
    } while (col < 1 || col > max_col);

    int arr[max_col][max_row];

    for (int j = 0; j < row; ++j) {
        for (int i = 0; i < col; ++i) {
            arr[j][i] = rand() % 10;
            sum += arr[j][i];
        }
    }

    for (int j = 0; j < row; ++j) {
        for (int i = 0; i < col; ++i) {
            cout << arr[j][i] << " ";
        }
        cout << endl;
    }

    for (int j = 0; j < row; ++j) {
        int row_sum = 0;
        for (int i = 0; i < col; ++i) {
            row_sum += arr[j][i];
        }
        cout << "Row " << j + 1 << ": " << row_sum << endl;
    }


    for (int i = 0; i < col; ++i) {
        int col_sum = 0;
        for (int j = 0; j < row; ++j) {
            col_sum += arr[j][i];
        }
        cout << "Column " << i + 1 << ": " << col_sum << endl;
    }
    cout << "Total sum:" << sum << endl;

    return 0;
}

