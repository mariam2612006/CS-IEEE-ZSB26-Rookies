#include<iostream>
using namespace std;
int main()
{
    long long n;
    int k;
    int c=0;
    cin>>n;
    cin>>k;
   if(n==0)
   {
    c=1;
   }
   else
   {
    while (n>0)
    {
       n=n/k;
       c++;
    }
    
   }
    
cout<<c<<endl;
}