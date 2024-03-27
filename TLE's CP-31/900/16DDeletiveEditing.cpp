#include <bits/stdc++.h>
using namespace std;

#define ll long long

void solve() 
{
	string st, re; cin>>st>>re;
    
    int ind = re.size()-1;
	for(int i=st.size()-1; i>=0; i--)
	{
        if(st[i]==re[ind])
        {    
        	st[i] = '1';
        	for(int j=i+1; j<st.size(); j++)
        	{
                  if(st[j]==re[ind])
                  {
                  	cout<<"NO"<<endl;
                  	return;
                  }
        	}
        	ind--;
        	if(ind<0)
        	{
        		cout<<"YES"<<endl;
        		return;
        	}
        }
	}
	cout<<"NO"<<endl;
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

