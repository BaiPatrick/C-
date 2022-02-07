/*
时间：2022/2/6 18：00
目的：了解如何取出结构体变量中的每一个成员
*/

#include <stdio.h>

struct student
{
	int age;
	double score;
	char sex;
};

int main(void)
{
	struct student st = { 80, 66.6,'F' };//初始化 定义的同时赋初值
	struct student* pst = &st;//&st 不能改成 st 因为指针变量存放的是地址

	st.age = 10; //第一种方式
	pst->age = 88; //第二种方式
	//pst->age 在计算机内部会被转化成（*pst）.age  硬性规定
	//pst->age == (*pst).age == st.age
	return 0;
}

/*
	总结：
		1、结构体变量名.成员名
		2、指针变量->成员名
		3、指针变量->成员名 == (*指针变量).成员名 == 结构体变量名.成员名
*/