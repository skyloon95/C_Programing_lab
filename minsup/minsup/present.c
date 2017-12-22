#include <stdio.h>

void printArrays(int *parr1, int *parr2,int size); // ��¿� �Լ�
void swapArrays(int *parr1, int *parr2, int size); // ���ҿ� �Լ�

int main()
{
	int arr1[]={1,2,3,4,5}; // arr1
	int arr2[]={6,7,8,9,0}; // arr2
	int size=0; // �迭�� ����� ������ ����

	size=sizeof(arr1)/sizeof(int); // ����ũ��/intũ��

	printf("=====���� ��=====\n");

	printArrays(arr1,arr2,size); // ���

	printf("\n\n");

	swapArrays(arr1,arr2,size); // ����

	printf("=====���� ��=====\n");

	printArrays(arr1,arr2,size); // ���

	return 0;
}

void printArrays(int *parr1, int *parr2,int size)
{
	int i;
	
	printf("arr1 = {");
	for(i=0 ; i<size ; i++) // arr1���
		printf("%d, ",parr1[i]);
	printf("}\n");

	printf("arr2 = {");
	for(i=0 ; i<size ; i++) // arr2���
		printf("%d, ",parr2[i]);
	printf("}\n");
}

void swapArrays(int *parr1, int *parr2, int size)
{
	int save_arr1,save_arr2; // ���� arr1�� 2�� ���� �ӽ÷� ������ ����

	int i;

	for(i=0 ; i<size ; i++){
		save_arr1=parr1[i]; // parr1[i]�ǰ��� save_arr1�� ����
		save_arr2=parr2[i]; // parr2[i]�� ���� save_arr2�� ����
		parr1[i]=save_arr2; // ����
		parr2[i]=save_arr1; // ����
	}
}