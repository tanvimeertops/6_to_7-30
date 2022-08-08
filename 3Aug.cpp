//:: scope resolution operator.
//c++ (unix) return 0, return 1
//std is a toolbox where cout tool is stored.
/*
constructor is a special member funtion whose task is to 
initialise the object.
characteristics of constructor:
1. its name is same as class name.
2. it has no return type.
3. it invokes automatically whenever the object is created.

types of constructor
1. default(with no parameter)
2. parameterized(with parameters)
3. copy(obj as argu) (cloning of object)
*/

#include<iostream>
using namespace std;
class 3Aug
{
private:
    /* data */
public:
    3Aug(/* args */);
    ~3Aug();
};

3Aug::3Aug(/* args */)
{
}

3Aug::~3Aug()
{
}

int main(){
int a,b;
cout<<"Enter value:"<<endl;
cin>>a>>b;
cout<<"result:"<<a+b;
}
