#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    string s;
    cin >> s;

    bool se[26] = {0};

    for(int i = 0; i < n; i++) {
        char c = s[i];
        if(c >= 'A' && c <= 'Z') c = c - 'A' + 'a';
        se[c - 'a'] = true;
    }

    bool pangram = true;
    for(int i = 0; i < 26; i++) {
        if(!se[i]) {
            pangram = false;
            break;
        }
    }

    if(pangram)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;

    return 0;
}
