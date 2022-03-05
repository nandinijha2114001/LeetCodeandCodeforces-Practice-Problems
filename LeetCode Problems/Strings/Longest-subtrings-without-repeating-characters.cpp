#include<bits/stdc++.h>
using namespace std;
int lengthOfLongestSubstring(string s){
    string temp;
    int ml=0;
    temp.push_back(s[0]);
    for(int i=1;i<s.size();i++){
        for(char x:temp){
            if(x==s[i]){
                temp.clear();
            }
        }
        temp.push_back(s[i]);
        int cl=temp.size();
        ml=max(cl,ml);
    }
    return ml;
}
int main(){
    string s;
    cin>>s;
    cout<<lengthOfLongestSubstring(s);
    return 0;
}