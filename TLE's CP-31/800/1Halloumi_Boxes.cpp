#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n, k;
    cin >> n >> k;
    vector<int> v(n);

    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }

    if (k > 1)
    {
        cout << "YES" << endl;
        return;
    }
    else if (n > 1)
    {
        if(is_sorted(v.begin(), v.end()))
        {
        	cout<<"YES"<<endl;
        }
        else
        {
        	cout<<"NO"<<endl;
        }
    }
    else
    {
        cout << "YES" << endl;
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }

    return 0;
}
