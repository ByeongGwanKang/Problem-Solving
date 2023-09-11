#include <bits/stdc++.h> 
using namespace std;

int main(void){
	ios::sync_with_stdio(false); 
	cin.tie(NULL);
	cout.tie(NULL);
	int n,f;
	cin>>n>>f;
	int change = n%100;
	if(n==100){
		for(int i=n;;i++){
			if(i%f==0){
				if(i%100>=10){
					cout<<i%100;
					return 0;
				}
				else{
					cout<<0<<i%100;
					return 0;
				}
			}
		}
	}
	else{
		n-=change;
		for(int i=n;;i++){
			if(i%f==0){
				if(i%100>=10){
					cout<<i%100;
					return 0;
				}
				else{
					cout<<0<<i%100;
					return 0;
				}
			}
		}
	}
	return 0;
}