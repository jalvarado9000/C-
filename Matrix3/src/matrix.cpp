#include "matrix.h"





    Matrix::Matrix(int r,int c) {
		curr_rows = r;
		curr_cols = c;
    }

    void Matrix::set_value(int i, int j, int val) {
		elements[i][j] = val;
	}

	void Matrix::set_rows(int new_r) {
		curr_rows = new_r;
	}

	void Matrix::set_cols(int new_c) {
		curr_cols = new_c;
	}

    Matrix::get_value(int i,int j) const {
		return elements[i][j];
	}

	Matrix::get_rows() const {
		return curr_rows;
	}

	Matrix::get_cols()const {
		return curr_cols;
	}


    ostream& operator<<(ostream& out, const Matrix& M) {
		int i = 0, j = 0, len1 = 0, len2 = 0;

		len1 = M.get_rows();
		len2 = M.get_cols();

		for (i = 0; i < len1; ++i) {
			for (j = 0; j < len2; ++j) {
				out << M.get_value(i, j);
				if (j != len2 - 1) {
					out << "   ";
				}
			}
			out << "\n";
		}
		return out;
	}

	// Input operator (Friend function)
	istream& operator>>(istream& in, Matrix& M) {
		int i = 0, j = 0, rows = 0, cols = 0;
		int new_val;
		cout << "rows" << endl;
		in >> rows;
		cout << "columns" << endl;
		in >> cols;

		M = Matrix(rows, cols);

		for (i = 0; i < rows; ++i) {
			for (j = 0; j < cols; ++j) {
				in >> new_val;
				M.set_value(i, j, new_val);
			}
		}
		return in;
	}

	Matrix operator+( const Matrix& M1, const Matrix& M2)
	{
		Matrix newM = Matrix(M1.get_rows(), M1.get_cols());
		for (size_t i = 0; i < newM.get_rows(); i++) {
			for (size_t j = 0; j < newM.get_cols(); j++) {
				newM.set_value(i, j, M1.get_value(i, j) + M2.get_value(i, j));
			}
		}
		return newM;
	}


	//anadido

	Matrix operator*(const Matrix& M1, const Matrix& M2)
	{
		Matrix newM = Matrix(M1.get_rows(), M2.get_cols());
		int result = 0;
		for (size_t i = 0; i < M1.get_rows(); i++) {
			for (size_t j = 0; j < M2.get_cols(); j++) {
				for (size_t k = 0; k < M1.get_cols(); k++){
					result += M1.get_value(i, k) * M2.get_value(k, j);
					newM.set_value(i, j, result);
				}
				result = 0;
			}
		}
		return newM;
	}
