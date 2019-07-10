#include<iostream>
using namespace std;

int main()
{
   int num, reverse = 0, remainder, temp;
  
   cout << "Enter the number: ";
   cin >> num;

   temp = num; 

   while( temp != 0)
   {
      remainder = temp % 10;
      reverse = reverse * 10 + remainder;
      temp = temp / 10;
   }

 

   if (num == reverse) 
      cout << "yes";
   else
      cout << "no";
   return 0;
}