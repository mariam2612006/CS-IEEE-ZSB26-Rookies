#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main()
{
    string s;
    cin>>s;
    sort(s.begin(),s.end());
    int k=0;
    do
    {
        k++;
    } while (next_permutation(s.begin(),s.end()));
    cout<<k<<endl;
    sort(s.begin(), s.end());
do {
    cout << s << endl;
} while (next_permutation(s.begin(), s.end()));
    
}