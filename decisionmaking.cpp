#include<iostream>
using namespace std;
int main()
{
    /*
    DECISION MAKING 

    Relational Operator 
    . > greater than 
    . < less than
    . >= greater than or equal to
    . <= less than or equal to

    Eqality operator
    . == eqqal to
    . != not equal to 
      */
    int num1;
    int num2;
    cout<<"Enter the  number which you want to compare"<<endl;
    cin >> num1>> num2 ;
    if (num1==num2)
    {
        cout<<num1<<"="<<num2<<endl;
    }
    if (num1>num2)
    {
        cout<<num1<<">"<<num2<<endl;
    }
    if (num1<num2)
    {
        cout<<num1<<"<"<<num2<<endl;
    }
    if (num1>=num2)
    {
        cout<<num1<<">="<<num2<<endl;
    }
    if (num1<=num2)
    {
        cout<<num1<<"<="<<num2<<endl;
    }
    if (num1!=num2)
    {
        cout<<num1<<"!="<<num2<<endl;
    }
    return 0;
}