#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t;cin >> t;
    while (t--)
    {
        int n;cin >> n;
        int count = 0;
        string s;
        cin >> s;
        for (int i = 0;i < n;i++)
        {
            if (s[i] == '+') count++;
            else count--;
        }
        cout << abs(count) << endl;
    }
    return 0;
}