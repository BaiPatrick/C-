/*
ʱ�䣺2022/2/6 18��00
Ŀ�ģ��˽����ȡ���ṹ������е�ÿһ����Ա
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
	struct student st = { 80, 66.6,'F' };//��ʼ�� �����ͬʱ����ֵ
	struct student* pst = &st;//&st ���ܸĳ� st ��Ϊָ�������ŵ��ǵ�ַ

	st.age = 10; //��һ�ַ�ʽ
	pst->age = 88; //�ڶ��ַ�ʽ
	//pst->age �ڼ�����ڲ��ᱻת���ɣ�*pst��.age  Ӳ�Թ涨
	//pst->age == (*pst).age == st.age
	return 0;
}

/*
	�ܽ᣺
		1���ṹ�������.��Ա��
		2��ָ�����->��Ա��
		3��ָ�����->��Ա�� == (*ָ�����).��Ա�� == �ṹ�������.��Ա��
*/