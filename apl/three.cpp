#include<iostream>
using  namespace std;
int main(){
    char n;
    cin>>n;
    if((n >= 65 && n <= 90) || (n >= 97 && n <=122)){
        cout<<"Alphabet";
    }else{
        cout<<"invalid";
    }

    return 0;
}
