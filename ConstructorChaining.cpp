/*Constructor Chaining is a combination of 
inheritance and constructor 
polymorphism : one name multiple form
runtime polymorphism/function over ridding : when the functions have
 same prototype and when the object of a derived class 
 calls the function at that time only the derived class 
 function will be called.
 so now we can say that the function of the derived class
 is over ridding the function of base class.
  runtime 
  
  1.early binding
  2.late binding.

  virtual function : 
  1. virtual is a keyword.
  we can make a function virtual so that the pointer 
  can point to addresss.
  2. virtual function is assigned to a base class.
*/
#include<iostream>
using namespace std;
class A{
    public:
    virtual void show(){
        cout<<"in show of a"<<endl;
    }
 A(){
    cout<<"in A constructor"<<endl;
 }
};
class B:public A{
    public:
    void show(){
        cout<<"in show of b"<<endl;
    }
 B(){
    cout<<"in B constructor"<<endl;
 }
};
class C:public B{
    public:
    void show(){
        cout<<"in show of c"<<endl;
    }
 C(){
    cout<<"in C constructor"<<endl;
 }
};
int main(){
B c;
//c.show();
//c.A::show(); //early binding
A *bptr=&c; // late binding.
bptr->show();
}