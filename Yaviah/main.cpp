#include <iostream>
#include <cstdlib>
#include "Matrix.h"



using namespace std;
//using namespace UT_315;

void print_menu();
void matrix_addition();
//void matrix_substraction();
//void matrix_multiplication();
//void matrix_scalar_mult();
//void matrix_transpose();
//void vector_length();
//void vector_inner_prod();
//void vector_cross_prod();
//void vector_angle();

int main(){
  int opt = 0;
  cout << "Welcome to the Matrix Test Program" << endl;
  do{
    print_menu();
    cout << "Enter option: ";
    cin >> opt;
    cout << "Option entered: " << opt << endl;
    switch(opt){
    case 1:
      matrix_addition();
      break;
   /* case 2:
      matrix_substraction();
      break;
    case 3:
      matrix_multiplication();
      break;
    case 4:
      matrix_scalar_mult();
      break;
    case 5:
      matrix_transpose();
      break;
    case 6:
      vector_length();
      break;
    case 7:
      vector_inner_prod();
      break;
    case 8:
      vector_cross_prod();
      break;
    case 9:
      vector_angle();
      break;*/
    case 10:
      opt = -1;
      break;
    default:
      cout << "Illegal option: " << opt << endl;
    }
  }
  while(opt != -1);

  cout << "Thanks for using the Matrix Test Program." << endl;
  exit(0);

}

void print_menu(){
  cout << "***************************" << endl;
  cout << "Available Operations:"<< endl;
  cout << "\t 1. Matrix Addition" << endl;
  cout << "\t 2. Matrix Substraction" << endl;
  cout << "\t 3. Matrix Multiplication" << endl;
  cout << "\t 4. Matrix Scalar Multiplication" << endl;
  cout << "\t 5. Matrix Transpose" << endl;
  cout << "\t 6. Vector lenght" << endl;
  cout << "\t 7. Vector Inner (dot) Product" << endl;
  cout << "\t 8. Vector Cross Product" << endl;
  cout << "\t 9. Vector angle " << endl;
  cout << "\t 10. Exit" << endl;
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


/*void matrix_substraction(){
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

void matrix_multiplication(){
  Matrix M1, M2, M3;
  cout << "Enter the first matrix: " << endl;
  cin >> M1;
  cout << "Enter the second matrix: " << endl;
  cin >> M2;

  cout << "Result: " << endl;
  cout << M1;
  cout << "\t * " << endl;
  cout << M2;
  cout << "\t = " << endl;
  M3 = M1 * M2;
  cout << M3;
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

void vector_length(){
  Vector V1;

  cout << "Enter the vector: " << endl;
  cin >> V1;
  cout << "The length of the vector: " << endl;
  cout << V1;
  cout << "is: " << V1.length() << endl;
}

void vector_inner_prod(){
  Vector V1, V2;
  double result = 0.0;

  cout << "Enter the first vector: " << endl;
  cin >> V1;
  cout << "Enter the second vector: " << endl;
  cin >> V2;
  cout << "Result: " << endl;
  cout << V1;
  cout << " | " << endl;
  cout << V2;
  cout << " = ";
  result = V1 | V2;
  cout << result << endl;
}

void vector_cross_prod(){
  Vector3D V1, V2, V3;

  cout << "Enter the first vector: " << endl;
  cin >> V1;
  cout << "Enter the second vector: " << endl;
  cin >> V2;
  cout << "Result: " << endl;
  cout << V1;
  cout << " & " << endl;
  cout << V2;
  cout << " = " << endl;
  V3 = V1 & V2;
  cout << V3;
}

void vector_angle(){
  Vector V1, V2;
  double result = 0.0;

  cout << "Enter the first vector: " << endl;
  cin >> V1;
  cout << "Enter the second vector: " << endl;
  cin >> V2;
  cout << "The angle between: " << endl;
  cout << V1;
  cout << " and " << endl;
  cout << V2;
  cout << " is " << endl;
  result = V1.angle(V2);
  cout << result << endl;
}
*/
