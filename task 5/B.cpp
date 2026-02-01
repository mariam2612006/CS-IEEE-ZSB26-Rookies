#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;
  while (t--) {
        long long n;
        cin >> n;

        long long a = 0, b = 0, c = 0;

       for (long long i = 2; i * i <= n; i++) {
            if (n % i == 0) {
                a = i;
                break;
            }
        }

        if (a == 0) {
            cout << "NO\n"; 
            continue;
        }
         long long remaining = n / a;

        
        for (long long i = a + 1; i * i <= remaining; i++) {
            if (remaining % i == 0) {
                b = i;
                break;
            }
        }

        if (b == 0) {
            if (remaining != a && remaining >= 2) b = remaining;
        }
   c = n / (a * b);

        if (a >= 2 && b >= 2 && c >= 2 && a != b && b != c && a != c) {
            cout << "YES\n";
            cout << a << " " << b << " " << c << "\n";
        } else {
            cout << "NO\n";
        }
     
       

       
    }
  

    return 0;
}