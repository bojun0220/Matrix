/*
 * matrix.cpp
 */

#include "Matrix.h"

Matrix::Matrix(int rows, int cols) : rows_(rows), cols_(cols) {
  p.resize(rows_);
  for (int i = 0; i < rows_; i++)
    p[i].resize(cols_);
}

Matrix::Matrix(const vector<vector<double>> &a, int rows, int cols)
    : rows_(rows), cols_(cols) {
  p.resize(rows_);
  for (int i = 0; i < rows_; i++) {
    p[i].resize(cols_);
    for (int j = 0; j < cols_; j++) {
      p[i][j] = a[i][j];
    }
  }
}

Matrix::Matrix(const vector<vector<double>> &a)
    : rows_(a.size()), cols_(a[0].size()) {
  p.resize(rows_);
  for (int i = 0; i < rows_; i++) {
    p[i].resize(cols_);
    for (int j = 0; j < cols_; j++) {
      p[i][j] = a[i][j];
    }
  }
}

Matrix::Matrix(const Matrix &m) : rows_(m.rows_), cols_(m.cols_) {
  for (int i = 0; i < rows_; ++i)
    for (int j = 0; j < cols_; ++j)
      p[i][j] = m.p[i][j];
}

Matrix Matrix::transpose() {
  Matrix ret(cols_, rows_);
  for (int i = 0; i < rows_; ++i)
    for (int j = 0; j < cols_; ++j)
      ret.p[j][i] = p[i][j];
  return ret;
}

Matrix Matrix::operator*(Matrix &B) {

  if (cols_ == B.rows_) {
    vector<vector<double>> res(rows_, vector<double>(B.cols_, 0));
    for (int i = 0; i < rows_; i++)
      for (int j = 0; j < B.cols_; j++)
        for (int k = 0; k < cols_; k++)
          res[i][j] += p[i][k] * B.p[k][j];
    return res;
  } else {
    throw "The first matrix's column number must equal to the second matrix's "
          "row";
  }
}
void Matrix::print() {
  for (int i = 0; i < rows_; ++i) {
    for (int j = 0; j < cols_; ++j) {
      cout << p[i][j] << " ";
    }
    cout << endl;
  }
}