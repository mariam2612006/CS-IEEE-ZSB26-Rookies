#include<iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int count=0;
        for(int cw=0;cw*4<=n;cw++)
        {
            int re=n-cw*4;
            if(re%2==0)
            {
                count++;

            }
        }
        cout<<count<<endl;
    }
}