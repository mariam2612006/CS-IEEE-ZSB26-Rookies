#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int x[n];
    int c[n]={0};
    for(int i=0;i<n;i++)
    {
        cin>>x[i];
     for(int j=1;j*j<=x[i];j++)
        if(x[i]%j==0)
        {
            if(j*j==x[i])
            {
                  c[i]++; 
            }
            else
            {
                c[i]+=2;
            }
        }
     
    }
    for(int i=0;i<n;i++)
    {
      cout<<c[i]<<endl;
    }
}