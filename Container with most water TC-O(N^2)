#include <bits/stdc++.h>

using namespace std;

int main(){
    vector<int> height;
    int n;
    cin>>n;
    int x;
    for(int i=0;i<n;i++){
        cin>>x;
        height.push_back(x);
    }
    int t=0,l=0,m=0;
    for(int i=0;i<n;i++){
      for(int j=i+1;j<n;j++){
          m=min(height[i],height[j]);
          t=m*(j-i);
          l=max(l,t);
      }
    }
    cout<<l;
    return 0;
}
