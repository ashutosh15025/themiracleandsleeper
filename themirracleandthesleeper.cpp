#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    for(int i=0;i<t;i++){
        int x,y;
        cin>>x>>y;
        int mid=y/2;
        if(mid<x)
         cout<<(y-x);
         else
           cout<<(y-mid-1);
           cout<<endl;
    }
}