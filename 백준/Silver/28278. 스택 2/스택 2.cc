#include <bits/stdc++.h>
using namespace std;

int main(void){
	ios::sync_with_stdio(false); 
	cin.tie(NULL);
	cout.tie(NULL);
	int s[1000001]={0,};
	int top=0;
	int n;
	cin>>n;
	for(int i=0;i<n;i++){
		int func;
		cin>>func;
		if(func==1){
			int val;
			cin>>val;
			s[top++]=val;
		}
		if(func==2){
			if(top==0){
				cout<<-1<<"\n";
			}
			else{
				top--;
				cout<<s[top]<<"\n";
			}
		}
		if(func==3){
			cout<<top<<"\n";
		}
		if(func==4){
			if(top==0){
				cout<<1<<"\n";
			}
			else{
				cout<<0<<"\n";
			}
		}
		if(func==5){
			if(top==0){
				cout<<-1<<"\n";
			}
			else{
				cout<<s[top-1]<<"\n";
			}
		}
	}
	return 0;
}
