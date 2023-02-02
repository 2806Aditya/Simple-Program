#include<iostream>
using namespace std;
int main(){
    int num1,num2;
    cin>>num1>>num2;
    cout<<"Number before swap "<<num1<<" "<<num2<<endl;
    int temp=num1;
    num1=num2;
    num2=temp;
    cout<<"Number after swap "<<num1<<' '<<num2<<endl;
    return 0;
}