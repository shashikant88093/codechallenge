#include <iostream>
using namespace std;

int main(){
 int n,k,s=0;
 string a= "";
for(int i=0;i<=n;i++){
  int ap;
  cin>>ap;
  a +=ap;
  for(int i=0;i<=k;i++){
    s = s + a[i];
  }
}

};
