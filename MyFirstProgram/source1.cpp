#include <iostream>
using namespace std;
// �������� 


void func(void);

static int count1 = 10; /* ȫ�ֱ��� */

int main()
{
	while (count1--)
	{
		func();
	}
	return 0;

}
// ��������
void func(void)
{
	static int i = 5; // �ֲ���̬����,һ����ֵ�󣬸�ֵ��䲻��ִ��
	i++;
	cout << "���� i Ϊ " << i;
	cout << " , ���� count Ϊ " << count1 << endl;
}