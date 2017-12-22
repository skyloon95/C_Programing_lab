#include <stdio.h>

void printArray(int (*parr) [4]); // 출력함수
void rotate(int (*parr) [4]); // 변환함수

int main()
{
	int arr[4][4]={ // 배열 초기화
		{1,2,3,4},
		{5,6,7,8},
		{9,8,7,6},
		{5,4,3,2}
	};

	printf("=====변경 전=====\n"); // 변경전 출력
	printArray(arr);

	printf("\n\n");
	
	rotate(arr); // 1회째변경

	printf("=====1회 변경====\n"); // 1회변경후 출력
	printArray(arr);

	printf("\n\n"); // 2회째변경
	
	rotate(arr);

	printf("=====2회 변경====\n"); // 2회변경후 출력
	printArray(arr);

	printf("\n\n");
	
	rotate(arr); // 3회째변경

	printf("=====3회 변경====\n"); // 3회변경후 출력
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
			switch_array[j][3-i]=parr[i][j]; // 90도 회전하여 저장

	for(i=0 ; i<4 ; i++)
		for(j=0 ; j<4 ; j++)
			parr[i][j]=switch_array[i][j]; // 임시로 저장해둔 배열을 다시 parr에 복사
}