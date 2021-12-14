/*
This is the test program for the matrix transpose and mulitplication
*/

#include "Matrix.h"
#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
  cout << "Type \"T\" for transpose and \"M\" for multiplication." << endl;
  string command = "";
  cin >> command;
  if (command == "T") {
    int r, c;
    cout << "Please specify the matrix's row and column." << endl;
    cout << "Row : " << endl;
    cin >> r;
    cout << "Column : " << endl;
    cin >> c;
    vector<vector<double>> p(r, vector<double>(c, 0));
    cout << "Please type the matrix." << endl;
    for (int i = 0; i < r; i++) {
      for (int j = 0; j < c; j++) {
        cin >> p[i][j];
      }
    }
    Matrix A(p, r, c);
    cout << "The matrix you wish to transpose is :" << endl;
    A.print();
    cout << "The transposed matrix is: " << endl;
    Matrix B = A.transpose();
    B.print();
  } else if (command == "M") {
    int r1, r2, c1, c2;
    cout << "Please specify the first matrix's row and column." << endl;
    cout << "Row : " << endl;
    cin >> r1;
    cout << "Column : " << endl;
    cin >> c1;
    vector<vector<double>> p1(r1, vector<double>(c1, 0));
    cout << "Please type the matrix." << endl;
    for (int i = 0; i < r1; i++) {
      for (int j = 0; j < c1; j++) {
        cin >> p1[i][j];
      }
    }
    Matrix A(p1, r1, c1);
    cout << "The first matrix is :" << endl;
    A.print();

    cout << "Please specify the second matrix's row and column." << endl;
    cout << "Row : " << endl;
    cin >> r2;
    cout << "Column : " << endl;
    cin >> c2;
    vector<vector<double>> p2(r2, vector<double>(c2, 0));
    cout << "Please type the matrix." << endl;
    for (int i = 0; i < r2; i++) {
      for (int j = 0; j < c2; j++) {
        cin >> p2[i][j];
      }
    }
    Matrix B(p2, r2, c2);
    cout << "The second matrix is :" << endl;
    B.print();

    Matrix C = A * B;
    cout << "The multiplication of these two matrices is: " << endl;
    C.print();

  } else {
    cout << "Invalid command!" << endl;
  }
}