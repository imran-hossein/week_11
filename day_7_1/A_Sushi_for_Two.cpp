#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int n;cin >> n;
    vector<int>t(n);
    for (int i = 0;i < n;i++)
    {
        cin >> t[i];
    }

    vector<int>group;
    int count = 1;
    for (int i = 1;i < n;i++)
    {
        if (t[i] == t[i - 1])
        {
            count++;
        }
        else {
            group.push_back(count);
            count = 1;
        }
    }
    group.push_back(count);

    int maxGroup = 0;
    for (int i = 1;i < group.size();i++)
    {
        maxGroup = max(maxGroup, 2 * min(group[i - 1], group[i]));
    }
    cout << maxGroup << endl;


    return 0;
}