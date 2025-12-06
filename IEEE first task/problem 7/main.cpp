#include <iostream>

using namespace std;

int main()
{
   int k,r;
   cin>>k>>r;
   for(int i=1;i<=10;i++)
   {
       int total=i*k;
       int l=total%10;
       if(l==0||l==r)
       {
           cout<<i<<endl;
             return 0;

       }
   }

    return 0;
}
