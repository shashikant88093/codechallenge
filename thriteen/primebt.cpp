#include <iostream>
using namespace std;

int main()
{
    int a, b, c=0;
    cin >> a;
    cin >> b;
    for (int i = a+1; i <= b-1; i++)
    {
              
        for (int j = 1; j <= i; j++)
        {
            if (i % j == 0)
            { c++;
            }
           
        }
         if (c == 2)
            {
                cout << i<<" ";
            }
        c = 0;
    }

    return 0;
}