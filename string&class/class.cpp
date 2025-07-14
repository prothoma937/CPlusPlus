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
    a.name="sakib";
    a.gpa=4.5;
    a.id=12;

     b.name="AAAsakib";
    b.gpa=2.5;
    b.id=120;
cout<<a.name<<" "<<a.id<<" "<<a.gpa<<endl;
cout<<b.name<<" "<<b.id<<" "<<b.gpa<<endl;

    return 0;
}