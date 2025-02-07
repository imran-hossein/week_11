#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int n;cin >> n;
    vector<int>a(n);
    vector<int>odd, even;
    for (int i = 0;i < n;i++)
    {
        cin >> a[i];
        if (a[i] % 2 == 0) even.push_back(a[i]);
        else odd.push_back(a[i]);
    }
    sort(odd.begin(), odd.end());
    sort(even.begin(), even.end());
    if (odd.size() >= even.size())
    {
        while (!odd.empty())
        {
            odd.pop_back();
            if (even.size() == 0) break;
            even.pop_back();

        }
    }
    else
    {
        while (!even.empty())
        {
            even.pop_back();
            if (odd.size() == 0) break;
            odd.pop_back();
        }
    }
    long long int ans = 0;

    for (int i = 0;i < odd.size();i++)
    {
        ans += odd[i];
    }

    for (int i = 0;i < even.size();i++)
    {
        ans += even[i];
    }


    cout << ans << endl;


    return 0;
}