#include<iostream>
#include<string>
using namespace std;
int main(){
    int test;
    cin>>test;
    for(int j=0;j<test;j++){
    string str;
    cin>>str;
    if(str.size()>10){
      int len=0;
      for(int i=1;i<str.size()-1;i++) len++;
      cout<<str[0]<<len<<str[len+1]<<endl;
    }
    else cout<<str<<endl;
    }
    return 0;
}