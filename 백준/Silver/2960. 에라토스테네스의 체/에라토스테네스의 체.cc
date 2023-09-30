#include <bits/stdc++.h>
using namespace std;

int main(void){
	ios::sync_with_stdio(false); 
	cin.tie(NULL);
	cout.tie(NULL);
	int n,k;
	cin>>n>>k;
	int cnt=0;
	vector<int> v(1001,0);
	for(int i=2;i<=n;i++){
		for(int j=i;j<=n;j+=i){
			if(v[j]==0){
				v[j]=1;
				cnt++;
			}
			else if(v[j]==1){
				continue;
			}
			if(cnt==k){
				cout<<j;
			}
		}
	}
    return 0;
}
