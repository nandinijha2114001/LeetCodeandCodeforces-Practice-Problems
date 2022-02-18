#include<iostream>
using namespace std;
int main(){
    int w;
    cin>>w;
    if(w>=1 and w<=100){
        w%2==0?(w==2)?cout<<"No":cout<<"Yes":cout<<"No";
    }
    return 0;
}
