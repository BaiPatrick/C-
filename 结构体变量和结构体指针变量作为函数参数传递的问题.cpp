/*
时间：2022/2/6 20：00
目的：通过函数完成结构体变量的输入和输出
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

	Inputstudent(&st);//对结构体变量输入  必须发送st的地址 
	//printf("%d %c %s\n", st.age, st.sex, st.name);
	Outputstudent(&st);//对结构体变量输出 对结构体变量输出可以发送结构体变量的地址也可以直接发送结构体变量的内容
					//为了减少内存的耗费和提高执行速度 推荐发送地址

	return 0;
}

void Outputstudent(struct student *pst)
//修改ss不会影响st 修改st不会影响ss 但是现在把st的值赋给了ss 所以输出结果一样
//但是ss和st是两个不同的变量，各自指向了自己的内存地址，所以改变ss的值并不能改变st的值
{
	printf("%d %c %s\n", pst->age, pst->sex, pst->name);
}


void Inputstudent(struct student* pstu)//pstu只占4个字节
{
	(*pstu).age = 10;
	strcpy_s(pstu->name, "张三");
	pstu->sex = 'F';
}


/*本函数无法更改主函数st的值 因为本函数是错误的*/
/*void inputstudent(struct student stu)
{
	stu.age = 10;
	strcpy_s(stu.name, "张三");
	stu.sex = 'F';
}
*/
/*
	总结：
		输入输出：
			Input结构体名：对结构体变量输入
			Output结构体名：对结构体变量输出
			对结构体变量输入必须发送结构体变量的地址
			对结构体变量输出可以发送结构体变量的地址也可以直接发送结构体变量的内容
			为了减少内存的耗费和提高执行速度 推荐发送地址
	思考：
		发送地址还是发送内容？
			指针的优点：
				快速的传递数据
				耗用内存小
				执行速度快
*/