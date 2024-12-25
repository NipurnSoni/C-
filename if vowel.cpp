#include <iostream>
using namespace std;
int main() {
   char c;
   cout<<("Enter Alphabet :");
   cin>>c;
   
   if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' )
   {
   cout <<c<< " is a Vowel";
   }
   else
   {
   cout <<c<< " is a Consonant";
   }
   return 0;
}
