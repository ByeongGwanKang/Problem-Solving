#include <bits/stdc++.h>
using namespace std;

int main(void){
	ios::sync_with_stdio(false); 
	cin.tie(NULL);
	cout.tie(NULL);
	int n;
	cin>>n;
	vector<int>v(n);
	vector<int>len(n,1);
	for(int i=0;i<n;i++){
	    cin>>v[i];
	}
	for(int i=0;i<n;i++){
	    for(int j=i+1;j<n;j++){
	        if(v[j]>v[i]){
	            len[j]=max(len[j],len[i]+1);
	        }
	    }
	}
	int ans=0;
	for(int i=0;i<n;i++){
	    ans=max(ans,len[i]);
	}
	cout<<ans;
	return 0;
}
