#include <iostream>
#include <string>
#include <limits>

using namespace std;

#define LENGTH 10 

//variable type def 
typedef int feet;
feet distance;//equals to int distance


//function declarrations, which is def later.
int func();//int since the output is the int type.
enum color {red, green, blue=5, black} last;

// variable  declarations
extern int a, b;//the extern variable can be utilized out of the program.
extern char c;
extern float f;

/*this is annotation
even you change a row, ti still remain as annotation.
*/

int main()//main() begin
{
	//variable define
	int a = 5 , b;
	char c;
	float f;
	//output
	cout << "\"Hello\t\nWorld!\"\n" << endl; 
	//output the word and then change a row
	// it should be remanded that the /n/t can be used in "".
	cout << red << endl;
	//invoking function
	b = func();
	cout << b << endl;

	return 0;
}


//function defination
int func()
{
	return true;//0 is the result of the output of function.
	//there is no input and only one output.
	//return can be any type like int,char,etc. 
}