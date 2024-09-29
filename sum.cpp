#include<iostream>
using namespace std;
void opp(float num1,float num2,char op);
main()
{
	float num1,num2;
	char op;
	cout<<"Enter Number1: ";
	cin >> num1;
	cout << "Enter Number2: ";
	cin >> num2;
	cout<<"Enter operatior(+,-,*,/): ";
	cin >> op;
	opp(num1,num2,op);
}
void opp(float num1,float num2,char op)
{
	float sum;
	if(op=='+')
	{
 		sum=num1+num2;
 		cout<<"Sum: " <<sum;
	}
}
	