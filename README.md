# Matrix

Matrix is a simple implementation for matrix multiplication and transpose.

## Compilation

Just type "make" in the terminal.

```bash
make
```

## Test program
After compilation, there is a samll test program named "main".
```bash
./main
```

## Usage

```c++
//Specift the number of rows and columns first.
int rows = 2, cols=2;

//create a 2-D vector to implement a matrix, the value of elements should be defined by the user.
vector<vector<double>> p(rows, vec<double>(cols, 0));
p = {{1,2}, {3,4}};

//Construct the matrix
Matrix A(p, rows, cols);

//Matrix transpose
Matrix B = transpose(A);

//Matrix multiplication
Matrix C = A * B;

//Print out the matrix
C.print();
```

