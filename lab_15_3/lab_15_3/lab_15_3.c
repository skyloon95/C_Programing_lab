#include <stdio.h>

#define LONG_ARR 10

void Save_Arr(int *Parr, int *odd, int *even);

int main()
{
	int arr[LONG_ARR] = {0};
	
	int odd=0, even=0;

	int *Podd=&odd, *Peven=&even;

	int i;

	printf("%d���� ���ڸ� ������� �Է��ϼ���. (Ȧ���� �� �� ����, ¦���� �� �� ���� �����մϴ�.) : ",LONG_ARR);
	
	for(i = 0 ; i < LONG_ARR ; i++){
		Save_Arr(arr, Podd, Peven);
	}

	for(i = 0 ; i < LONG_ARR ; i++)
		printf("%d  ",arr[i]);

	return 0;
}

void Save_Arr(int *Parr, int *odd, int *even)
{
	int scan;
	scanf("%d",&scan);

	if(scan==1 || scan%2==1){
		Parr[*odd]=scan;
		(*odd)++;
	}

	else{
		Parr[(LONG_ARR-1)-*even]=scan;
		(*even)++;
	}
}