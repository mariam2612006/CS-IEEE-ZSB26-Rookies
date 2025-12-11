#include <iostream>

using namespace std;

int main()
{
   int r[5][5];
   int m,c;
   for(int i=0;i<5;i++)
   {
       for(int j=0;j<5;j++)
       {
           cin>>r[i][j];
           if(r[i][j]==1)
           {
               m=i;
               c=j;
           }
       }
   }
   int moves=abs(m-2)+abs(c-2);
   cout<<moves<<endl;
    return 0;
}
