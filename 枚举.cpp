#include <stdio.h>


//只定义了一个数据类型， 并没有定义变量，该数据类型的名字是 enum weekday
enum weekday
{
	monday, tuesday, wednesday, thursday, friday, saturday, sunday
};

int main(void)
{
	//int day; day定义成int类型不合适
	enum weekday day = tuesday;
	printf("%d\n", day);

	return 0;
}