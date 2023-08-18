#include<iostream>
using namespace std;
 int main()
 {
    // int i=0;
    // while(i<5)
    // {
    //     cout<<i<<endl;
    //     i++;
    // }
    int n;
    cout<<"enter no. ";
    cin>>n;

    int sum=0;
    int i=1;

    while(i<=n)
    {
        sum=sum+i;
        i++;
    }
    cout<<sum<<endl;
    return 0;
 }