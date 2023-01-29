#include<iostream>
using namespace std;
main()
{
   int period;
   cout<<"enter period";
   cin>>period;
   int treated=0;
   int untreated=0;
   int doc=7;
   int patient;
   for(int day=1;day<=period;day++)
   {
      cin>>patient;
      cout<<endl; 
       if((day%3!=0)&&(patient<=7))
       {
         treated=treated+patient;
         untreated=patient-doc;
       }
       if((day%3!=0)&&(patient>7))
       {
         untreated=patient-doc;
         treated=patient-untreated;
        if((day%3==0)&&(untreated>treated))
        {
         doc++;
         untreated=untreated+(patient-doc);
         treated=treated+(patient-untreated);
        }
       }
   }
            cout<<"treated:"<<treated<<endl;
            cout<<"untreated:"<<untreated;
} 
  