#include<iostream>
using namespace std;
int main ()
{
    // int marks;
    // cout<<"enter the marks ";
    // cin>>marks;

    // if(marks>80)
    // {
    //     cout<<"your gread is A";
    // }  
    // else if( marks>60)
    // {
    //     cout<<" your gread is B";
    // }
    // else if (marks>40)
    // {
    //     cout<<"your gread is C";
    // }
    // else 
    // {
    //     cout<<"your gread is F";
    // }

    // int age;
    // cout<<"enter age";
    // cin>>age;

    // if(age<12)
    // {
    //     cout<<"Child";
    // }
    // else if(age>=12 && age<=18)
    // {
    //     cout<<"Teenager";
    // }
    // else 
    // {
    //     cout<<"Adult";
    // }

    // NESTED IF ELSE
    int marks;
    cout<<"enter the marks ";
    cin>>marks;

    if(marks>40) 
    {
        if(marks>80)
        {
            cout<<" Pass with Destinction ";
        }
        else
        {
            cout<<"Pass";
        }
    }
    else
    {
        cout<<"Fail";
    }
    return 0;
}
