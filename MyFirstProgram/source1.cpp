#include <iostream>
using namespace std;
// 函数声明 


void func(void);

static int count1 = 10; /* 全局变量 */

int main()
{
	while (count1--)
	{
		func();
	}
	return 0;

}
// 函数定义
void func(void)
{
	static int i = 5; // 局部静态变量,一旦赋值后，赋值语句不在执行
	i++;
	cout << "变量 i 为 " << i;
	cout << " , 变量 count 为 " << count1 << endl;
}