#include <iostream>
#include<cstring>
using namespace std;

int main()
{
 int i,number,sum=0,input;
 cin>>number;
 cin>>input;
 int numArray[number];
 for(i=0;i<number;i++){
     cin>>numArray[i];
 }
 for(i=0;i<input;i++){
     sum += numArray[i];
 }
 cout<<sum;


    return 0;
}
