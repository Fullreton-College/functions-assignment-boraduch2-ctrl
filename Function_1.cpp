#include <iostream>
#include <cstdlib>
using namespace std;

/* Define your function here */ 
string CoinFlip() {
   int value = rand() % 2;

   if(value == 1) {
      return "Heads";
   }
   else {
      return "Tails";
   }
}
int main() {
    int flips;
    srand(2);  // Unique seed
    
    cin >> flips;

    for (int i = 0; i < flips; i++) {
         cout << CoinFlip();
         
         if (i < flips - 1) {
             cout << " ";
         }
      }
   
   cout << endl;
   
   return 0;
}
