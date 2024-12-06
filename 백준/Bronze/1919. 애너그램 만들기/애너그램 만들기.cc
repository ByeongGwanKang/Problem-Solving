#include <bits/stdc++.h>
using namespace std;

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);
  string a,b;
  int A[27]={0,};
  int B[27]={0,};
  cin>>a>>b;
  for(int i=0;i<a.length();i++){
      A[a[i]-'a']++;
  }
  for(int i=0;i<b.length();i++){
      B[b[i]-'a']++;
  }
  int ans=0;
  for(int i=0;i<27;i++){
      if(A[i]!=B[i]){
          ans+=abs(A[i]-B[i]);
      }
  }
  cout<<ans;
  return 0;
}