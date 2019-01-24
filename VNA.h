//ULISES SANTANA VNA
#include <vector>
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

class Orders
{
 public:
 Orders();
 void Charge();
 void Show();
 void Pick();
 int Size();
 
 
 private:
 vector <int> order;
 int location;
};

Orders :: Orders()
{
 this-> location = 0;
}

void Orders :: Charge()
{
 srand ( time(0) );
 //srand(static_cast <unsigned int> (time(0)));
 //int aisle = rand() % 78 +1; 
 int x;
 
 cout << "how many orders are being placed?" << endl; 
 cin >> x;
 
 for (int i=0; i<x; i++) {order.push_back(rand() % 78 +1);} //Generates number between 1 - 78
 location = order[order.size()-1];
}

 int Orders :: Size(){return order.size();}

 void Orders :: Show()
 {
 
  if (order.size() >= 1)
  {
       for (int i=0; i<order.size(); i++)
    {
        cout << order[i] << " ";
    }
    cout << endl;
  }
  else { cout << "No current orders ";}
  
 
 }
 
 void Orders :: Pick()
 {
  cout << "your current pick location is in aisle: " <<location << endl;
  int npick = order[order.size() - 2];
  /*if (order[order.size() - 2] == n)
  {
   npick = order[order.size() - 1];
   NEED TO FIX. POINTER GOES INTO NULL */ 
  bool down;
  
  if (npick % 4 == 0 || npick % 4 == 1)
  {
  down = true;
  cout << "facing south" << endl;
  }
  
  else if (npick == 1)
  {
   down = true;
   cout << "facing south" << endl;
  }
  
  else
  {
   down = false;
   cout << "facing north" << endl;
   
  }
  
  
  order.pop_back();
  location = order[order.size() - 1];
 }
 

