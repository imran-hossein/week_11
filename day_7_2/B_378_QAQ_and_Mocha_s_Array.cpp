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
        vector<int>a(n);
        for (int i = 0;i < n;i++)
        {
            cin >> a[i];
        }

        sort(a.begin(), a.end());
        vector<int>v;
        for (int i = 0;i < n;i++)
        {
            if (a[i] % a[0])
            {
                v.push_back(a[i]);
            }
        }
        bool ok = 1;
        for (int i = 0;i < v.size();i++)
        {
            if (v[i] % v[0])
            {
                ok = 0;
                break;
            }
        }
        if (ok) cout << "Yes" << endl;
        else cout << "No" << endl;

    }
    return 0;
}