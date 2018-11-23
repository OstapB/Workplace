//Hi
#include <stdio.h>
#include <math.h>
#include <cstdlib>
#define N 5
void selectionSort(int Matrix[][N]);
void outMatrix(int Matrix[][N]);
void calcMatr(int Matrix[][N]);
int main()
{
	int Matrix[N][N] =

	{ 2, 0, 33, -1, -21,
	  78, 7, -4, -3, 11,
	   -2, -7, -1, -9, 0,
	   13, 61, 60, 42, -10,
	   1, 0, 4, 0, 16 };
	outMatrix(Matrix);
	selectionSort(Matrix);
	outMatrix(Matrix);
	calcMatr(Matrix);
	system("pause");
	return 0;
}
void selectionSort(int Matrix[][N])
{
	int temp;
	int index;
	int min;
	for (int j = 0;j < N;++j) {
		for (int k = 0;k < N - 1;++k) {
			min = Matrix[k][j];
			index = k;
			for (int i = k + 1;i < N;++i) {
				if (Matrix[i][j] < min)
				{
					min = Matrix[i][j];
					index = i;
				}
			}
			temp = Matrix[k][j];
			Matrix[k][j] = Matrix[index][j];
			Matrix[index][j] = temp;
		}

	}
}

void outMatrix(int Matrix[][N])
{
	for (int i = 0;i < N;++i) {
		for (int j = 0;j < N;++j)
			printf("%d\t", Matrix[i][j]);
		printf("\n");
	}
	printf("\n");

}
void calcMatr(int Matrix[][N])
{
	float mean_geomertic_value = 1;
	int Sum;
	for (int i = 0; i < N; i++) {
		Sum = 0;
		for (int j = 0; j < N; ++j) {
			Sum += Matrix[i][j];

		}
		printf("\nSum = %d\n", Sum);
		mean_geometric_value *= Sum;

	}
	mean_geometric_value = pow(mean_geometric_value, 1.0 / N);
	printf("geo = %f\n", mean_geometric_value);
} 
