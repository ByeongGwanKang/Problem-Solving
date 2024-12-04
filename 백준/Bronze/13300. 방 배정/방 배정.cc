#include <bits/stdc++.h>
using namespace std;

int arr[7][2];
int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);
  int n,k;
  cin>>n>>k;
  int ans=0;
  for(int i=0;i<n;i++){
      int s,y;
      cin>>s>>y;
      if(s==0){
          if(arr[y][0]==0){
              ans++;
          }
          arr[y][0]++;
          if(arr[y][0]==k){
              arr[y][0]=0;
          }
      }
      else{
          if(arr[y][1]==0){
              ans++;
          }
          arr[y][1]++;
          if(arr[y][1]==k){
              arr[y][1]=0;
          }
      }
  }
  cout<<ans;
  return 0;
}