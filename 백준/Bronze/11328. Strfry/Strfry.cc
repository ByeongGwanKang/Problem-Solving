#include <bits/stdc++.h>
using namespace std;

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);
  int n;
  cin>>n;
  while(n--){
      string a,b;
      cin>>a>>b;
      int A[27]={0,};
      int B[27]={0,};
      bool able=true;
      for(int i=0;i<a.length();i++){
          A[a[i]-'a']++;
      }
      for(int i=0;i<b.length();i++){
          B[b[i]-'a']++;
      }
      for(int i=0;i<27;i++){
          if(A[i]!=B[i]){
              able=false;
              cout<<"Impossible\n";
              break;
          }

      }
      if(able){
          cout<<"Possible\n";
      }
  }
  return 0;
}