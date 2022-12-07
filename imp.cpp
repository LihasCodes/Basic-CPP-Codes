#include<iostream>
#include<string>
using namespace std ;
class employee{
      string s;
       public:
       void bin(void);
       void checkbin(void);
       
     /*   private:
       int a , b , c;
       public:
       int d , e;
       void setdata(int a1 , int b1 , int c1);
       void getdata(){
        cout<<"the value of a is\n"<<a<<endl;
        cout<<"the value of b is\n"<<b<<endl;
        cout<<"the value of c is\n"<<c<<endl;
        cout<<"the value of d is\n"<<d<<endl;
        cout<<"the value of e is\n"<<e<<endl;
       } */
    };
/* void employee :: setdata(int a1 , int b1 , int c1){
        a=a1;
        b=b1;
        c=c1;
}
 */
   void employee :: bin(void){
    
    cout<<"enter the binary number\n";
    cin>>s;
   }
     void employee :: checkbin(void){
        for (int i = 0; i < s.length(); i++)
        {
            if (s.at(i)!='0' && s.at(i)!= '1')
            {
                cout<<"incorrect  binary format"<<endl;
            }
            else{
                cout<<"correct binary format"<<endl;
            }
            exit(0);
        }
        
     }
     int main(){
   /* class employee archit;
    archit.d=89;
    archit.e=105;
    archit.setdata(12,14,150);
    archit.getdata();
    */ 
   class employee archit;
    archit.bin();   
    archit.checkbin();
   
     
    return 0;
}