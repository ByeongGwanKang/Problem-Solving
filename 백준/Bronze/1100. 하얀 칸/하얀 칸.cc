#include <bits/stdc++.h> 
using namespace std;

int main(void){
	ios::sync_with_stdio(false); 
	cin.tie(NULL);
	cout.tie(NULL);
	vector<string>v(8);
	int cnt=0;
	for(int i=0;i<8;i++){
		cin>>v[i];
	}
	for(int i=0;i<8;i++){
		for(int j=0;j<8;j++){
			if(i%2==0&&j%2==0){
				if(v[i][j]=='F')
					cnt++;
			}
			else if(i%2==1&&j%2==1){
				if(v[i][j]=='F')
					cnt++;
			}
		}
	}
	cout<<cnt;
	return 0;
}