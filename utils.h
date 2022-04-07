#include "vector"
using namespace std;
#include <iostream>
void print(vector <int> const &a) {

   cout << "[";
   if(a.size() == 1){
      cout << a[0];
   }
   else{
      for(int i=0; i < a.size(); i++)
         if(i>0){
            cout << "," << a[i];
         }
         else{
            cout << a[i];
         }
         
         
   }
   cout << "]" << endl;
}

void print(vector<vector<int>> const &a) {
   for(int i=0; i < a.size(); i++){
      if(i == 0){
         cout << "[";
      }
      
      for(int j=0; j<a[i].size(); j++){
         if(j>0){
            cout << "," << a[i][j];
         }
         else{
            cout << "[" << a[i][j];
         }
      }
      if(i + 1 == a.size()){
         cout << "]";
      }
      else{
         cout << "]"<< ",";
      }
      
   }
   cout << "]" << endl;
}