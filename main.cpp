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
            arr[i][j] = rand() % 10;
            sum += arr[i][j];
        }
        cout << endl;
    }

    for (int j = 0; j < row; ++j) {
        for (int i = 0; i < col; ++i) {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    int min = arr[0][0];
    int max = arr[0][0];

    for (size_t i = 0; i < col; i++)
    {
        for (size_t j = 0; j < row; j++)
        {
            if (arr[i][j] < min)
            {
                min = arr[i][j];
            }
            if (arr[i][j] > max)
            {
                max = arr[i][j];
            }
        }
    }


    average = sum / (row * col);
    cout << sum << endl;
    cout << average << endl;
    cout << min << endl;
    cout << max << endl;

    return 0;
}
