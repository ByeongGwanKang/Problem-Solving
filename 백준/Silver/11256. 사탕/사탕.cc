#include <bits/stdc++.h> 
using namespace std;

int main(void){
	ios::sync_with_stdio(false); 
	cin.tie(NULL);
	cout.tie(NULL);
	int t;
	cin>>t;
	for(int i=0;i<t;i++){
		int candy,n;
		int cnt=0;
		cin>>candy>>n;
		vector<int>v;
		for(int j=0;j<n;j++){
			int r,c;
			cin>>r>>c;
			v.push_back(r*c);
		}
		sort(v.begin(),v.end(),greater<int>());
		for(int j=0;;j++){
			candy-=v[j];
			cnt++;
			if(candy<=0){
				cout<<cnt<<"\n";
				break;
			}
		}
	}
	return 0;
}
