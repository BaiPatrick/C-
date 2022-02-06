/*
时间： 2022/2/6 15：18
目的：了解动态数组的使用 malloc函数
*/

#include <stdio.h>
#include <malloc.h>

int main(void)
{
	int i = 5;//分配了4个字节 静态分配
	int* p = (int*)malloc(4);//int（*）强制类型转换 表示把第一个字节的地址强制转化为整型的地址
						  //p变量占4个字节，p所指向的内存也占4个字节
	return 0;
}
/*
	总结：
		1、使用malloc函数必须加malloc.h头文件
		2、malloc函数只有一个形参，并且是整数类型
		3、4表示请求系统为本程序分配4个字节 
		4、malloc函数只能返回第一个字节的地址
		5、p本身所占的内存是静态分配的，p所指向的内存是动态分配的
*/