#include <bits/stdc++.h>
using namespace std;
class Student{
    public:
    string name;
    int id;
    double gpa;
    
    Student(string n,int i,double g){
        name=n;
        id=i;
        gpa=g;
    }
};
int main(){
    Student a("ajme",1,3.3);
    Student b("pro",2,2.20);
   
    
cout<<a.name<<" "<<a.id<<" "<<a.gpa<<endl;
cout<<b.name<<" "<<b.id<<" "<<b.gpa<<endl;

    return 0;
}