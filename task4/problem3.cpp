#include<iostream>
#include <vector>
#include <climits>
#include <cmath>
using namespace std;
int main()
{
  int n;
cin >> n;
vector<long long> a(n);
for (int i = 0; i < n; i++) 
cin >> a[i];
long long total = 0;
for (int i = 0; i < n; i++) {
    total += a[i];
}
long long ans = LLONG_MAX;
for (int mask = 0; mask < (1 << n); mask++)
{
    long long sum = 0;
    for (int i = 0; i < n; i++) {
    if (mask & (1 << i)) {
        sum += a[i];
    }
}
long long other = total - sum;
long long diff = llabs(sum - other);
if (diff < ans) {
    ans = diff;
}

}
 cout << ans << endl;

}