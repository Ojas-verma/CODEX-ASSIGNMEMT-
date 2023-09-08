#include<iostream>
using namespace std;
int main()
{
    int n1,n2,n3;
    cout<<"enter 3 numbers\n";
    cin>>n1>>n2>>n3;
    if(n1>n2 && n1>n3){
        cout<<n1<<"is greatest";
    }
    else if(n2>n1 && n2>n3){
        cout<<n2<<" is greatest number";
    }
    else{
        cout<<n3<<" is greatest number";
    }
    return 0;
}