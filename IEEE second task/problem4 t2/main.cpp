#include <iostream>

using namespace std;

int main()
{
   int n;
   cin>>n;
   int m;
   while(n--)
   {
       int c;
       cin>>c;
       int arr[110];
       for(int i=0;i<c;i++)
       {
           cin>>arr[i];
       }
       if(arr[0]==arr[1]||arr[0]==arr[2])
           {
               m=arr[0];

           }
           else
           {
               m=arr[1];
           }
       for(int i=0;i<c;i++)
       {
           if(arr[i]!=m)
           {
               cout<<i+1<<endl;
               break;
           }
       }


   }
    return 0;
}
