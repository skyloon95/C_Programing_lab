#include <stdio.h>

void PrintArray(int parr[][4]); // 배열 출력용 함수
void swapArrays(int parr1[][4],int parr2[][4]); // 배열 스왑용 함수

int main()
{
	int arr1[2][4]={ // 1번배열
		{1,3,5,7},
		{2,4,6,8}
	};

	int arr2[2][4]={ // 2번배열
		{9,11,13,15},
		{10,12,14,16}
	};

	printf("=====swapArrays호출 전=====\n"); // swapArrays호출전 배열출력 시작
	printf("arr1 : \n");
	PrintArray(arr1);

	printf("arr2 : \n");
	PrintArray(arr2); // 배열출력 종료

	swapArrays(arr1,arr2); // swap

	printf("=====swapArrays호출 후=====\n"); // swapArrays호출 후 배열출력 시작
	printf("arr1 : \n");
	PrintArray(arr1);

	printf("arr2 : \n");
	PrintArray(arr2); // 배열출력 종료

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
	int save[2][4]; // swap할 배열을 임시로 저장할 이차원배열

	int i,j;

	for(i=0 ; i<2 ; i++) // save에 arr1저장
		for(j=0 ; j<4 ; j++)
			save[i][j]=parr1[i][j];

	for(i=0 ; i<2 ; i++)
		for(j=0 ; j<4 ; j++) // arr1에 arr2저장
			parr1[i][j]=parr2[i][j];

	for(i=0 ; i<2 ; i++)
		for(j=0 ; j<4 ; j++) // arr2에 save(arr1)저장
			parr2[i][j]=save[i][j];
}