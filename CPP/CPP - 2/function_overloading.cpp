#include<iostream>
using namespace std;
int add (int a, int b, int c){
    return a+b+c;
}

int add (int a, int b){
    return a+b;
}

float add(float a, float b){
    return a+b;
}

int main(){
    cout<<add(1,2)<<endl;
    cout<<add(1,2,3)<<endl;
    cout<<add(1.5f,3.14f)<<endl;
    return 0;
}