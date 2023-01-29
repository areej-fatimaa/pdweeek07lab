#include<iostream>
using namespace std;
int triangle(int num);
main()
{
  int num;
  int result;
  cout<<"enter triangle number:";
  cin>>num;
  result=triangle(num);
  cout<<result;
}
int triangle(int num)
{
  int tri=0,count;
  for(int i=1;i<=num;i++)
  {
    count=i;
  tri=tri+count;
  }
  return tri;
}