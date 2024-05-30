#include <iostream>
#include <ctime>
using namespace std;

int main() {
	srand(time(0));
	const int rows1 = 5, cols1 = 10;
	const int rows2 = 5, cols2 = 5;
	int arr1[rows1][cols1];
	int arr2[rows2][cols2];

	for (int i = 0; i < rows1; ++i) {
		for (int j = 0; j < cols1; ++j) {
			arr1[i][j] = rand() % 50;
		}
	}

	for (int i = 0; i < rows2; ++i) {
		for (int j = 0; j < cols2; ++j) {
			arr2[i][j] = arr1[i][2 * j] + arr1[i][2 * j + 1];
		}
	}

	//cout array
	for (int i = 0; i < rows1; ++i) {
		for (int j = 0; j < cols1; ++j) {
			cout << arr1[i][j] << " ";
		}
		cout << endl;
	}
	
	cout << endl;

	for (int i = 0; i < rows2; ++i) {
		for (int j = 0; j < cols2; ++j) {
			cout << arr2[i][j] << " ";
		}
		cout << endl;
	}
	return 0;
}
