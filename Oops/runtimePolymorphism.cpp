#include<iostream>
using namespace std;
class Animal {
    public:
    void speak(){
        cout<<"speaking..."<<endl;
    }
};
class Dog:public Animal{
    public:
    void speak(){
        cout<<"barking..."<<endl;
    }
};
int main(){
    Dog d1;
    // dog class ka function call hoga... 
    // its called method overiding ;
    d1.speak();
    
}