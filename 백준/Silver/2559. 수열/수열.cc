#include <bits/stdc++.h>

using namespace std;

int main(void) {
    ios::sync_with_stdio(false); 
    cin.tie(NULL); 
    cout.tie(NULL);
    int n,k;
    int sum=0;
    cin>>n>>k;
    vector<int>v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    for(int i=0;i<k;i++){
        sum+=v[i];
    }
    int mx=sum;
    for(int i=k;i<n;i++){
        sum-=v[i-k];
        sum+=v[i];
        mx=max(mx,sum);
    }
    cout<<mx;
    return 0;
}