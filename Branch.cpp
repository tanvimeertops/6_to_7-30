#include<iostream>
#include "Inheritance.h"
using namespace std;
class Branch:public Student{
private:
string branch_name;
public:
void set_branchName();
void get_branchName();
};
void Branch::set_branchName(){
    cout<<"enter branch name:"<<endl;
    cin>>branch_name;
}
void Branch::get_branchName(){
    cout<<branch_name<<endl;
}
int main(){
Branch b;
b.set_data();
b.get_data();
b.set_fees();
b.get_fees();
b.set_branchName();
b.get_branchName();
}