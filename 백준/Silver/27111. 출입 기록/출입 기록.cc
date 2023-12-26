#include <bits/stdc++.h> 
using namespace std;

int main(void){
	ios::sync_with_stdio(false); 
	cin.tie(NULL);
	cout.tie(NULL);
	int n;
	cin>>n;
	int ans=0;
	int v[200001]={0,};
	for(int i=0;i<n;i++){
		int a,b;
		cin>>a>>b;
		if(b==1){
			//이미 들어가있는경우
			if(v[a]==1){
				ans++;
			}
			else{
				v[a]=1;
			}
		}
		else{
			if(v[a]==0){
				ans++;
			}
			else{
				v[a]=0;
			}
		}
	}
	for(int i=1;i<=200000;i++){
		if(v[i]==1){
			ans++;
		}
	}
	cout<<ans;
	return 0;
}
