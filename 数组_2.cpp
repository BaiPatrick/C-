/*
Ŀ�ģ��˽������ָ��
*/

#include <stdio.h>

void show_Array(int* p, int len) //lenָ����
{
	int i = 0;
	//p[2] = -1; //p[0]�ȼ���*p    p[2]�ȼ��� *��p+2���ȼ��� *��a+2���ȼ���a[2]
	//p[i]������������a[i]
	for (i = 0; i < len; ++i)
		printf("%d\n", p[i]);
}

int main(void)
{
	int a[5] = { 1,2,3,4,5 };
	show_Array(a, 5); //a�ȼ��� &a[0]��&a[0]�������int* ���� ��a���͸�p
	//printf("%d\n", a[2]);
	
	return 0;
}
/*
	��������
	1
	2
	3
	4
	5
*/