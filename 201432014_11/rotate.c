#include <stdio.h>

void printArray(int (*parr) [4]); // ����Լ�
void rotate(int (*parr) [4]); // ��ȯ�Լ�

int main()
{
	int arr[4][4]={ // �迭 �ʱ�ȭ
		{1,2,3,4},
		{5,6,7,8},
		{9,8,7,6},
		{5,4,3,2}
	};

	printf("=====���� ��=====\n"); // ������ ���
	printArray(arr);

	printf("\n\n");
	
	rotate(arr); // 1ȸ°����

	printf("=====1ȸ ����====\n"); // 1ȸ������ ���
	printArray(arr);

	printf("\n\n"); // 2ȸ°����
	
	rotate(arr);

	printf("=====2ȸ ����====\n"); // 2ȸ������ ���
	printArray(arr);

	printf("\n\n");
	
	rotate(arr); // 3ȸ°����

	printf("=====3ȸ ����====\n"); // 3ȸ������ ���
	printArray(arr);

	return 0;
}

void printArray(int (*parr) [4])
{
	int i,j;

	for(i=0 ; i<4 ; i++){
		for(j=0 ; j<4 ; j++)
			printf("%d, ",parr[i][j]);
		printf("\n");
	}
}

void rotate(int (*parr) [4])
{
	int switch_array[4][4];
	
	int i,j;

	for(j=0 ; j<4 ; j++)
		for(i=0 ; i<4 ; i++)
			switch_array[j][3-i]=parr[i][j]; // 90�� ȸ���Ͽ� ����

	for(i=0 ; i<4 ; i++)
		for(j=0 ; j<4 ; j++)
			parr[i][j]=switch_array[i][j]; // �ӽ÷� �����ص� �迭�� �ٽ� parr�� ����
}