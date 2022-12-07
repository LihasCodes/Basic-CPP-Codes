#include<iostream>
using namespace std;
int main()
{
  float length, width, perimeter;

  cout<<"Enter Length of rectangle: \n";
  cin>> length;
  cout<<"Enter width of the rectangle: \n";
  cin>> width;

  perimeter= 2*(length+width);

  cout << "Perimeter of Rectangle : " << perimeter;
  return 0;
}