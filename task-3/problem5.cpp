#include<iostream>
using namespace std;
int main()
{
    int a;
    int b;
    cin>>a;
    cin>>b;
    int small=(a<b)?a:b;
    int times = (a < b) ? b : a;
   for (int i = 0; i < times; i++) {
        cout << small;
    }
    cout<<endl;
}