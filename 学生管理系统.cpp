/*
ʱ�䣺2022/2/7 17��46
Ŀ�ģ�ͨ��ѧ������ϵͳ�˽⶯̬����ṹ������
*/

#include <stdio.h>
#include <malloc.h>

struct student
{
	int age;
	float score;
	char name[100];
};

int main(void)
{
	int len;
	struct student* pArr;
	int i,j;
	struct student t;

	//��̬����һά����
	printf("������ѧ���ĸ�����\n");
	printf("len = ");
	scanf_s("%d", &len);
	pArr=(struct student *)malloc(len* sizeof(struct student));



	for (i = 0; i < len; ++i)
	{
		printf("�������%d��ѧ������Ϣ:", i + 1);
		printf("age = ");
		scanf_s("%d", &pArr[i].age);//��ʾ��i��Ԫ��
		printf("name = ");
		scanf_s("%s", pArr[i].name,100);//����Ҫ��ȡ��ַ������Ϊname����������������Ѿ���������Ԫ�صĵ�ַ
		printf("score = ");
		scanf_s("%f", &pArr[i].score);
	}
	
	//��ѧ���ɼ��������� ð���㷨
	for (i = 0; i < len - 1; ++i)
	{
		for (j = 0; j < len - 1 - i; ++j)
		{
			//���j�ĳɼ�����j+1�ĳɼ� �ͻ������������λ�� �����ǻ����ɼ���λ��
			if (pArr[j].score < pArr[j + 1].score)
			{
				t = pArr[j];
				pArr[j] = pArr[j + 1];
				pArr[j + 1] = t;
			}
		}
	}

	printf("\n\nѧ������Ϣ��\n");
	//���
	for (i = 0; i < len; ++i)
	{
		printf("��%d��ѧ������Ϣ��:", i + 1);
		printf("age = %d\n", pArr[i].age);
		printf("name = %s\n", pArr[i].name);
		printf("score = %f\n", pArr[i].score);

		printf("\n");
	}
	return 0;
}