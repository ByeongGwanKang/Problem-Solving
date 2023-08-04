#include <bits/stdc++.h>
using namespace std;

int main(void){
	cin.tie(0);
	ios::sync_with_stdio(0);
	int t;
	cin>>t;
	int m;
	char c;
	for(int i=0;i<t;i++){
		cin>>m>>c;
		vector<int> iv(m);
		vector<char> cv(m);
		for(int j=0;j<m;j++){
			if(c=='C')
				cin>>cv[j];
			else cin>>iv[j];
		}
		if(c=='C'){
			for(int j=0;j<m;j++){
				cout<<(int)cv[j]-'A'+1<<" ";
			}
		}
		else {
			for(int j=0;j<m;j++){
				cout<<(char)((char)iv[j]+'A'-1)<<" ";
			}
		}
		cout<<"\n";
	}
	return 0;
}