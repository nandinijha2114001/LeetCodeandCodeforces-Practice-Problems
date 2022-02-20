#include<bits/stdc++.h>
using namespace std;
int main(){
    int contest;
    cin>>contest;
    int ar[3],count=0,yes=0;
    while(contest--){
        for(int i=0;i<3;i++){
            cin>>ar[i];
            if(ar[i]==1) count++;
        }
        if(count>=2) yes++;
        count=0;
    }
    cout<<yes;
    return 0;
}