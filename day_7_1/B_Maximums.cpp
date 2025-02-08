#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n;cin >> n;
    vector<int> a(n), b(n), x(n);
    for (int i = 0;i < n;i++)
    {
        cin >> b[i];
    }
    x[0] = 0;
    a[0] = b[0] + x[0];
    for (int i = 1;i < n;i++)
    {
        x[i] = max(x[i - 1], a[i - 1]);
        a[i] = b[i] + x[i];
    }
    for (int i = 0;i < n;i++)
    {
        cout << a[i] << " ";
    }
    cout << endl;
    return 0;
}