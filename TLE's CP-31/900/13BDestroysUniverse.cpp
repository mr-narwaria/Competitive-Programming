#include <iostream>
#include <bits/stdc++.h>
using namespace std;

#define ll long long

void solve()
{

    int n; cin>>n;
    vector<int> arr(n);

    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }

    int ans=0;
    bool flag=false;

    for(int i=0;i<n;i++)
    {
        if(arr[i]!=0)
        {
            flag=true;
        }
        else
        {
            if(flag)
            {
                flag=false;
                ans++;
            }
        }
    }

    if(flag)
    {
        ans++;
    }

    if(ans<=1)
    {
        cout<<ans<<endl;
    }
    else 
    {
        cout<<2<<endl;
    }
}

int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin>>t;
    while(t--)
    {
        solve();
    }
    
    return 0;
}
