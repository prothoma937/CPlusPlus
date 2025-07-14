#include<bits/stdc++.h>
using namespace std;
int main(){

    int x;
    cin>>x;
    int ar[x];
    for(int i=0;i<x;i++){
        cin>>ar[i];
    }
   int i,j;
        for(i=0,j=x-1;j>i;i++,j--){
                 swap(ar[i],ar[j]);
        }
    for(int i=0;i<x;i++){
        cout<<ar[i]<<" ";
    }


    return 0;
}