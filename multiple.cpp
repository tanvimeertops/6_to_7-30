#include<iostream>
using namespace std;
/*multiple inheritance
why multiple is not used ---because of ambiguity.
always object is made for child.
ambiguity
*/
class A{
public:
void func_of_class_A(){
    cout<<"in class A"<<endl;
}
};
class B{
public:
void func_of_class_B(){
    cout<<"in class B"<<endl;
}
};
class C:public A,public B{
    public:
void func_of_class_C(){
    cout<<"in class C"<<endl;
}
};
int main(){
    C c;
    c.func_of_class_A();
    c.func_of_class_B();
    c.func_of_class_C();
}