#include<bits/stdc++.h>
using namespace std;
int n,k,p;
int solve(int curr_stack,int plates,vector<vector<int> >&booty,vector<vector<int> >&dp){
	if(curr_stack==n)
		return 0;
	if(plates<=0)
		return 0;
	if(dp[curr_stack][plates]!=-1)
		return dp[curr_stack][plates];
	for(int i=0;i<=k && i<=plates;i++){
		dp[curr_stack][plates]=max(dp[curr_stack][plates],booty[curr_stack][i]+solve(curr_stack+1,plates-i,booty,dp));
	}
	return dp[curr_stack][plates];
}

int main(){
	int t;
	cin>>t;
	int cnt=1;
	while(cnt<=t){
		
		cin>>n>>k>>p;

		vector<vector<int> >booty(n,vector<int>(k+1,0));
		for(int i=0;i<n;i++){
			for(int j=1;j<=k;j++){
				cin>>booty[i][j];
				booty[i][j]+=booty[i][j-1];
			}
		}
		vector<vector<int> >dp(n,vector<int>(p+1,-1));
		int ans=solve(0,p,booty,dp);
		cout<<"Case #"<<cnt<<": "<<ans<<"\n";
		cnt++;
	}
}