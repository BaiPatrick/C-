/*
时间：2022/2/6 19：30
目的：了解结构体变量的赋值和初始化
*/

#include <stdio.h>

struct student
{
	int age;
	float score;
	char sex;
};

int main(void)
{
	struct student st = { 80, 66.6,'F' };//初始化 定义的同时赋初值
	struct student st2;
	st2.age = 10;
	st2.score = 88;
	st2.sex = 'F';

	printf("%d %f %c\n", st.age, st.score, st.sex);
	printf("%d %f %c\n", st2.age, st2.score, st2.sex);

	return 0;
}
/*
	输出结果：
		80 66.599998 F
		10 88.000000 F
	总结：
		赋值只能单个赋值
		初始化可以整体赋值
*/