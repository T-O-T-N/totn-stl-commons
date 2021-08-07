#include <bits/stdc++.h>
using namespace std;
using LL = long long;

// {10, 20, 30, 40} s.end()  
int main() {
      // How to Declare a Set
      set<int> s; 
      
      // Insert an Element in Set
      s.insert(10); 
      s.insert(20); 
      s.insert(30); 
      s.insert(40); 
      s.insert(20); 
      s.insert(20); 
      s.insert(20); 
      s.insert(20); 

      // Size of the Set 
      cout << "SIZE OF THE SET IS : " << s.size() << endl; 

      // Find an Element in the Set 
      if (s.find(2000) == s.end()) {
            cout << "ELEMENT IS NOT PRESENT!" << endl; 
      } else {
            cout << "ELEMENT IS PRESENT!" << endl; 
      }
      // Count number of occurences of Element in Set
      cout << "OCCURENCES OF 20 IS : " << s.count(20) << endl;
      cout << "OCCURENCES OF 2000 IS : " << s.count(2000) << endl;

      // Clear the Set 
      s.clear(); 

      // Check for Empty Set
      if (s.empty()) {
            cout << "SET IS EMPTY!" << endl; 
      } else {
            cout << "SET IS NOT EMPTY!" << endl; 
            cout << "THE SET CONTAINS : " << s.size() << " NUMBER OF ELEMENTS!" << endl; 
      }
}