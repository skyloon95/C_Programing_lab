#include <stdio.h>

#define SUBJECT 3

double column_avg (int (*score) [SUBJECT], int n, int i);
double row_avg (int (*score) [SUBJECT], int n, int i);

int main()
{
	int score[][SUBJECT]={
		{78,86,92},
		{95,88,76},
		{73,69,99},
		{82,76,93},
		{79,85,91},
		{93,99,61}
	};

	int i,j,n;

	n = sizeof(score)/sizeof(score[0]);

	printf("학생    ");
	for(i = 0 ; i<SUBJECT ; i++)
		printf("%d      ",i+1);
	printf("\n\n");
	for(i = 0; i<6 ; i++){
		printf("%c      ",65+i);
		for(j = 0 ; j<3 ; j++)
			printf("%d     ",score[i][j]);
		printf("\n");
	}

	printf("\n\n");
	printf("======각 과목의 평균======\n");

	for(i=0 ; i<SUBJECT ; i++){
		printf("과목%d의 평균 = %.3f\n",i+1,column_avg(score,n,i));
	}

	printf("\n\n");
	printf("======각 학생의 평균======\n");

	for(i=0 ; i<n ; i++)
		printf("학생%c의 평균 = %.3f\n",65+i,row_avg(score,n,i));

	return 0;
}

double column_avg (int (*score) [SUBJECT], int n, int i)
{
	int a,sum=0;

	double average;

	for(a=0 ; a<n ; a++)
		/*sum+=*(*(score+a)+i);*/
		sum+=score[a][i];

	average=(double)sum/n;

	return average;
}

double row_avg (int (*score) [SUBJECT], int n, int i)
{
	int a,sum=0;

	double average;

	for(a=0 ; a<SUBJECT ; a++)
		/*sum+=score[i][a];*/
		sum+=*(*(score+i)+a);

	average=(double)sum/SUBJECT;

	return average;
}