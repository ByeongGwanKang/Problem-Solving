#include <bits/stdc++.h> 
using namespace std;

int main(void){
	ios::sync_with_stdio(false); 
	cin.tie(NULL);
	cout.tie(NULL);
	int n;
	cin>>n;
	string str;
	cin>>str;
	double cnt=0;
	bool flag=true;
	for(int i=0;i<n;i++){
		if(str[i]=='S'){
			cnt++;
		}
		else{
			if(flag==true){
				cnt+=2;
				flag=false;
				i++;
			}
			else{
				cnt+=0.5;
			}
		}
	}
	cout<<cnt;
	return 0;
}
