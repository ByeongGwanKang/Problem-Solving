#include <bits/stdc++.h> 
using namespace std;

void dfs(int number,int jrs);
bool isprime(int val);
static int n;

int main(void){
	ios::sync_with_stdio(false); 
	cin.tie(NULL);
	cout.tie(NULL);
	cin>>n;
	dfs(2,1);
	dfs(3,1);
	dfs(5,1);
	dfs(7,1);
		
	}

void dfs(int number, int jrs){
	if(jrs==n){
		if(isprime(number)==true){
			cout<<number<<"\n";
		}
		return;
	}
	for(int i=1;i<=9;i=i+2){
		if(i!=5){
			if(isprime(number*10+i)==true)
				dfs(number*10+i,jrs+1);
		}
	}
	
}

bool isprime(int val){
	for(int i=2;i<=val/2;i++){
		if(val%i==0){
			return false;
		}
	}
	return true;
}