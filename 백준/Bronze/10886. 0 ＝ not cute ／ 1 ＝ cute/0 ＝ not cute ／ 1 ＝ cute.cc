#include <bits/stdc++.h> 
using namespace std;

int main(void){
	ios::sync_with_stdio(false); 
	cin.tie(NULL);
	cout.tie(NULL);
	int n;
	cin>>n;
	int cute=0;
	int ncute=0;
	for(int i=0;i<n;i++){
		int val;
		cin>>val;
		if(val==1){
			cute++;
		}
		else{
			ncute++;
		}
	}
	if(cute>ncute){
		cout<<"Junhee is cute!";
	}
	else{
		cout<<"Junhee is not cute!";
	}
	return 0;
}
