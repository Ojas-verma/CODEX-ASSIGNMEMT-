#include<iostream>
using namespace std;
int main(){
    string name, college;
    int age;
    cout<<"Enter your name:"<<endl;
    cin>>name;
    cout<<"Enter your Age:"<<endl;
    cin>>age;
    cout<<"Enter your College Name:"<<endl;
    cin>>college;

    cout<<"Hello "<<name<<",I see you are "<<age<<" years old and are currently studying at "<<college;
    return 0;
}