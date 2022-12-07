#include<iostream>
#include<vector>
using namespace std;


  void display(vector<int> &v){
    for (int i = 0; i < v.size(); i++)
    {
        cout<<v[i]<<" "<<endl;
         cout<<v[i]<<" ";
    }
    
  }
int main(){
    vector<int> v1;
    int size,element;
    cout<<"enter the size of the vector"<<endl;
    cin>>size;
    for (int i = 0; i < size; i++)
    {
        cout<<"enter the number of the vectors"<<endl;
        cin>>element;
        v1.push_back(element);
       // display();
    }
     //display(v1);
     vector<int> :: iterator iter=v1.begin();
     v1.insert(iter,5023);
   // display(v1);
     v1.pop_back();
     display(v1);
    return 0;
}