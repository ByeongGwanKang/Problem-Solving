#include <bits/stdc++.h> 
using namespace std;

int main(void){
	ios::sync_with_stdio(false); 
	cin.tie(NULL);
	cout.tie(NULL);
	int n;
	cin>>n;
	long long arr[1001];
	arr[1]=1;
	arr[2]=3;
	for(int i=3;i<=n;i++){
		arr[i]=arr[i-1]+arr[i-2]*2;
		if(arr[i]>=10007)
			arr[i]%=10007;
	}
	cout<<arr[n];
}