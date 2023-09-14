#include <iostream>
#include <vector>
using namespace std;

int gcd(int a, int b){
	if(b==0)
		return a;
	else 
		return gcd(b,a%b);
}

int main(void){
	ios::sync_with_stdio(false); 
	cin.tie(NULL);
	cout.tie(NULL);
	int n;
	cin>>n;
	vector<int> v(n);
	vector<int> dis(n);
	for(int i=0;i<n;i++){
		cin>>v[i];
	}
	for(int i=0;i<n-1;i++){
		dis[i]=v[i+1]-v[i];
	}
	int ans_gcd=gcd(dis[0],dis[1]);
	for(int i=2;i<n-1;i++){
		ans_gcd=gcd(ans_gcd,dis[i]);
	}
	int cnt=0;
	for(int i=0;i<n-1;i++){
		cnt+=(dis[i]/ans_gcd)-1;
	}
	cout<<cnt;
		
	return 0;
}