// C++ program to calculate the area of a wall

#include <iostream>
using namespace std;

// declare a class
//class Wall {
 // private:
    //double length;
  //  double height;

  //public:
    // parameterized constructor to initialize variables
    double Wall(double len, double hgt) {
      length = len;
      height = hgt;
      cout<<"enter the length of the wall";<<endl;
      cin>>length;
      cout<<"enter the height of the wall";<<endl;
      cin>>height;
     
    }

    double calculateArea() {
      return length * height;
    }

int main() {
  // create object and initialize data members
  double len;
  double hgt;
  Wall wall1(len, hgt );
 // Wall wall2(8.5, 6.3);

  cout << "Area of Wall 1: " << wall1.calculateArea() << endl;
 // cout << "Area of Wall 2: " << wall2.calculateArea();

  return 0;
}


main include 
archit is a good common int main(int argc, char const *argv[])
{
  /* code */
  return 0;
}
