#include<iostream>
#include<cmath>
using namespace std;
int main()
{
  /*Building a normal calculetor*/
  double num1;
  double num2;
  char op;
  double answer;
  cout<<"Enter first number: "<<endl;
  cin>>num1;
  cout<<"Enter second number: "<<endl;
  cin>>num2;
  cout<<"Enter oparetor: "<<endl;
  cin>>op;
  if (op=='+')
  {
    answer=num1+num2;
    cout<<"Asnwer: "<<answer<<endl;
  }
  else if(op=='-')
  {
    answer=num1-num2;
    cout<<"Answer: "<<answer<<endl;
  }
  else if(op=='*')
  {
    answer=num1*num2;
    cout<<"Answer: "<<answer<<endl;
  }
  else if(op=='/')
  {
    answer=num1/num2;
    cout<<"Answer: "<<answer<<endl;
  }
  return 0;
}
