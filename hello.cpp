#include<iostream>

using namespace std;


int main()
{
  //int a=23, b=45, c=1333;
  //cout<<"The value of a is: "<<a<<endl;
  //cout<<"The value of b is: "<<b<<endl;
  //cout<<"The value of c is: "<<c<<endl;

  //cout<<"The value of a is: "<<setw(4)<<a<<endl;
  //cout<<"The value of b is: "<<setw(4)<<b<<endl;
  //cout<<"The value of c is: "<<setw(4)<<c<<endl;
  int age;
  cout<<"Enter your age "<<endl;
  cin>>age;
switch (age)
{
case 18:
  
  cout<<"You are 18 "<<endl;
  //break;
case 22:
  
  cout<<"You are 22 "<<endl;
  //break;
case 2:
  
  cout<<"You are 2 "<<endl;
  //break;

default:
cout<<"No special cases "<<endl;
  break;
}
}
