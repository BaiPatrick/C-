/*
ʱ�䣺2022/2/6 20��00
Ŀ�ģ�ͨ��������ɽṹ���������������
*/
#include <stdio.h>

#include <string.h>
//void inputstudent(struct student stu);
struct student
{
	int age;
	char sex;
	char name[100];
};

void Inputstudent(struct student *);
void Outputstudent(struct student *);

int main(void)
{
	struct student st;

	Inputstudent(&st);//�Խṹ���������  ���뷢��st�ĵ�ַ 
	//printf("%d %c %s\n", st.age, st.sex, st.name);
	Outputstudent(&st);//�Խṹ�������� �Խṹ�����������Է��ͽṹ������ĵ�ַҲ����ֱ�ӷ��ͽṹ�����������
					//Ϊ�˼����ڴ�ĺķѺ����ִ���ٶ� �Ƽ����͵�ַ

	return 0;
}

void Outputstudent(struct student *pst)
//�޸�ss����Ӱ��st �޸�st����Ӱ��ss �������ڰ�st��ֵ������ss ����������һ��
//����ss��st��������ͬ�ı���������ָ�����Լ����ڴ��ַ�����Ըı�ss��ֵ�����ܸı�st��ֵ
{
	printf("%d %c %s\n", pst->age, pst->sex, pst->name);
}


void Inputstudent(struct student* pstu)//pstuֻռ4���ֽ�
{
	(*pstu).age = 10;
	strcpy_s(pstu->name, "����");
	pstu->sex = 'F';
}


/*�������޷�����������st��ֵ ��Ϊ�������Ǵ����*/
/*void inputstudent(struct student stu)
{
	stu.age = 10;
	strcpy_s(stu.name, "����");
	stu.sex = 'F';
}
*/
/*
	�ܽ᣺
		���������
			Input�ṹ�������Խṹ���������
			Output�ṹ�������Խṹ��������
			�Խṹ�����������뷢�ͽṹ������ĵ�ַ
			�Խṹ�����������Է��ͽṹ������ĵ�ַҲ����ֱ�ӷ��ͽṹ�����������
			Ϊ�˼����ڴ�ĺķѺ����ִ���ٶ� �Ƽ����͵�ַ
	˼����
		���͵�ַ���Ƿ������ݣ�
			ָ����ŵ㣺
				���ٵĴ�������
				�����ڴ�С
				ִ���ٶȿ�
*/