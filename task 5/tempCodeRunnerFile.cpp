#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    long long x;
    cin>>x;
    int a=1,b=x;
    for(long long i=1;i*i<=x;i++)
    {
        if(x%i==0)
        {
            long long j=x/i;
            long long current_max=max(i,j);

            if ( current_max< max(a,b))
            {
                a=i;
                b=j;
            }
        }
    }
    cout<<a<<" "<<b<<endl;
}