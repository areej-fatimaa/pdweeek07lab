#include<iostream>
using namespace std;
main()
{
    int numbers,no;
    float p1=0,p2=0,p3=0;
    int count1=0,count2=0,count3=0;
    cout<<"enter count of integers:";
    cin>>numbers;
    for(int i=1;i<=numbers;i++)
    {
        cin>>no;
        if(no%2==0)
        {
            count1=count1+1;
        }
        if(no%3==0)
        {
            count2=count2+1;
        }
        if(no%4==0)
        {
            count3=count3+1;
        }
    }
    p1=(count1/10.0)*100.0;
    p2=(count2/10.0)*100.0;
    p3=(count3/10.0)*100.0;
    cout<<p1<<"%"<<endl<<p2"%"<<endl<<p3"%"<<endl;

}