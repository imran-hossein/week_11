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
        vector<int> a(n);
        for (int i = 0;i < n;i++)
        {
            cin >> a[i];
        }

        vector<int> sortedA = a;
        sort(sortedA.begin(), sortedA.end());
        vector<int> doubleA = a;
        doubleA.insert(doubleA.end(), a.begin(), a.end());

        bool isPossible = false;
        for (int i = 0;i < n;i++)
        {
            if (equal(doubleA.begin() + i, doubleA.begin() + i + n, sortedA.begin()))
            {
                isPossible = true;
                break;
            }

        }
        if (isPossible) cout << "Yes" << endl;
        else cout << "No" << endl;
    }
    return 0;
}