#include<iostream>
using namespace std;
void oppositetriangle(int no);
main()
{
    int no;
    cout<<"enter no of rows";
    cin>>no;
     for(int i=1;i<=no/2;i++)
    {
        for(int j=1;j<i;j++)
        {
            cout<<"*";
        }
        for(int k=i;k<=no/2;k++)
        {
            cout<<" ";
        }
        cout << endl;
    }
    oppositetriangle( no);
} 
void oppositetriangle(int no)
{
     for(int i=1;i<=no/2;i++)
    {
        for(int j=i;j<no/2;j++)//space
        {
            cout<<" ";
        }
        for(int k=1;k<=i;k++)
        {
            cout<<"*";
        }
        cout << endl;
    }
}