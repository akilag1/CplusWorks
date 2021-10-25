#include <iostream>
#include <vector>
using namespace std;
int main()
{       
   vector<int> vector1;
   vector<int> vector2;
   
   vector1.push_back(10);
   vector1.push_back(20);
   
   cout<<"First elment of vector 1: "<<vector1.at(0)<<endl;
   cout<<"Second elment of vector 1: "<<vector1.at(1)<<endl;
   cout<<"Size of vector 1: "<<vector1.size()<<endl;
   cout<<"\n"<<endl;
   
   vector2.push_back(100);
   vector2.push_back(200);
   
   cout<<"First elment of vector 2: "<<vector2.at(0)<<endl;
   cout<<"Second elment of vector 2: "<<vector2.at(1)<<endl;
   cout<<"Size of vector 2: "<<vector2.size()<<endl;
   cout<<"\n"<<endl;
   
   vector<vector<int>> vector_2d;
   
   vector_2d.push_back(vector1);
   vector_2d.push_back(vector2);
   
   cout<< "Vector_2d"<<endl;
   cout<<vector_2d.at(0).at(0)<<endl;
   vector_2d.at(0).at(0)=1000;
   cout<<"\n"<<endl;
   cout<<vector_2d.at(0).at(0)<<endl;
}
