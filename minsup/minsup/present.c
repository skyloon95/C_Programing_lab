#include <stdio.h>

void printArrays(int *parr1, int *parr2,int size); // 출력용 함수
void swapArrays(int *parr1, int *parr2, int size); // 스왑용 함수

int main()
{
	int arr1[]={1,2,3,4,5}; // arr1
	int arr2[]={6,7,8,9,0}; // arr2
	int size=0; // 배열의 사이즈를 저장할 변수

	size=sizeof(arr1)/sizeof(int); // 변수크기/int크기

	printf("=====변경 전=====\n");

	printArrays(arr1,arr2,size); // 출력

	printf("\n\n");

	swapArrays(arr1,arr2,size); // 스왑

	printf("=====변경 후=====\n");

	printArrays(arr1,arr2,size); // 출력

	return 0;
}

void printArrays(int *parr1, int *parr2,int size)
{
	int i;
	
	printf("arr1 = {");
	for(i=0 ; i<size ; i++) // arr1출력
		printf("%d, ",parr1[i]);
	printf("}\n");

	printf("arr2 = {");
	for(i=0 ; i<size ; i++) // arr2출력
		printf("%d, ",parr2[i]);
	printf("}\n");
}

void swapArrays(int *parr1, int *parr2, int size)
{
	int save_arr1,save_arr2; // 각각 arr1과 2의 값을 임시로 저장할 변수

	int i;

	for(i=0 ; i<size ; i++){
		save_arr1=parr1[i]; // parr1[i]의값을 save_arr1에 저장
		save_arr2=parr2[i]; // parr2[i]의 값을 save_arr2에 저장
		parr1[i]=save_arr2; // 변경
		parr2[i]=save_arr1; // 변경
	}
}