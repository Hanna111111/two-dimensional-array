#include <iostream>
#include <ctime>
using namespace std;

/* two-dimensional array, input and output */

int
main ()
{
  const int rows = 5;
  const int cols = 8;

  int arr[rows][cols];

  //input numbers in array
  for (int i = 0; i < rows; i++)
    {
      for (int j = 0; j < cols; j++)
	{
	  arr[i][j] = rand () % 10;
	}
    }

  //output numbers from array
  for (int i = 0; i < rows; i++)
    {
      for (int j = 0; j < cols; j++)
	{
	  cout << arr[i][j] << "\t";
	}
      cout << endl;
    }
}
