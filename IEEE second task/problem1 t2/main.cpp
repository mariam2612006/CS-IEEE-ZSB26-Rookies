#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        string s;
        cin >> s;

        bool seen[26] = {0};
        int distinct = 0;

        for (int i = 0; i < n; i++) {
            int x = s[i] - 'A';
            if (seen[x] == 0) {
                seen[x] = 1;
                distinct++;
            }
        }

        cout << n + distinct << endl;
    }

    return 0;
}
