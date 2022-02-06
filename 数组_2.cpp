/*
目的：了解数组和指针
*/

#include <stdio.h>

void show_Array(int* p, int len) //len指个数
{
	int i = 0;
	//p[2] = -1; //p[0]等价于*p    p[2]等价于 *（p+2）等价于 *（a+2）等价于a[2]
	//p[i]就是主函数的a[i]
	for (i = 0; i < len; ++i)
		printf("%d\n", p[i]);
}

int main(void)
{
	int a[5] = { 1,2,3,4,5 };
	show_Array(a, 5); //a等价于 &a[0]，&a[0]本身就是int* 类型 把a发送给p
	//printf("%d\n", a[2]);
	
	return 0;
}
/*
	输出结果：
	1
	2
	3
	4
	5
*/