#include <iostream>
using namespace std;

int main()
{
	int var1;
	char var2[10];

	cout << "the momery adress of var1 is " ;
	cout << &var1 << endl;

	cout << "the momery adress of var2 is ";
	cout << &var2 << endl;

/*
int    *ip;    һ�����͵�ָ�� 
double *dp;    һ�� double �͵�ָ��
float  *fp;    һ�������͵�ָ��
char   *ch;    һ���ַ��͵�ָ��
*/

	int var = 20;
	int *ip;

	ip = &var;//set the ip as a pointer of variable of var;
	//ip equals the adress ; *ip is the value of the variable

	cout << "Value of the var variable is ";
	cout << var << endl;

	cout << "Value of the *p variable is ";
	cout << *ip << endl;//the value of the pointer,
	cout << ip << endl;//th momery adress of the ip

	return 0;




}