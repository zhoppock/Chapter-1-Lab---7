#include <iostream>
using namespace std;
int main()
{  
   double radius = 11;  // Centimeters
   double pi  = 3.14;
   double sphere_volume = 4  * pi *(radius * radius * radius) / 3;
   double surface_area = 4 * pi * radius;
   cout << "Volume = " << sphere_volume << "\n";
   cout << "Area = " << surface_area;
   return 0;
}   