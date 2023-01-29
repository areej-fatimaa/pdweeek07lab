#include<iostream>
using namespace std;
main()
{
int number;
int currentcargo;
int ton1=0,ton2=0,ton3=0;
float sumofcargo=0;
float avgprice=0,perbyminibus=0,perbytruck=0,perbytrain=0;

cout<<"count of cargo:";
cin>>number;
for(int i=1;i<=number;i++)
{
    cin>>currentcargo;
    cout<<endl;
    if((currentcargo>=1)&&(currentcargo<=3))
    {
        ton1=ton1+currentcargo;
    }
    if((currentcargo>3)&&(currentcargo<=11))
    {
        ton2=ton2+currentcargo;
    }
    if(currentcargo>11)
    {
        ton3=ton3+currentcargo;
    }
}
    sumofcargo=ton1+ton2+ton3;
    avgprice=(ton1*200+ton2*175+ton3*120)/sumofcargo;
    cout<<avgprice<<endl;
    perbyminibus=(ton1/sumofcargo)*100;
    perbytruck=(ton2/sumofcargo)*100;
    perbytrain=(ton3/sumofcargo)*100;
    cout<<perbyminibus<<"%"<<endl<<perbytruck<<"%"<<endl<<perbytrain<<"%";
} 