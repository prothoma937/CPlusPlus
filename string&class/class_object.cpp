#include <bits/stdc++.h>
using namespace std;
class Student{
    public:
    string name;
    int id;
    double gpa;
};
int main(){
    Student a,b;
    getline(cin,a.name);
cin>>a.id>>a.gpa;
cin.ignore();
getline(cin,b.name);
 cin>>b.gpa>>b.id;
   
cout<<a.name<<" "<<a.id<<" "<<a.gpa<<endl;
cout<<b.name<<" "<<b.id<<" "<<b.gpa<<endl;

    return 0;
}