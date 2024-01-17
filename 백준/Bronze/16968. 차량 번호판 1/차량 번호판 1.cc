#include <bits/stdc++.h> 
using namespace std;

int main(void){
	ios::sync_with_stdio(false); 
	cin.tie(NULL);
	cout.tie(NULL);
	string str;
	cin>>str;
	int ans=0;
	if(str[0]=='d'){
		ans+=10;
	}
	else{
		ans+=26;
	}
	for(int i=1;i<str.length();i++){
		if(str[i]==str[i-1]){
			if(str[i]=='d'){
				ans*=9;
			}
			else{
				ans*=25;
			}
		}
		else{
			if(str[i]=='d'){
				ans*=10;
			}
			else{
				ans*=26;
			}
		}
	}
	cout<<ans;
	return 0;
}
