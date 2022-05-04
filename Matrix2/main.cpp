#include <iostream>
#include "matrix.h"

using namespace std;
void matrix_substraction();

int main()
{
    matrix_substraction();
    return 0;
}

void matrix_substraction(){
  Matrix M1, M2, M3;
  cout << "Enter the first matrix: " << endl;
  cin >> M1;
  cout << "Enter the second matrix: " << endl;
  cin >> M2;

  cout << "Result: " << endl;
  cout << M1;
  cout << "\t - " << endl;
  cout << M2;
  cout << "\t = " << endl;
  M3 = M1 - M2;
  cout << M3;
}
