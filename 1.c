#include <stdio.h>
#define LINE 3
#define COL 5

void getnum(int (*arr)[5]);
void for_average1(int (*arr)[5],int ave1[3]);
int for_average2(int (*arr)[5],int ave);
int for_max(int (*arr)[5],int max);
void print_results(int ave1[3], int ave, int max); 

int main(void)
{
	printf("Please enter three groups of numbers,");
	printf("and each group have five numbers(q to quit):\n");
	int num[LINE][COL];  //数组
	int ave1[LINE];  //返回平均值的一维数组
	int ave;
    int max;
    
	getnum(num);  //任务a
	for(int i = 1;i < LINE;i++)  
	{
		for_average1(num,ave1);
		printf("\n");
	}
	for_average1(num, ave1);  //任务b
	for_average2(num, ave);  //任务c
	max = for_max(num, max);  //任务d
	print_results(ave1, ave, max); //任务e
	
	return 0;
}

//任务a：把用户输入的数据储存在 3×5 的数组中
void getnum(int (*arr)[5])
{
	for(int i = 0;i < LINE;i++)
	{
		for(int j = 0;j < COL;j++)
		{
			scanf("%d",&arr[i][j]);
		}
	}
	printf("Three groups of numbers are as follow:\n");
	for(int i = 0;i < LINE;i++)
	{
		for(int j = 0;j < COL;j++)
		{
			printf("%d ",arr[i][j]);
		}
		printf("\n");
	}
}

//任务b：计算每组（5 个）数据的平均值
void for_average1(int (*arr)[5],int ave1[3])
{
	for(int m = 0;m < LINE;m++)
	{
		int total = 0;
		for(int n = 0;n < COL;n++)
		{
			total += arr[m][n];		
		}
		ave1[m] = total / 5;
		printf("The average of Group%d is %d.\n",m+1,ave1[m]);//提前打印出来是为了证明调用了该函数三次
	}
}

//任务c：计算所有数据的平均值
int for_average2(int (*arr)[5],int ave)
{
	int total = 0;
	for(int m = 0;m < LINE;m++)
	{
		for(int n = 0;n < COL;n++)
		{
			total += arr[m][n];
		}
	}
	int num = LINE*COL;
	ave = total / num;
	printf("The average of all the numbers is %d.\n",ave);
	
	return ave;
}

//任务d：找出这 15 个数据中的最大值
int for_max(int (*arr)[5],int max)
{
	max = arr[0][0];
	for(int m = 0;m < LINE;m++)
	{
		for(int n = 0;n < COL;n++)
		{
			if(arr[m][n] >= max)
				max = arr[m][n];
		}
	}
	printf("The max of all the numbers is %d.",max);
	
	return max;
}

//任务e：打印结果
void print_results(int *ave1, int ave, int max)
{
    printf("Group averages: ");
    for(int i = 0; i < LINE; i++)
    {
        printf("%d ", ave1[i]);
    }
    printf("\nOverall average: %d\n", ave);
    printf("Maximum value: %d\n", max);
}