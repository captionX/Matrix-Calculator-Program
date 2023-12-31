#include <stdio.h>
//[ROGRAM_Matrix Operations ]
int main() 
{
  printf("Hello Guest!! \n Welcome to Mathice World \n \n");
  printf("To begin the Program on Operations of two Matrix:\n \n");
  
  //matrix A INPUT
  printf("Enter the digits of matrix A - \n");
   int rows,cols;
   printf("Enter the number of rows: ");
   scanf("%d",&rows);
   printf("Enter the number of columns: ");
   scanf("%d",&cols);
   //decleration of matrix A
  int matA[rows][cols];
  for(int i=0;i<rows;i++)
    {
      for(int j=0;j<cols;j++)
        {
          printf("Enter the elemets:");
          scanf("%d",&matA[i][j]);
        }
    }
  //display matA
  printf("\nThe matrix A is: \n");
  for(int i=0;i<rows;i++)
    {
      for(int j=0;j<cols;j++)
        {
          printf("%d\t",matA[i][j]); 
        }
        printf("\n\n");
    }

  //matrix B INPUT
  printf("Enter the digits of matrix B - \n");
   int row,col;
   printf("Enter the number of rows: ");
   scanf("%d",&row);
   printf("Enter the number of columns: ");
   scanf("%d",&col);
  //declairing matrix B
  int matB[row][col];
  for(int i=0;i<row;i++)
    {
      for(int j=0;j<col;j++)
        {
          printf("Enter the elements: ");
          scanf("%d",&matB[i][j]);
        }
    }
  //display matB
  printf("\nThe matrix B is: \n");
  for(int i=0;i<row;i++)
    {
      for(int j=0;j<col;j++)
        {
          printf("%d \t",matB[i][j]);
        }
        printf("\n\n");
    }

  //result matrix Declair 
  int matResult[rows][cols];

  //chose the operation
  int choice;
  do
    {
  printf("Enter the choice of operation: \n");
  printf("1. Addition \n");
  printf("2. Subtraction \n");
  printf("3. Multiplication \n");
  printf("4. Transpose \n");
  printf(">. For Exit \n ");
  scanf("%d",&choice);
    switch(choice)
      {
        case 1://(addition)
          for(int i=0;i<rows;i++)
          {
            for(int j=0;j<cols;j++)
              {
                matResult[i][j]=matA[i][j]+matB[i][j];
              }  
          }
    printf(">> The result of Addition is: \n");
           for(int i=0;i<rows;i++)
              {
                 for(int j=0;j<cols;j++)
                    {
                      printf("%d \t",matResult[i][j]);
                    }
                printf("\n\n");
              }  
    break;
        case 2://(subtraction)
          for(int i=0;i<rows;i++)
          {
            for(int j=0;j<cols;j++)
              {
                matResult[i][j]=matA[i][j]-matB[i][j];
              }  
          }
    printf(">> The result of Subtraction is: \n");
           for(int i=0;i<rows;i++)
              {
                 for(int j=0;j<cols;j++)
                    {
                      printf("%d \t",matResult[i][j]);
                    }
                printf("\n\n");
              }  
    break;
        case 3://(multiplication)
          for(int i=0;i<rows;i++)
          {
            for(int j=0;j<cols;j++)
              {
                matResult[i][j]=matA[i][j]*matB[i][j];
              }  
          }
    printf(">> The result of Multiplication is: \n");
           for(int i=0;i<rows;i++)
              {
                 for(int j=0;j<cols;j++)
                    {
                      printf("%d \t",matResult[i][j]);
                    }
                printf("\n\n");
              }  
    break;
        case 4://(transpose)
          for(int i=0;i<rows;i++)
          {
            for(int j=0;j<cols;j++)
              {
                int temp = matA[i][j];
                matA[i][j]=matB[j][i];
                matB[j][i]=temp;
              }  
          }
    printf(">> The result of Transpose is: \n");
          printf(">> The matrix A is: \n");
           for(int i=0;i<rows;i++)
              {
                 for(int j=0;j<cols;j++)
                    {
                      printf("%d \t",matA[i][j]);
                    }
                printf("\n\n");
              }
          printf(">> The matrix B is: \n");
           for(int i=0;i<rows;i++)
             {
                for(int j=0;j<cols;j++)
                   {
                     printf("%d \t",matB[i][j]);
                   }
                printf("\n\n");
              }
          break;
        case 5://(exit)
        printf("Thank you for using the program.\n");
        break;
        default:
        printf("Invalid choice.");
        break; 
      }
  //Run any other operation again
  printf(">> Enter 1 to continue any other operation or 0 to exit: ");
  scanf("%d",&choice);
 }
   while (choice==1);
    printf("Thank you for using the program.\n");   
  //E N D
  return 0;
}
