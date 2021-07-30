#include <bits/stdc++.h>
using namespace std;
using LL = long long;

void printVector(vector<int> &vec) {
      if (vec.empty()) {
            cout << "Vector is Empty!" << endl; 
            return; 
      }
      cout << "Vector Now Is:" << endl; 
      for (int a : vec) {
            cout << a << " "; 
      }
      cout << endl; 
}

int main() {
      // How to Declare a Vector
      vector<int> vec; 

      // Add elements to the Vector
      vec.push_back(10); 
      vec.push_back(20); 
      vec.push_back(30); 
      printVector(vec); 

      // Checking for Empty Vector
      if (vec.empty()) {
            cout << "Vector is Empty!" << endl; 
      } else {
            cout << "Vector is Not Empty!" << endl; 
      }

      // Remove elements from the Vector
      vec.pop_back(); 
      vec.pop_back(); 
      printVector(vec); 

      // Size of the Vector
      cout << "SIZE of Vector is : " << vec.size() << endl; 
      cout << "CAPACITY of Vector is : " << vec.capacity() << endl; 
      cout << "MAX SIZE of Vector : " << vec.max_size() << endl; 

      // Clearing a Vector.
      vec.push_back(10); 
      vec.push_back(12321); 
      vec.push_back(123); 
      printVector(vec); 
      // vec.clear();
      // printVector(vec);  

      // Erasing a Particular Element
      vec.erase(vec.begin() + 2); 
      printVector(vec); 
}