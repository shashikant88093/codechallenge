#include <iostream>
using namespace std;

int main()
{
    int i, num,flag=0;
    cin >> num;
    for (i = 2; i <= num/2; i++)
    {
        if (num%i==0)
        {
            cout << "no";
            flag=1;
            break;
        }
        if(flag==0){
            cout<<"yes";
            break;
        }
        
    }

    return 0;
}
