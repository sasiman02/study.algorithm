#include<stdio.h>

void bubbleSort(int A[1000],int n);

void swap(int *a,int *b);

int main()
{
	int i;
	int N;
	int A[1000];
	
	scanf("%d",&N);
	
	for(i = 0; i < N ; i++)
	{
		scanf("%d", &A[i]);
	}
	
	bubbleSort(A, N);
	
	for( i = 0 ; i < N; i++)
	{
		printf("%d\n", A[i]);
	}
	
	return 0;
}

void bubbleSort(int A[], int n)
{
	int i, j;
	
	for( i = 0; i < n ; i++)
	{
		for( j = 0; j < n - i - 1; j++)
		{
			if( A[j] > A[j + 1])
			{
				swap(&A[j], &A[j + 1]);
			}
		}
	}s
}

void swap(int *a, int *b)
{
	int temp;
	
	temp = *a;
	*a = *b;
	*b = temp;
}
