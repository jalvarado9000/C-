#include <iostream>
#include "matrix.h"
using namespace std;

void matrix_addition();

int main()
{
    matrix_addition();

    /*cout << "Enter the first matrix" << endl;

    int i = 0, j = 0, rows = 0, cols = 0;
    //int i, j, rows, cols;

		int new_val;
		cout << "rows" << endl;
		cin >> rows;

		cout << "columns" << endl;
		cin >> cols;

		int elements[rows][cols];

		//M = Matrix(rows, cols);
		cout << "enter the elements" << endl;

		for (i = 0; i < rows; ++i) {

			for (j = 0; j < cols; ++j)
                {
				cout << "[" << i << "]" << "[" << j << "]" << endl;
				cin >> new_val;

				elements [i][j] = new_val;
                }
		}

		for (i = 0; i < rows; ++i) {
			for (j = 0; j < cols; ++j) {
				cout << "[" << i << "]" << "[" << j << "]" << endl;
				cout << elements [i][j] << endl;
			}
		}


        //lo mismo pero para la segunda matriz

        cout << "Enter the second matrix" << endl;

    int i = 0, j = 0, rows = 0, cols = 0;
    //int i, j, rows, cols;

		int new_val;
		cout << "rows" << endl;
		cin >> rows;

		cout << "columns" << endl;
		cin >> cols;

		int elements[rows][cols];

		//M = Matrix(rows, cols);
		cout << "enter the elements" << endl;

		for (i = 0; i < rows; ++i) {

			for (j = 0; j < cols; ++j)
                {
				cout << "[" << i << "]" << "[" << j << "]" << endl;
				cin >> new_val;

				elements [i][j] = new_val;
                }
		}

		for (i = 0; i < rows; ++i) {
			for (j = 0; j < cols; ++j) {
				cout << "[" << i << "]" << "[" << j << "]" << endl;
				cout << elements [i][j] << endl;
			}
		}


*/



    return 0;
}

void matrix_addition(){
  Matrix M1, M2, M3;
  cout << "Enter the first matrix: " << endl;
  cin >> M1;
  cout << "Enter the second matrix: " << endl;
  cin >> M2;

  cout << "Result: " << endl;
  cout << M1;
  cout << "\t + " << endl;
  cout << M2;
  cout << "\t = " << endl;
  M3 = M1 + M2;
  cout << M3;
}
