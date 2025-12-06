#include <iostream>
using namespace std;

int main() {
    string s = "codeforces";
    int t;
    cin >> t;

    while(t--) {
        char c;
        cin >> c;

        bool k = false;

        for(char ch : s) {
            if(ch == c) {
                k = true;
                break;
            }
        }

        if(k) {
            cout << "YES\n";
        } else {
            cout << "NO\n";
        }
    }

    return 0;
}
