#include <iostream>
using namespace std;
int main()
{
    char n;
    cin >> n;
    if (n == 'a' || n == 'e' || n == 'i' || n == 'o' || n == 'u' || n == 'A' || n == 'E' || n == 'I' || n == 'O' || n == 'U')
    {
        cout << "Vowel";
    }
    else if ((n >= 65 && n <= 90) || (n >= 97 && n <=122))
    {
        cout << "Consonant";
    }
    else
    {
        cout << "invalid";
    }

    return 0;
}
