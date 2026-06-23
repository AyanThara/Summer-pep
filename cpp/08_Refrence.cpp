//pass by value
#include <iostream>
using namespace std;  
void doubel_the_number(int num){
    num*=2; 
    cout<<"inside the function " <<num<<endl;    

}          
int main() {                    
    int num=10;
    doubel_the_number(num);
    cout<<"outside the function "<<num<<endl;           
}  

//pass by reference

#include <iostream>
using namespace std;
void double_the_number(int &num){
    num *= 2;
    cout << "inside the function " << num << endl;
}
int main() {
    int num = 10;
    double_the_number(num);
    cout << "outside the function " << num << endl;
}
