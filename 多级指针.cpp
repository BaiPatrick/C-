#include <stdio.h>


//修改指针变量地址
void f(int** q)//指针变量的地址
{
	//*q 就是p  要修改指针变量的地址 就要发送指针变量的地址 指针变量的地址
}
void g()
{
	int i = 10;
	int* p = &i;
	f(&p); //p是int*类型 &p是int**类型    &p表示是指针变量的地址 所以&p是int**类型
}

int main(void)
{
	int i = 10;//该变量只能存放int类型的数据
	int* p = &i;//该指针变量只能存放int类型变量的地址 *表示（数据类型/int）的地址
	int** q = &p;//该指针变量只能存放int *类型变量的地址 第二个*表示（数据类型/int*）的地址
	int*** r = &q;//该指针变量只能存放int**类型变量的地址 第三个*表示（数据类型/int**）的地址


	//r = &p; 因为r是int***类型，r只能存放int**类型变量的地址
	printf("i=%d\n", ***r);

	return 0;
}


/*
	输出结果：
		i=10
	原因：
		*r=q
		**r=*q
		*q = p //**r=p 
		*p =i  //***r=i
*/