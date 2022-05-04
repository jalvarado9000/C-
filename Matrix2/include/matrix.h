#ifndef MATRIX_H
#define MATRIX_H
#include <iostream>
using namespace std;

class Matrix
{

public:
     //int MAX_ROWS = 10;
    //int MAX_COLUMNS = 10;
    private:

    int curr_rows;
    int curr_cols;

    int elements[100][100];


    public:

    //void set_all(int r1,int c1,int r2,nt c2);
    Matrix(int r,int c);
    Matrix(){}

    void set_value(int i, int j, int val);
    void set_rows(int new_r);
    void set_cols(int new_c);

    int get_value(int i,int j)const;
    int get_rows()const;
    int get_cols()const;


    friend istream& operator>>(istream &in, Matrix& M);
    friend ostream& operator<<(ostream &out, const Matrix& M);

    friend Matrix operator +( const Matrix& M1, const  Matrix& M2);
    friend Matrix operator-(const Matrix& M1, const Matrix& M2);





};

#endif // MATRIX_H
