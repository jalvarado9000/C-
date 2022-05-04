#include <iostream>
#include "matrix.h"
using namespace std;
void matrix_transpose();
int main()
{
    matrix_transpose();
    return 0;
}


void matrix_transpose(){
  Matrix M1, M2;

  cout << "Enter the matrix: " << endl;
  cin >> M1;
  cout << "The tranpose of matrix: " << endl;
  cout << M1;
  cout << "is the matrix: " << endl;
  M2 = M1.transpose();
  cout << M2;
}
