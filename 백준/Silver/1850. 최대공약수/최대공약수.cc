#include <bits/stdc++.h>
using namespace std;

long long gcd(long long a, long long b){
  if(a%b!=0){
    return gcd(b,a%b);
  }
  return b;
}
int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);
  long long a,b;
  cin>>a>>b;
  long long ans=gcd(a,b);
  for(long long i=0;i<ans;i++){
    cout<<1;
  }
  return 0;
}