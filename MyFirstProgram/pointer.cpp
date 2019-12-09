#include <iostream>
using namespace std;

int main()
{
	int i;
	double d;


	//define variables
	int& r = i;
	double& s = d;
	int* j = &i;

	i = 5;
	r = 6;
	cout << "Value of d :" << i << endl;
	cout << "Value of d referance :" << r << endl;

	d = 11.7;
	cout << "Value of d" << d << endl;
	cout << "Value of d referance :" << s << endl;
	

	return 0;




}