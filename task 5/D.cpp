#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    long long X;
    cin >> X;

    long long best_a = 1, best_b = X;
    long long best_max = X;

    for (long long i = 1; i * i <= X; i++) {
        if (X % i == 0) {
            long long j = X / i;

            
            long long g = __gcd(i,j);
            long long lcm = i * j / g;

            if (lcm == X) {
                long long current_max = max(i,j);
                if (current_max < best_max) {
                    best_a = i;
                    best_b = j;
                    best_max = current_max;
                }
            }
        }
    }

    cout << best_a << " " << best_b << endl;
    return 0;
}