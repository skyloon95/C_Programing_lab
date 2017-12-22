#include <stdio.h>

void PrintArray(int parr[][4]); // �迭 ��¿� �Լ�
void swapArrays(int parr1[][4],int parr2[][4]); // �迭 ���ҿ� �Լ�

int main()
{
	int arr1[2][4]={ // 1���迭
		{1,3,5,7},
		{2,4,6,8}
	};

	int arr2[2][4]={ // 2���迭
		{9,11,13,15},
		{10,12,14,16}
	};

	printf("=====swapArraysȣ�� ��=====\n"); // swapArraysȣ���� �迭��� ����
	printf("arr1 : \n");
	PrintArray(arr1);

	printf("arr2 : \n");
	PrintArray(arr2); // �迭��� ����

	swapArrays(arr1,arr2); // swap

	printf("=====swapArraysȣ�� ��=====\n"); // swapArraysȣ�� �� �迭��� ����
	printf("arr1 : \n");
	PrintArray(arr1);

	printf("arr2 : \n");
	PrintArray(arr2); // �迭��� ����

	return 0;
}

void PrintArray(int parr[][4])
{
	int i,j;

	for(i=0 ; i<2 ; i++){
		printf("{");
		for(j=0 ; j<4 ; j++)
			printf("%d, ",parr[i][j]);
		printf("}\n");
	}

	printf("\n\n");
}

void swapArrays(int parr1[][4],int parr2[][4])
{
	int save[2][4]; // swap�� �迭�� �ӽ÷� ������ �������迭

	int i,j;

	for(i=0 ; i<2 ; i++) // save�� arr1����
		for(j=0 ; j<4 ; j++)
			save[i][j]=parr1[i][j];

	for(i=0 ; i<2 ; i++)
		for(j=0 ; j<4 ; j++) // arr1�� arr2����
			parr1[i][j]=parr2[i][j];

	for(i=0 ; i<2 ; i++)
		for(j=0 ; j<4 ; j++) // arr2�� save(arr1)����
			parr2[i][j]=save[i][j];
}