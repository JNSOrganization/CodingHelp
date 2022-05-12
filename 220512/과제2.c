#include <stdio.h>

int** transpose(int** matrix, int m, int n);
void printMatrix(int** matrix, int m, int n);

int main()
{
  int Rows = 0;
  int Cols = 0;
  int** Matrix;
  int Seed = 20211234;
  srand(20211234);
  
  printf("Number of Rows : ");
  scanf("%d", &Rows);
  printf("Number of Cols : ");
  scanf("%d", &Cols);
  
  Matrix = malloc(sizeof(int*) * Rows);
  for(int i = 0; i < Rows; i++)
    Matrix[i] = malloc(sizeof(int*) * Cols);
  
  printf("seed번호 %d로 생성된 Matrix\n", Seed);
  
  for(int m = 0; m < Rows; m++)
    for(int n = 0; n < Cols; n++)
      Matrix[m][n] = rand() % 100 + 1; 
  
  printMatrix(Matrix, Rows, Cols);
  Matrix = Transpose(Matrix, Rows, Cols);
  
  printf("Transpose된 Matrix\n");
  printMatrix(Matrix, Cols, Rows);
  
  return 0;
}

int** transpose(int** _matrix, int _m, int _n)
{
  int m = _n;
  int n = _m;
  int** matrix = malloc(sizeof(int*) * m);
  for(int i = 0; i < m; i++)
    matrix[i] = malloc(sizeof(int*) * n);
  
  for(int i = 0; i < _m; i++)
    for(int j = 0; j < _n; j++)
      matrix[j][i] = _matrix[i][j];
  
  return matrix;
}

void printMatrix(int** matrix, int _m, int _n)
{
  for(int m = 0; m < _m; m++)
  {
    for(int n = 0; n < _n; n++)
      prtinf("%d ", matrix[m][n]); 
    
    printf("\n");
  }
}
