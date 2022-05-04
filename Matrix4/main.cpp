#include <iostream>

using namespace std;
void matrix_scalar_mult();

int main()
{
    matrix_scalar_mult()
    return 0;
}
void matrix_scalar_mult(){
  Matrix M1;
  int scalar = 0;
  cout << "Enter the matrix: " << endl;
  cin >> M1;
  cout << "Enter the scalar value: " << endl;
  cin >> scalar;

  cout << "Result: " << endl;
  cout << M1;
  cout << "\t * " << endl;
  cout << scalar << endl;
  cout << "\t = " << endl;
  M1*=scalar;
  cout << M1;
}
