#include <iostream>
using namespace std;
void func1(int num) {  
    cout<<"value of num is: "<<num<<endl;   
}   
int main(){
    func1(10);
}
#include <iostream>
using namespace std;
int fun2(int num1,int num2){
    return num1+num2;
}
int main(){
    cout<<fun2(10,20);
}
