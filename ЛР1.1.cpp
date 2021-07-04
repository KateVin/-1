/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;

int main()
{
   int a[10];
   int i;
   for(i=0;i<10;i++)
   {
       cout<<"введите а["<<i<<"]";
       cin>>a[i];
       
   }
   for(i=0;i<10;i++)
   {
       if(a[i]%2==0)
       {
           a[i]=0;
           
       }
       
   }
   for(i=0;i<10;i++)
   {
       cout<<a[i]<<" ";
       
   }
   return 0;
}
