#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int n;cin >> n;
    vector<int> a(n);
    for (int i = 0;i < n; i++)
    {
        cin >> a[i];
    }

    int count = 0, mx = 0;
    for (int i = 0;i < 2 * n;i++)
    {
        while (a[i % n] == 1)
        {
            count++;
            i++;
        }
        mx = max(count, mx);
        count = 0;
    }
    cout << mx << endl;
    return 0;
}