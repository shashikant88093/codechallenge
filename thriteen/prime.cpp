#include <iostream>
using namespace std;

int main()
{
    int i, num, count = 0;
    cin >> num;
    for (i = 1; i <= num; i++)
    {
        if (num % i == 0)
        {
            count++;
        }
    }
    if (count == 2)
    {
        cout << "yes";
    }
    else
    {
        cout << "no";
    }
    return 0;
}
