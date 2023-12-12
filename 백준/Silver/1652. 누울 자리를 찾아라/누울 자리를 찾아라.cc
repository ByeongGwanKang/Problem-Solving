#include <bits/stdc++.h> 
using namespace std;

int main(void){
	ios::sync_with_stdio(false); 
	cin.tie(NULL);
	cout.tie(NULL);
	int n;
	cin>>n;
	vector<string>v(n+1);
	for(int i=0;i<n;i++){
		cin>>v[i];
	}
	vector<string>temp(n+1);
	copy(v.begin(),v.end(),temp.begin());
	int row=0;
	int col=0;
	for(int i=0;i<n;i++){
		for(int j=0;j<n-1;j++){
			if(v[i][j]=='.'&&v[i][j+1]=='.'){
				row++;
				while(j<n&&v[i][j]=='.'){
					v[i][j]='X';
					j++;
				}
			}
		}
	}
	
	for(int i=0;i<n;i++){
		for(int j=0;j<n-1;j++){
			if(temp[j][i]=='.'&&temp[j+1][i]=='.'){
				col++;
				while(j<n&&temp[j][i]=='.'){
					temp[j][i]='X';
					j++;
				}
			}
		}
	}
	cout<<row<<" "<<col;
	return 0;
}
