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
        map<int, int>cnt;
        for (int i = 0;i < n;i++)

        {
            cnt[a[i]]++;
        }
        int ans = 0;
        for (auto [length, freq] : cnt) {
            if (freq >= 3) {
                ans += freq / 3;
            }
        }
        cout << ans << endl;
    }
    return 0;

}