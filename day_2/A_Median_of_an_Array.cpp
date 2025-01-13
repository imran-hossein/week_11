#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> v(n);
        for (int i = 0;i < n;i++)
        {
            cin >> v[i];
        }
        sort(v.begin(), v.end());
        int mid = (((n + 1) / 2) - 1);
        int count = 0;
        for (int i = mid;i < n;i++)
        {
            if (v[i] == v[mid])
            {
                count++;
            }
        }
        cout << count << endl;

    }
    return 0;
}