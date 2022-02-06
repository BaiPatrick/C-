/*
时间：2022/2/5 23：28
目的：了解通过指针为什么可以使函数返回一个以上的值
*/

#include <stdio.h>

int f(int i, int j)
{
	return 100;
	//return 88; 不会显示 因为第一个return就结束了程序并返回值给主调函数
}
//被调函数
void g(int* p, int* q) //a，b和当中的p，q不是一个变量	相当于p取地址a 
{
	*p = 1;
	*q = 2;
}
//主调函数
int main(void)
{
	int a = 3, b = 5;
	g(&a, &b);
	printf("%d %d\n", a, b);

	return 0;
}
/*
	总结：
		1、实参必须为该普通变量的地址
		2、形参必须为指针变量
		3、在被调函数中通过 *形参名=… 的方式就可以修改主调函数相关变量的值
*/