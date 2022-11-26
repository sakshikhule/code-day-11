#include<iostream>
using namespace std;
main()
{
   int a=0,b=1,c=0,n;
   cout<<"enter any no. = ";
   cin>>n;
   //cout<<"enter value of a and b = ";
   //cin>>a>>b;
   for(int i=1;i<=n;i++)
   {

      cout<<c<<" ";
      a = b;
      b = c;
      c = a+b;
   }

}
