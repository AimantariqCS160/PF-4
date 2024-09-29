#include<iostream>
using namespace std;
void eligibility(int age);
main()
{
 	int age;
	cout<<"Enter your age: ";
	cin >> age;
	eligibility(age);
} 

void eligibility(int age)
{
	if(age>=18)
        cout<<"You are eligible to vote.";
        else
        cout<<"You are not eligible to vote.";
}	