#include<iostream>
using namespace std;

int main ()
{ 
    //simple taking input from user 
    /*
    int x;
    cout<<"enter no of apple"<<endl;
    cin>>x;
    cout<<"no of apple is "<<x<<endl;
    */

   // swap  the two value 
     int a,b,c;
     cout<<"enter value of a"<<endl;
     cin>>a;
      cout<<"enter value of b"<<endl;
      cin>> b;
     cout<<"value of a is before swapping  "<<a<<endl;
     cout<<"value of b is before swapping  "<<b<<endl;
     c=b;
     b=a;
     a=c;
     cout<<"value of a is after swapping  "<<a<<endl;
     cout<<"value of b is after swapping  "<<b<<endl;
    return 0; 


}  