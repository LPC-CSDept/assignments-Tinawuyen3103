#include <iostream>
using namespace std;

int main()
{
int num1,num2,num3;
  cout<<"enter three number"<<endl;
  cin>>num1>>num2>>num3;

  if(num1>num2&&num1>num3)
    cout<<"maximum is "<<num1<<endl;

  else if (num2>num1&&num2>num3)
    cout<<"maximum is "<<num2<<endl;

  else 
   cout<<"maximum is "<<num3<<endl;


if(num1<num2&&num1<num3)
  cout<<"minimum is "<<num1<<endl;

  else if(num2<num1&&num2<num3)
     cout<<"minimum is "<<num2<<endl;

  else
     cout<<"minimum is "<<num3<<endl;


  return 0;
}