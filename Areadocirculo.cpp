#include <iostream>
#include <cmath>
#include <iomanip>

 
using namespace std;
 
int main() {
 
   double raio=0, i=0;
   
   cin >> raio;
   
   i = (raio*raio)*3.14159;
   cout << fixed << setprecision (4);
   cout << "A=" << i <<"\n";
   
    return 0;
}
