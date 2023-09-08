#include<iostream>
using namespace std;
int main(){
    int num1, num2, result;
    char operate, abs;
    cout<<"Do you want to check for absolute vale of the number(Enter Y for yes and any other character for no):";
    cin>>abs;
    if(abs=='Y'){
        cout<<"Enter the number:";
        cin>>result;
        if(result<0){
            result = -result;
        cout<<"The absolute value is "<<result;
        }
        else{
            cout<<"The absolute value is "<<result;
        }
    }
    else{
    cout<<"Enter the numbers:";
    cin>>num1>>num2;
    cout<<"Enter the operator:";
    cin>>operate;
    switch(operate){
    case '+':result=num1+num2;
    break;
    case '-':result=num1-num2;
    break;
    case '*':result=num1*num2;
    break;
    case '/':result=num1/num2;
    break;
    default:cout<<"Invalid operator!";
    }
    cout<<"Result is "<<result;
    }
    return  0;
}