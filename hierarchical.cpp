#include<iostream>
using namespace std;
class A{
public:
void class_A_func(int i){
    cout<<"in class A"<<endl;
    cout<<i<<endl;
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

int main(){
    B b;
    b.class_A_func(1);
    b.class_B_func();
    C c;
    c.class_A_func(2);
    c.class_C_func();
}