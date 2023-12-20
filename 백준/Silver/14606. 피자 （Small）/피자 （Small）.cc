#include <bits/stdc++.h> 
using namespace std;

int main(void){
	ios::sync_with_stdio(false); 
	cin.tie(NULL);
	cout.tie(NULL);
	int n;
	cin>>n;
	int arr[11]={0,};
	for(int i=1;i<=n;i++){
		arr[i]=arr[i-1]+i-1;
	}
	cout<<arr[n];
	return 0;
}
