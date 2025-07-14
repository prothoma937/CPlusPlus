#include<bits\stdc++.h>
using namespace std;
int* p;
void fun(){
    int* x=new int;
    *x=10;
    p=x;
    cout<<"fun="<<*p;
    return;
}
int main(){

fun();

 cout<<"MAin="<<*p;
return 0;
}