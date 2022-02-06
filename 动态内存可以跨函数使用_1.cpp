/*
时间： 2022/2/6 17：00
目的：了解动态内存如何跨函数使用
*/
#include <stdio.h>
#include <malloc.h>
void f(int** q)
{
	*q = (int*)malloc(sizeof(int));//sizeof（数据类型） 返回值时该数据类型所占的字节数
								//等价于 p = (int*)malloc(sizeof(int));
	//q = 5;//错误
	//*q = 5;//p = 5;
	/*为什么*q不能
		1、它指的是q而不是p
		2、p的地址是int * 那么存放的地址则需要 int **
		3、存放的是** 一个*不能越级读取**内容
	*/
	**q = 5; //*p = 5;
}

int main(void)
{
	int* p;
	f(&p);
	print

	return 0;
}