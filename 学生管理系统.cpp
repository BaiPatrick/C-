/*
时间：2022/2/7 17：46
目的：通过学生管理系统了解动态构造结构体数组
*/

#include <stdio.h>
#include <malloc.h>

struct student
{
	int age;
	float score;
	char name[100];
};

int main(void)
{
	int len;
	struct student* pArr;
	int i,j;
	struct student t;

	//动态构造一维数组
	printf("请输入学生的个数：\n");
	printf("len = ");
	scanf_s("%d", &len);
	pArr=(struct student *)malloc(len* sizeof(struct student));



	for (i = 0; i < len; ++i)
	{
		printf("请输入第%d个学生的信息:", i + 1);
		printf("age = ");
		scanf_s("%d", &pArr[i].age);//表示第i个元素
		printf("name = ");
		scanf_s("%s", pArr[i].name,100);//不需要加取地址符，因为name是数组名，本身就已经是数组首元素的地址
		printf("score = ");
		scanf_s("%f", &pArr[i].score);
	}
	
	//按学生成绩降序排序 冒泡算法
	for (i = 0; i < len - 1; ++i)
	{
		for (j = 0; j < len - 1 - i; ++j)
		{
			//如果j的成绩大于j+1的成绩 就互换两个整体的位置 而不是互换成绩的位置
			if (pArr[j].score < pArr[j + 1].score)
			{
				t = pArr[j];
				pArr[j] = pArr[j + 1];
				pArr[j + 1] = t;
			}
		}
	}

	printf("\n\n学生的信息是\n");
	//输出
	for (i = 0; i < len; ++i)
	{
		printf("第%d个学生的信息是:", i + 1);
		printf("age = %d\n", pArr[i].age);
		printf("name = %s\n", pArr[i].name);
		printf("score = %f\n", pArr[i].score);

		printf("\n");
	}
	return 0;
}