/* inheritance 
creating a new file from an existing file 
advantage 
redundancy of code is less 
reusability of function.
object will be created for child class
types inheritance
1. Single (class A : parent,base,super)(class b : child,sub,inherit,derived)
2. multilevel
3. multiple (ambiquity)
4. hierarchical
5. hybird
*/
//single inheritance
#include<iostream>
#include "People.h"
using namespace std;
class Student:public people{
protected:
int fees;
public:
void set_fees();
void get_fees();
};

void Student::set_fees(){
    cout<<"enter fees:"<<endl;
    cin>>fees;
}
void Student::get_fees(){
    cout<<fees<<endl;
}
// int main(){
// Student s;
// s.set_data();
// s.get_data();
// s.set_fees();
// s.get_fees();
// }