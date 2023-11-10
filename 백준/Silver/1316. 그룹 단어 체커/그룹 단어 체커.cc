#include <bits/stdc++.h> 
using namespace std;

int main(void){
	ios::sync_with_stdio(false); 
	cin.tie(NULL);
	cout.tie(NULL);
	int n;
	cin>>n;
	int cnt=n;
	for(int i=0;i<n;i++){
		string str;
		cin>>str;
		int len=str.length();
		for(int j=0;j<len-1;j++){
			if(str[j]!=str[j+1]){
				for(int k=j+2;k<len;k++){
					if(str[k]==str[j]){
						j=len;
						cnt--;
						break;
					}
				}
			}
		}
	}
	cout<<cnt;	
	return 0;
}
