#include <bits/stdc++.h>
using namespace std;
using LL = long long;

// STORING NUMBERS AND NAMES TOGETHER 
// { 100 : "ABHISHEK KUMAR RAI" }
// { 101 : "NAVEEN" }
// { 102 : "JERRY" }
// { 103 : "RAM" }

// Internal Implementation of map is a SELF BALANCING BINARY SEARCH TREE.
// Specifically - RB Trees which are called Red Black Trees! 

int main() {
      // How to Declare an Map
      map<int, string> numberToName; 

      // Add Element to the Map
      numberToName[100] = "ABHISHEK KUMAR RAI"; 
      numberToName.insert({101, "NAVEEN"}); 
      numberToName.insert(make_pair(102, "JERRY"));
      numberToName[103] = "RAM";

      // Access a Particular Element from the Map using the Key. 
      cout << "101 IS : " << numberToName[101] << endl;
      cout << "100 IS : " << numberToName[100] << endl;
      cout << "102 IS : " << numberToName[102] << endl;
      cout << "103 IS : " << numberToName[103] << endl;

      // For Loop Over the Map : Normal and Auto Keyword 
      cout << "USING NORMAL FOREACH LOOP : " << endl; 
      for (pair<int, string> p : numberToName) {
            cout << p.first << " is " << p.second << endl; 
      }

      cout << "USING AUTO KEYWORD : " << endl; 
      for (auto a : numberToName) {
            cout << a.first << " is " << a.second << endl; 
      }

      // Check the Size of the Map
      cout << "SIZE OF MAP IS : " << numberToName.size() << endl; 

      // Clearing the Map!
      // numberToName.clear(); 
      // cout << "SIZE OF MAP AFTER CLEAR IS : " << numberToName.size() << endl; 

      // Empty Check!
      if (numberToName.empty()) {
            cout << "MAP IS EMPTY" << endl; 
      } else {
            cout << "MAP IS NOT EMPTY!" << endl; 
            cout << "MAP HAS : " << numberToName.size() << " ELEMENTS " << endl; 
      }
}