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
	float sum,multiply,sub,divs;
	if(op=='+')
	{
 		sum=num1+num2;
 		cout<<"Sum: " <<sum;
	}
	else if(op=='-')
	{
	sub=num1-num2;
	cout<<"Sub: "  <<sub;
	}
	else if(op=='*')
	{
	multiply=num1*num2;
	cout<<"Multiply: " << multiply;
	}
	else if(op=='/')
	{
	divs=num1/num2;
	cout<<"Division: " << divs;
	}
	else
	cout<<"Invalid operator";
	}
