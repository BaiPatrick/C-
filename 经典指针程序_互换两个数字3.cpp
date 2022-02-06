/*
时间：2022/2/5 0：46
目的：熟悉并掌握基本类型指针
*/

#include <stdio.h>

//可以完成互换功能
void huhuan_3(int* p, int* q) {
	int t;//如果要互换*p和*q的值，则t必须定义成int 不能定义成int*  否则语法出错
	t = *p;//p是int*  *p是int *p代表的是以p的内容为地址的变量，p存放整型地址，*p代表整型变量，*p为整型
	*p = *q;
	*q = t;
}

int main(void) {
	int a = 3;
	int b = 5;
	huhuan_3(&a, &b);//huhuan_2(a. b);//huhuan_2(*p,*q);报错
	printf("a = %d , b = %d\n", a, b);
	return 0;
}
/*
	总结：
		1、传入了a和b的指针，使用指针变量p和q存放a和b的地址
		2、改变了*p和*q即a和b的值
		3、指针变量p和q所指向的内存空间存储的值发生改变
*/