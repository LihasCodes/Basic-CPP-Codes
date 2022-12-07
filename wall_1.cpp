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
    double Wall(double a, double b) {
      double length ,height,area;
      a=length;
      b=height;
      
      cout<<"enter the length of the wall"<<endl;
      cin>>a;
      cout<<"enter the height of the wall"<<endl;
      cin>>b;
        area=a*b;
        cout<<"the area of the wall is"<<area<<endl;
    }

   /*  double calculateArea() {
      return length * height;
    } */

int main() {
  // create object and initialize data members
  double a;
  double b;
   Wall(a, b );
 // Wall wall2(8.5, 6.3);

 // cout << "Area of Wall 1: " <<  << endl;
 // cout << "Area of Wall 2: " << wall2.calculateArea();

  return 0;
}