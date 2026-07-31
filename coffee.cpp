#include<bits/stdc++.h>//注意：连续连续 
using namespace std;
using ll=long long;
const ll N=1e6;
ll n,k,q,diff[N],max_num=-1e6,min_num=1e6,x,y,cnt;
int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	cin>>n>>k>>q;
	while(n--)
	{
		cin>>x>>y;
		max_num=max(max_num,y),min_num=min(min_num,x);
		diff[x]++,diff[y+1]--;
	}
	for(ll i=min_num;i<=max_num;i++)	diff[i]+=diff[i-1];
	while(q--)
	{
		cin>>x>>y;
		for(ll i=x;i<=y;i++)
		{
			if(diff[i]>=k)	cnt++;	
		}	
		cout<<cnt<<endl;
	} 
	
	return 0; 
}
