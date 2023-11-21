#include <bits/stdc++.h>
using namespace std;

int arr[50];
int check(int k){
	for(int i=1;i<50;i++){
		for(int j=1;j<50;j++){
			for(int p=1;p<50;p++){
				if(arr[i]+arr[j]+arr[p]==k){
					cout<<"1\n";
					return 0;
				}
			}
		}
	}
	cout<<"0\n";
	return 0;
}
	
int main(void){
	ios::sync_with_stdio(false); 
	cin.tie(NULL);
	cout.tie(NULL);
	int t;
	cin>>t;
	for(int i=0;i<50;i++){
		arr[i]=arr[i-1]+i;
	}
	for(int i=0;i<t;i++){
		int k;
		cin>>k;
		check(k);
	}
	return 0;
}
