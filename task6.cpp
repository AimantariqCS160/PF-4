#include<iostream>
using namespace std;
void result(int score);
main()
{
	int score;
	cout<<"Enter your score: ";
	cin>>score;
	result(score);
}
void result(int score)
{
	if(score>50)
	cout<<"Pass";
	else
	cout<<"Fail";
}