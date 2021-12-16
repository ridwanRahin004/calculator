#include<iostream>
#include<cmath>
using namespace std;
double num1,num2,answer;
char op;
int cont_or_exit;
double pl();
double min();
double as();
double by();
int main()
{
    cout<<"Enter first number: "<<endl;
    cin>>num1;
    cout<<"Enter oparetor: "<<endl;
    cin>>op;
    cout<<"Enter second number: "<<endl;
    cin>>num2;
    if(op=='+')
    {
        pl();
    }
    else if(op=='-')
    {
        min();
    }
    else if(op='*')
    {
        as();
    }
    else if(op=='/')
    {
        by();
    }
    else{
        cout<<"\n#Try again"<<endl;
        cout<<"[1] try again"<<endl;
        cout<<"[0] exit"<<endl;
        cin>>cont_or_exit;
        if(cont_or_exit==1)
        {
            main();
        }
        else if(cont_or_exit==0)
        {
            cout<<"\n\n\t#BYE!"<<endl;
        }
    }
    return 0;
}
double pl(){
    answer=num1+num2;
    cout<<"Answer: "<<answer<<endl;
    cout<<"\n"<<endl;
    cout<<"[1] try again"<<endl;
    cout<<"[0] exit"<<endl;
    cin>>cont_or_exit;
    if(cont_or_exit==1)
    {
        main();
    }
    else if(cont_or_exit==0)
    {
        cout<<"\n\n\t#BYE!"<<endl;
    }
}
double min(){
    answer=num1-num2;
    cout<<"Answer: "<<answer<<endl;
    cout<<"\n"<<endl;
    cout<<"[1] try again"<<endl;
    cout<<"[0] exit"<<endl;
    cin>>cont_or_exit;
    if(cont_or_exit==1)
    {
        main();
    }
    else if(cont_or_exit==0)
    {
        cout<<"\n\n\t#BYE!"<<endl;
    }
}
double as(){
    answer=num1*num2;
    cout<<"Answer: "<<answer<<endl;
    cout<<"\n"<<endl;
    cout<<"[1] try again"<<endl;
    cout<<"[0] exit"<<endl;
    cin>>cont_or_exit;
    if(cont_or_exit==1)
    {
        main();
    }
    else if(cont_or_exit==0)
    {
        cout<<"\n\n\t#BYE!"<<endl;
    }
}
double by(){
    answer=num1/num2;
    cout<<"Answer: "<<answer<<endl;
    cout<<"\n"<<endl;
    cout<<"[1] try again"<<endl;
    cout<<"[0] exit"<<endl;
    cin>>cont_or_exit;
    if(cont_or_exit==1)
    {
        main();
    }
    else if(cont_or_exit==0)
    {
        cout<<"\n\n\t#BYE!"<<endl;
    }
}
