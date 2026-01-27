#include<iostream>
#include<cmath>
#include <iomanip>
using namespace std;
int main()
{
    string s1,s2;
    cin>>s1;
    cin>>s2;
    long long t=0,cu=0; 
    int q=0;
    for(char c:s1)
    {
        t+=(c=='+')?1:-1;
    }
    for(char c:s2)
    {
        if(c=='+')
        {
            cu++;
        }
        else if(c=='-')
        {
            cu--;
        }
        else
        {
            q++;
        }
    }
int ok=0;
int total=1<<q;
for (int mask = 0; mask < total; mask++)
{
    int pos =cu;
    for(int i=0;i<q;i++)
    {
        pos+=(mask & (1<<i))?1:-1;
    }
    if (pos==t) ok++;

}

cout << fixed << setprecision(12) << (double)ok / total << endl;

}