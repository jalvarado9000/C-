#include "Matrix.h"

namespace UT_315 {

	/////////////////// DO NOT MODIFY THESE TWO FUNCTIONS/////////////
	// Output operator (Friend function)
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
		in >> rows;
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
	///////////////////////////////////////////////////////////////

	// ADD YOUR CODE HERE
	//Constructor


	//Setters
	void Matrix::set_value(int i, int j, int val) {
		this->elements[i][j] = val;
	}

	void Matrix::set_rows(int new_r) {
		this->curr_rows = new_r;
	}

	void Matrix::set_cols(int new_c) {
		this->curr_cols = new_c;
	}

	//Getters
	Matrix::int Matrix::get_value(int i,int j) const {
		return this->elements[i][j];
	}

	Matrix::int Matrix::get_rows() const {
		return this->curr_rows;
	}

	Matrix::int Matrix::get_cols()const {
		return this->curr_cols;
	}

	//Operators
	bool Matrix::operator==(const Matrix& M) const {
		return this->elements == M.elements;
	}

	const Matrix& Matrix::operator+=(const Matrix& M)
	{

		for (size_t i = 0; i < this->curr_rows; i++) {
			for (size_t j = 0; j < this->curr_cols; j++) {
				this->set_value(i, j, this->get_value(i, j) + M.get_value(i, j));
			}
		}
		return *this;
	}

	const Matrix& Matrix::operator-=(const Matrix& M) {
		for (size_t i = 0; i < this->curr_rows; i++) {
			for (size_t j = 0; j < this->curr_cols; j++) {
				this->set_value(i, j, this->get_value(i, j) - M.get_value(i, j));
			}
		}
		return *this;
	}

	const Matrix& Matrix::operator*=(const Matrix& M) {
		int result = 0;
		for (size_t i = 0; i < this->get_rows(); i++) {
			for (size_t j = 0; j < M.get_cols(); j++) {
				for (size_t k = 0; k < this->get_cols(); k++){
					result += this->get_value(i, k) * this->get_value(k, j);
					this->set_value(i, j, result);
				}
				result = 0;
			}
		}
		return *this;
	}

	const Matrix& Matrix::operator*=(int r) {
		for (size_t i = 0; i < this->curr_rows; i++) {
			for (size_t j = 0; j < this->curr_cols; j++) {
				this->set_value(i, j, this->get_value(i, j) * r);
			}
		}
		return *this;
	}
	Matrix operator+(const Matrix& M1, const Matrix& M2)
	{
		Matrix newM = Matrix(M1.get_rows(), M1.get_cols());
		for (size_t i = 0; i < newM.get_rows(); i++) {
			for (size_t j = 0; j < newM.get_cols(); j++) {
				newM.set_value(i, j, M1.get_value(i, j) + M2.get_value(i, j));
			}
		}
		return newM;
	}

	Matrix operator-(const Matrix& M1, const Matrix& M2)
	{
		Matrix newM = Matrix(M1.get_rows(), M1.get_cols());
		for (size_t i = 0; i < newM.get_rows(); i++) {
			for (size_t j = 0; j < newM.get_cols(); j++) {
				newM.set_value(i, j, M1.get_value(i, j) - M2.get_value(i, j));
			}
		}
		return newM;
	}

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

	Matrix Matrix::transpose() const{
		Matrix transposed;
		transposed.set_cols(get_rows());
		transposed.set_rows(get_cols());
		for (size_t i = 0; i < get_rows(); i++){
			for (size_t j = 0; j < get_cols(); j++){
				transposed.set_value(j, i, get_value(i, j));
			}
		}
		return transposed;
	}
}
