#include <bits/stdc++.h>
using namespace std;

#define ll long long

void solve() 
{
    int n; cin >> n;

    vector<int> v(n);
    for(int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    
    int ans = 0;
    for(int i = 0; i < n - 1; i++)
    {
        if(v[i] >= v[i + 1])
        {   
        	if(v[i+1]==0)
        	{
        		cout<<-1<<endl;
        		return;
        	}
        	int z = log2(v[i] / v[i + 1]);
            int x = pow(2, z + 1);
            ans += z + 1;
            v[i] = v[i] / x;

            for(int j = i - 1; j >= 0; j--)
            {
                if(v[j] >= v[j + 1])
                {  
                	if(v[j+1]==0)
                	{
                		cout<<-1<<endl;
                		return;
                	}
                	z = log2(v[j] / v[j + 1]);
                    x = pow(2, z + 1);
                    ans += z + 1;
                    v[j] = v[j] / x;
                }
                else
                {
                    break;
                }
            }
        }
    }

    cout<<ans<<endl;
}

int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t;
    while(t--)
    {
        solve();
    }
    
    return 0;
}
