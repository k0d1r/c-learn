/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

// ODEV 1,2,3,4

// CDEV 1. SORU

#include <stdio.h>

#define ROW_A 3
#define COL_A 3
#define ROW_B 3
#define COL_B 3

void
matrixMultiplication (int A[ROW_A][COL_A], int B[ROW_B][COL_B],
		      int C[ROW_A][COL_B])
{
  int i, j, k;

  for (i = 0; i < ROW_A; ++i)
    {
      for (j = 0; j < COL_B; ++j)
	{
	  C[i][j] = 0;
	  for (k = 0; k < COL_A; ++k)
	    {
	      C[i][j] += A[i][k] * B[k][j];
	    }
	}
    }
}

void
printMatrix (int matrix[ROW_A][COL_B])
{
  int i, j;

  for (i = 0; i < ROW_A; ++i)
    {
      for (j = 0; j < COL_B; ++j)
	{
	  printf ("%d\t", matrix[i][j]);
	}
      printf ("\n");
    }
}

int
main ()
{
  int A[ROW_A][COL_A] = { {1, 2, 3}, {4, 5, 6}, {7, 8, 9} };
  int B[ROW_B][COL_B] = { {1, 2, 3}, {4, 5, 6}, {7, 8, 9} };
  int C[ROW_A][COL_B];

  matrixMultiplication (A, B, C);

  printf ("Matris C:\n");
  printMatrix (C);

  return 0;
}

// CDEV 2. SORU

#include <stdio.h>

#define ROW 3
#define COL 3

int
isSymmetric (int matrix[ROW][COL])
{
  int i, j;

  int transpose[COL][ROW];
  for (i = 0; i < ROW; ++i)
    {
      for (j = 0; j < COL; ++j)
	{
	  transpose[j][i] = matrix[i][j];
	}
    }


  for (i = 0; i < ROW; ++i)
    {
      for (j = 0; j < COL; ++j)
	{
	  if (matrix[i][j] != transpose[i][j])
	    {
	      return 0;
	    }
	}
    }

  return 1;
}

int
main ()
{
  int matrix[ROW][COL] = { {1, 2, 3}, {2, 1, 2}, {3, 2, 1} };

  if (isSymmetric (matrix))
    {
      printf ("Matris simetriktir.\n");
    }
  else
    {
      printf ("Matris simetrik deDildir.\n");
    }

  return 0;
}

// CDEV 3.SORU

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define SIZE 9

void
printArray (int arr[], int size)
{
  for (int i = 0; i < size; i++)
    {
      printf ("%d ", arr[i]);
    }
  printf ("\n");
}

void
swap (int *a, int *b)
{
  int temp = *a;
  *a = *b;
  *b = temp;
}

void
selectionSort (int arr[], int size)
{
  int i, j, minIndex;

  for (i = 0; i < size - 1; i++)
    {
      minIndex = i;
      for (j = i + 1; j < size; j++)
	{
	  if (arr[j] < arr[minIndex])
	    {
	      minIndex = j;
	    }
	}
      swap (&arr[i], &arr[minIndex]);

      printf ("AdD1m %d: ", i + 1);
      printArray (arr, size);
    }
}

int
main ()
{
  int arr[SIZE] = { 7, 3, 5, 8, 2, 9, 4, 15, 6 };

  printf ("SD1rasD1z Dizi: ");
  printArray (arr, SIZE);

  selectionSort (arr, SIZE);

  printf ("SD1ralD1 Dizi: ");
  printArray (arr, SIZE);

  return 0;
}

// CDEV 4.SORU

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define SIZE 10

void
printArray (int arr[], int size)
{
  for (int i = 0; i < size; i++)
    {
      printf ("%d ", arr[i]);
    }
  printf ("\n");
}

int
binarySearch (int arr[], int low, int high, int key)
{
  while (low <= high)
    {
      int mid = low + (high - low) / 2;

      if (arr[mid] == key)
	{
	  return mid;
	}

      if (arr[mid] < key)
	{
	  low = mid + 1;
	}
      else
	{
	  high = mid - 1;
	}
    }

  return -1;
}

int
main ()
{
  int arr[SIZE];
  int key;

  srand (time (NULL));
  for (int i = 0; i < SIZE; i++)
    {
      arr[i] = rand () % 100;
    }

  printf ("SD1rasD1z Dizi: ");
  printArray (arr, SIZE);
  qsort (arr, SIZE, sizeof (int), compar);

  printf ("SD1ralD1 Dizi: ");
  printArray (arr, SIZE);

  printf ("Aranacak DeDer: ");
  scanf ("%d", &key);

  int result = binarySearch (arr, 0, SIZE - 1, key);

  if (result != -1)
    {
      printf ("DeDer %d. indekste bulundu.\n", result);
    }
  else
    {
      printf ("DeDer bulunamadD1.\n");
    }

  return 0;
}
