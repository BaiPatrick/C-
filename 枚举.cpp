#include <stdio.h>


//ֻ������һ���������ͣ� ��û�ж�����������������͵������� enum weekday
enum weekday
{
	monday, tuesday, wednesday, thursday, friday, saturday, sunday
};

int main(void)
{
	//int day; day�����int���Ͳ�����
	enum weekday day = tuesday;
	printf("%d\n", day);

	return 0;
}