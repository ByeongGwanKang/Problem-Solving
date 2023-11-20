#include <bits/stdc++.h>
using namespace std;

bool isPrime(long long a){
	for(int i=2;i<=sqrt(a);i++){
		if(a%i==0){
			return false;
		}
	}
	return true;
}

int main(void){
	ios::sync_with_stdio(false); 
	cin.tie(NULL);
	cout.tie(NULL);
	int t;
	cin>>t;
	for(int i=0;i<t;i++){
		long long n;
		cin>>n;
		if(n>=0&&n<=2){
			cout<<2<<"\n";
			continue;
		}
		else if(n==3){
			cout<<3<<"\n";
		}
		else{
			while(!isPrime(n)){
				n++;
			}
			cout<<n<<"\n";
		}
	}
	return 0;
}
