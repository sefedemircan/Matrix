#include <stdio.h>
#include <conio.h>
int main() {
  int a[100][100], transpose[100][100], row, col;
  float average, total=0;
  printf("Please enter the row and column:\n");
  scanf("%d %d", &row, &col);

  // Input of matrix elements
  printf("\nPlease enter the elements of matrix:\n");
  for (int i = 0; i < row; i++)
  for (int j = 0; j < col; j++) {
    printf("Enter element a%d%d: ", i + 1, j + 1);
    scanf("%d", &a[i][j]);
  }

  // Matrix output
  printf("\nMatrix output: \n");
  for (int i = 0; i < row; i++)
  for (int j = 0; j < col; j++) {
    printf("%d  ", a[i][j]);
    if (j == row - 1)
    printf("\n");
  }

  // Calculation the transpose
  for (int i = 0; i < row; i++)
  for (int j = 0; j < col; j++) {
    transpose[j][i] = a[i][j];
  }

  // Transpose form
  printf("\nTranspose of Matrix:\n");
  for (int i = 0; i < row; i++)
  for (int j = 0; j < col; j++) {
    printf("%d  ", transpose[i][j]);
    if (j == row - 1)
    printf("\n\n");
  }
  
  // Average of matrix elements
  for(int i=0; i < row; i++)
    {
        for(int j=0; j < col ; j++)
        {
            total=total+a[i][j];
        }
    }
    average=total/(row*col);
    printf("\nAverage of matrix elements = %.2f",average);
    //Matrix lower triangular form
    printf("\n\nLower triangular form of the matrix: ");
   for(int i = 0; i < row; i++)
   {
      printf("\n");
      for(int j = 0; j < col; j++){
      if(i >= j){
         printf("%d\t ", a[i][j]);
      }
      else{
         printf("0");
         printf("\t");
}

}
}
// Matrix upper triangular form
printf("\n\nUpper triangular form of the matrix: ");
   for(int i = 0; i < row; i++){
      printf("\n");
      for(int j = 0; j < col; j++){
         if(i > j){
            printf("0");
            printf("\t");
         }
         else{
            printf("%d\t", a[i][j]);

         }
      }
   }
   
   printf("\n\n\n Instagram: @sefedemircan\t GitHub: @sefedemircan");
   getch();
   return 0;
}
