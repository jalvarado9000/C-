#ifndef _MATRIX_H
#define _MATRIX_H

#include <iostream>
#include <cassert>
#include <cstdio>
#include "Object.h"

using namespace std;
//using namespace UT_315;

//namespace UT_315{
  class Matrix {
  public:
    // Various constants related to matrix size
    static const int MAX_ROWS = 100;
    static const int MAX_COLUMNS = 100;
    	Matrix(int rows, int cols) {
		this->curr_rows = rows;
		this->curr_cols = cols;
	}

    // Define size type for matrix
    //typedef std::size_t size_type;
    // Define value type for matrix
    //typedef Object value_type;

    // Public methods for the matrix class

    // Constructor


    // Accessor methods

    // Returns the element [i,j]
    int get_value(int i, int j) const;
    // Set the element [i,j]
    void set_value(int i, int j, int val);
    // Return current number of rows in the matrix
    int get_rows() const;
    // Set current number of rows
    void set_rows(int new_r);
    // Return the current number of columns
    int get_cols() const;
    // Set current number of columns
    void set_cols(int new_c);

    // Matrix operations
    // Matrix equality
    bool operator==(const Matrix& M) const;
    // Matrix self-addition
    const Matrix& operator+=(const Matrix& M);
    // Matrix self-substraction
    const Matrix& operator-=(const Matrix& M);
    // Matrix self-multiplication
    const Matrix& operator*=(const Matrix& M);
    // Scalar self-multiplication
    const Matrix& operator*=(int r);
    // Matrix transpose
    Matrix transpose() const;

    // Input operator (Friend function)
    friend istream& operator>>(istream &in, Matrix& M);
    // Output operator (Friend function)
    friend ostream& operator<<(ostream &out, const Matrix& M);

  private:
    // Elements in the matrix
    int elements[MAX_ROWS][MAX_COLUMNS];
    // Current number of rows in the matrix
    int curr_rows;
    // Current number of columns in the matrix
    int curr_cols;
  };

  // Non-member matrix algebra operations

  // Matrix addition
  Matrix operator+(const Matrix& M1, const Matrix& M2);
  // Matrix substraction
  Matrix operator-(const Matrix& M1, const Matrix& M2);
  // Matrix multiplication
  Matrix operator*(const Matrix& M1, const Matrix& M2);


#endif _H
