#include<iostream>
using namespace std;
class A{
public:
void class_A_func(){
    cout<<"in class A"<<endl;
}
};
class B:public A{
public:
void class_B_func(){
    cout<<"in class B"<<endl;
}
};
class C:public A{
public:
void class_C_func(){
    cout<<"in class C"<<endl;
}
};
class D:public B,public C{
public:
void class_D_func(){
    cout<<"in class D"<<endl;
}
};
int main(){
    D d;
    d.class_B_func();
    d.class_C_func();
    d.class_D_func();
    B b;
    b.class_A_func();
    b.class_B_func();
    C c;
    c.class_A_func();
    c.class_C_func();

}