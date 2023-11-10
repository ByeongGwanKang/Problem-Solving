#include <bits/stdc++.h> 
using namespace std;

int main(void){
	ios::sync_with_stdio(false); 
	cin.tie(NULL);
	cout.tie(NULL);
    int n,l;
	int ans=0;
	cin>>n>>l;
	vector<int>v(n+1);
	for(int i=0;i<n;i++){
		string str;
		int cnt=0;
		cin>>str;
		str+="0";
		for(int i=0;i<l;i++){
			if(str[i]=='1'&&str[i+1]=='0'){
				cnt++;
			}
		}
		v[i]=cnt;
		ans=max(ans,cnt);
	}
	int ans_cnt=0;
	for(int i=0;i<n;i++){
		if(v[i]==ans){
			ans_cnt++;
		}
	}
	cout<<ans<<" "<<ans_cnt;
	return 0;
}