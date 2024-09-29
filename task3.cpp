#include<iostream>
using namespace std;
void howManystickers(int sides);
main()
{
 int sides;
cout<<"Enter the side length of Rubik's cube: ";
cin >> sides;
howManystickers(sides);
}
void howManystickers(int sides)
{
int stickers;
stickers=(6*sides)*sides;
cout<<"Number of stickers needed: " <<stickers;
}