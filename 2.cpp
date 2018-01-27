#include <iostream>
using namespace std;

class matrix
{
  public:
	  matrix();
	  int printMatrix();
  private:
	  int row,col;
};
matrix::matrix()
{
  row = 0;
  col = 0;
}
int matrix::printMatrix()
{
  int a,b;
  cout << "输入数组的行数：\n";
  cin >> a;
  cout << "输入数组的列数：\n";
  cin >> b;
  row = a;
  col = b;
  int** x;
  x = new int*[row];
  for (int i = 0; i < row; i++)
  {
    x[i] = new int[col];
  }
  cout << "输入数组的值：\n";
  for (int m = 0; m < row; m++)
  {
    for (int k = 0; k < col; k++)
	{
	  cin >> x[m][k];
	}
  }
  cout << "输出数组的值：\n";
  for (int m = 0; m < row; m++)
  {
    for (int k = 0; k < col; k++)
	{
	  cout << x[m][k] << "\t";
	}
	cout << endl;
  }
  return 0;
}

int main()
{
  matrix m1;
  m1.printMatrix();
  return 0;
}
