#include <bits/stdc++.h> 
using namespace std;

int main(void){
	ios::sync_with_stdio(false); 
	cin.tie(NULL);
	cout.tie(NULL);
	int n;
	cin>>n;
	for(int i=1;i<=n;i++){
		int g;
		cin>>g;
		vector<int>v(g);
		for(int j=0;j<g;j++){
			cin>>v[j];
		}
		sort(v.begin(),v.end());
		int cnt=0;
		for(int j=0;j<g;j++){
			if(j==g){
				cout<<"Case #"<<i<<": "<<v[j]<<"\n";
			}
			if(v[j]==v[j+1]){
				j++;
				cnt=0;
			}
			else{
				cout<<"Case #"<<i<<": "<<v[j]<<"\n";
				break;
			}
		}
	}
	return 0;
}
