#include<iostream>
#include<string>
using namespace std;

bool isBalanced(string num) {
        int even = 0;
        int odd = 0;
        for(int i=0; i<num.length(); i+=2){
                even += (num[i] - '0');
        }
        for(int i=1; i<num.length(); i+=2){
                odd += (num[i] - '0');
        }

        cout<<odd<<endl;
        cout<<even<<endl;

        if(odd == even){
            return true;
        }
        else{
            return false;
        }
        
}

int main(){

    string num = "1234";
    cout<<isBalanced(num)<<endl;

}