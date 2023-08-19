#include <stdio.h>
int main()
{
  int row;
  int col;

  printf("Ener row size: ");
  scanf("%d", &row);
  printf("Ener column size: ");
  scanf("%d", &col);

  int arr[row][col];

  for(int i=0;i<row;i++)
  {
    for(int j=0;j<col;j++)
    {
      printf("Enter arr[%d][%d]: ",i,j);
      
      
      
      scanf("%d", &arr[i][j]);
    }
    printf("\n");
  }

  printf("The 2D Array are:\n");
  for(int i=0; i<row; i++) {
    for(int j=0; j<col; j++) {
      printf("%d ", arr[i][j]);
    }
    printf("\n");
}
}