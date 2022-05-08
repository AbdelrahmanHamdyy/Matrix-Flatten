#include <iostream>
#include <vector>
using namespace std;

void printMatrix(int, int, int, vector<vector<vector<int>>>&);
void printVector(int, vector<int>&);

int main() 
{
	// 3D Matrix of size n x m x p
	int n, m, p;
	cout << "Dimensions: \n";
	cout << "n = "; 
	cin >> n;
	cout << "m = ";
	cin >> m;
	cout << "p = ";
	cin >> p;
	vector<vector<vector<int>>> matrix_3D(n, vector<vector<int>>(m, vector<int>(p)));

	// 1D Vector of size q
	int q = n * m * p;
	vector<int> vector_1D(q);

	// Fill the matrix (User Input)
	cout << "\n3D Matrix: \n";
	for (int i = 0; i < n; i++)
		for (int j = 0; j < m; j++)
			for (int k = 0; k < p; k++)
				cin >> matrix_3D[i][j][k];

	// Print the 3D matrix
	cout << "\nYou entered: \n";
	printMatrix(n, m, p, matrix_3D);

	// Conversion
	int y;
	for (int i = 0; i < n; ++i) {
		for (int j = 0; j < m; ++j) {
			for (int k = 0; k < p; ++k) {
				y = i * m * p + j * p + k;
				vector_1D[y] = matrix_3D[i][j][k];
			}
		}
	}

	// Print the 1D vector
	cout << "1D Vector: \n";
	printVector(q, vector_1D);
}

void printMatrix(int n, int m, int p, vector<vector<vector<int>>>& matrix) 
{
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			for (int k = 0; k < p; k++) {
				cout << matrix[i][j][k] << " ";
			}
			cout << "\n";;
		}
		cout << "\n";
	}
}

void printVector(int q, vector<int>& v)
{
	for (int i = 0; i < q; i++)
		cout << v[i] << " ";
	cout << "\n";
}