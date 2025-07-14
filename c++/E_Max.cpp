#include<bits/stdc++.h>
using namespace std;
void max1(){
 int x ;
 cin>>x;
 int ar[x];
    for(int i=0;i<x;i++){
        cin>>ar[i];
    }
    max(ar[i]);
    return ;

}
int main(){

    int x;
    int result=max1();
cout<<result;

    return 0;
}