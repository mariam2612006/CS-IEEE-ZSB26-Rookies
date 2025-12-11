#include <iostream>
using namespace std;

int main() {
    string s;
    cin >> s;

    bool allu = true;
    bool exceptfirstupper = true;

    for (int i = 0; i<s.size(); i++) {
        if (s[i] >= 'a' && s[i] <= 'z')
            allu = false;
        if (i > 0 && s[i] >= 'a' && s[i] <= 'z')
            exceptfirstupper = false;
    }

    if (allu||exceptfirstupper) {
        for (int i=0; i<s.size(); i++) {
            if (s[i] >= 'a'&&s[i] <= 'z')
                s[i] -= 32;
            else
                s[i] += 32;
        }
    }

    cout << s;
    return 0;
}
