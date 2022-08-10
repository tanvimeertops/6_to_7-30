#include<iostream>
using namespace std;
class people{
private:
int id;
char name[100];
public:
void set_data(){
    cout
    <<"Enter name:"<<endl;
    cin>>name;
    cout<<"enter id:"<<endl;
    cin>>id;
}
void get_data(){
cout<<name<<endl;
cout<<id<<endl;
}
};