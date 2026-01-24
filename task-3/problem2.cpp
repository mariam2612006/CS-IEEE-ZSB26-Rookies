#include <iostream>
using namespace std;

int main() {
    int n, k;
    cin >> n;
    cin>>k;
    int r[205];
    for (int i = 0; i < 2*n+1; i++)
        {
            cin >> r[i];
        }
           for (int i = 1; i < 2*n && k > 0; i += 2) {
        if (r[i]-1 > r[i-1] && r[i]-1 > r[i+1]) {
            r[i]--;
            k--;
        }}
           for (int i = 0; i < 2*n+1; i++)
        cout << r[i] << " ";
    
     
      
}
