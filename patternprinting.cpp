#include<iostream>
using namespace std;
int main()
{
//    for(int i=1;i<=3;i++){
//     for(int j=1;j<=6;j++){
//         cout<<"*";
//     }
//     cout<<endl;
//    } 
 
 //HOLLOW RECTANGLE

// int n,m;
// cout<<"enter row value:";
// cin>>n;
// cout<<"enter column value:";
// cin>>m;

// for(int i=1;i<=n;i++){
//     for(int j=1;j<=m;j++){
//         if(i==1 || j==1 || i==n || j==m)
//         cout<<"#";
//         else{
//             cout<<" ";
//         }
//     }
//     cout<<endl;
// }

int n;
cout<<"enter value of n:";
cin>>n;
for(int i=1;i<=n;i++){
    for(int j=1;j<=i;j++){
        cout<<"$";
    }
    cout<<endl;
}
    return 0;
}