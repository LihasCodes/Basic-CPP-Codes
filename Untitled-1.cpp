#include<iostream>
using namespace std;
class base{
  int data1;
  public:
  int data2;
  void setdata(){
    data1=50;
    data2=60;
  }
  int getdata1(){
    return data1;
  }
  int getdata2(){
    return data2;
  }
  
};
class derive : private base{
    public:
    int data3;
    void process(){
        setdata();
        data3=data2*getdata1();
    }
    void display(){
        cout<<"the value of data 1 is "<<getdata1()<<endl;
        cout<<"the value of data 2 is"<<data2<<endl;
        cout<<"the value of data 3 is"<<data3<<endl;
    }
};
int main(){
    class derive dr;
   // dr.setdata();
    dr.process();
    dr.display();
    return 0;
}