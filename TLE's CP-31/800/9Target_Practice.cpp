#include <bits/stdc++.h>
using namespace std;

void solve() 
{
	int n = 10;
	int ans = 0;
	for(int i=0; i<n; i++)
	{
		string str; cin>>str;
		for(int j=0; j<n; j++)
		{
			if(str[j]=='X')
			{
				if(((i==0 or i==9) and (j>-1 and j<10)) or ((j==0 or j==9) and (i>-1 and i<10)))
				{
					ans += 1;
				}
				else if(((i==1 or i==8) and (j>0 and j<9)) or ((j==1 or j==8) and (i>0 and i<9)))
				{
					ans += 2;
				}
				else if(((i==2 or i==7) and (j>1 and j<8)) or ((j==2 or j==7) and (i>1 and i<8)))
				{
					ans += 3;
				}
				else if(((i==3 or i==6) and (j>2 and j<7)) or ((j==3 or j==6) and (i>2 and i<7)))
				{
					ans += 4;
				}

				else if(((i==4 or i==5) and (j>3 and j<6)) or ((j==4 or j==5) and (i>3 and i<6)))
				{
					ans += 5;
				}
				else
				{
					
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

	int t; cin>>t;
	while(t--)
	{
		solve();
	}

	return 0;
}