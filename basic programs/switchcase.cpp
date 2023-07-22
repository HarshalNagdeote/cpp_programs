#include<iostream>
using namespace std;
int main()
{
    // int day;
    // cout<<"enter day no.";
    // cin>>day;

    // switch(day)
    // {
    //     case 1:
    //     cout<<"monday"<<endl;
    //     break;

    //     case 2:
    //     cout<<"tuesday"<<endl;
    //     break;

    //     case 3:
    //     cout<<"wednesday"<<endl;
    //     break;

    //     case 4:
    //     cout<<"thusday"<<endl;
    //     break;

    //     case 5:
    //     cout<<"friday"<<endl;
    //     break;

    //     case 6:
    //     cout<<"saturday"<<endl;
    //     break;

    //     case 7:
    //     cout<<"sunday"<<endl;
    //     break;

    //     default:
    //     cout<<"invalid day"<<endl;
    // }
    
    char charecter;
    cout<<"enter alphabets ";
    cin>>charecter;

    switch(charecter)
    {
        case 'a':
        cout<<"vovels";
        break;

        case 'e':
        cout<<"vovels";
        break;

        case 'i':
        cout<<"vovels";
        break;

        case 'o':
        cout<<"vovels";
        break;

        case 'u':
        cout<<"vovels";
        break;

        default:
        cout<<"consonant";
    }
    return 0;
}