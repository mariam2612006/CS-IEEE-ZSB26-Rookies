#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;

        string s, u;
        cin >> s >> u;

        int counts[26] = {0};
        int countu[26] = {0};

        for (int i = 0; i < n; i++)
        {
            counts[s[i] - 'a']++;
            countu[u[i] - 'a']++;
        }

        bool c = true;

        for (int i = 0; i < 26; i++)
        {
            if (counts[i] != countu[i])
            {
                c = false;
                break;
            }
        }

        if (c)
            cout << "YES\n";
        else
            cout << "NO\n";
    }

    return 0;
}
