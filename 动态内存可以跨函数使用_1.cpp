/*
ʱ�䣺 2022/2/6 17��00
Ŀ�ģ��˽⶯̬�ڴ���ο纯��ʹ��
*/
#include <stdio.h>
#include <malloc.h>
void f(int** q)
{
	*q = (int*)malloc(sizeof(int));//sizeof���������ͣ� ����ֵʱ������������ռ���ֽ���
								//�ȼ��� p = (int*)malloc(sizeof(int));
	//q = 5;//����
	//*q = 5;//p = 5;
	/*Ϊʲô*q����
		1����ָ����q������p
		2��p�ĵ�ַ��int * ��ô��ŵĵ�ַ����Ҫ int **
		3����ŵ���** һ��*����Խ����ȡ**����
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