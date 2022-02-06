#include <stdio.h>

int main(void)
{
	int i = 10;//该变量只能存放int类型的数据
	int* p = &i;//该指针变量只能存放int类型变量的地址 *表示（数据类型/int）的地址
	int** q = &p;//该指针变量只能存放int *类型变量的地址 第二个*表示（数据类型/int*）的地址
	int*** r = &q;//该指针变量只能存放int**类型变量的地址 第三个*表示（数据类型/int**）的地址

	return 0;
}