#include<iostream>
using namespace std;
main()
{
    int no;
    cout<<"enter no of rows:";
    cin>>no;
    for(int i=1;i<=no;i++)
    {
        for(int j=1;j<=i;j++)
        {
            cout<<"*";
        }
        cout << endl;
    }
}