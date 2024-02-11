#include <bits/stdc++.h> 
using namespace std;

long long n;
vector<tuple<long long,long long,long long>>v[10];
bool vis[10];
long long ct[10];

void dfs(long long now){
	vis[now]=true;
	for(auto a:v[now]){
		long long next=get<0>(a);
		if(vis[next]==false){
			ct[next]=ct[now]*get<2>(a)/get<1>(a);
			dfs(next);
		}
	}
}
long long gcd(long long a,long long b){
	if(b==0){
		return a;
	}
	return gcd(b,a%b);
}
int main(void){
	ios::sync_with_stdio(false); 
	cin.tie(NULL);
	cout.tie(NULL);
	cin>>n;
	long long lcm=1;
	for(long long i=0;i<n-1;i++){
		long long a,b,p,q;
		cin>>a>>b>>p>>q;
		v[a].push_back(make_tuple(b,p,q));
		v[b].push_back(make_tuple(a,q,p));
		lcm*=p*q/gcd(p,q);
	}
	ct[0]=lcm;
	dfs(0);
	long long g=ct[0];
	for(long long i=0;i<n;i++){
		g=gcd(g,ct[i]);
	}
	for(long long i=0;i<n;i++){
		cout<<ct[i]/g<<" ";
	}
	return 0;
}