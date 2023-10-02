//problem number 116A-tram
#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	int stops;
	cin>>stops;
	vector<int>arr,ex;
	while(stops--){
		int x,y;
		cin>>x>>y;
		arr.push_back(x);
		ex.push_back(y);
	}
	vector<int>f;
	int initial=0;
	int ans=INT_MIN;
	for(int i=0;i<arr.size();i++){
		initial=abs(initial-arr[i])+ex[i];
		ans=max(ans,initial);
		//f.push_back(initial);
	}
//	sort(f.begin(),f.end());
	cout<<ans;
	return 0;
}
