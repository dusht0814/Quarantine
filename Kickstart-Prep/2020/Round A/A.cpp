#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	int cnt=1;
	while(cnt<=t){
		int n,bud;
		cin>>n>>bud;
		vector<int>arr(n);
		for(int i=0;i<n;i++){
			cin>>arr[i];
		}
		sort(arr.begin(),arr.end());
		int i=0;
		for(i=0;i<n;i++){
			if(bud>=arr[i])
				bud-=arr[i];
			else
				break;
		}
		cout<<"Case #"<<cnt<<": "<<i<<"\n";
		cnt++;
	}
}