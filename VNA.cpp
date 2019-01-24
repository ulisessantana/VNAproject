//ULISES SANTANA VNA
#include "VNA.h"
#include <iostream>
using namespace std;



int main() 
{
Orders x;
x.Charge();
cout << "your current pick locations are: ";
x.Show();

for(int i=0; x.Size();i++)
 {
     x.Pick();
 }
 
x.Show();


}
