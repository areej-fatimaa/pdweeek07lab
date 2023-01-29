#include<iostream>
using namespace std;
void amplify(int num);
main()
{
    int num;
    cout<<"enter number";
    cin>>num;
    amplify(num);
}
void amplify(int num)
{
    int amp;
    for(int i=1;i<=num;i++)
    {
        if(i%4==0)
        {
            amp=i*10;
            cout<<amp<<",";
        }
        else if(i%4!=0)
        {
            amp=i;
           cout<<amp<<",";
        }
    }
}