#include <bits/stdc++.h>
using namespace std;
using LL = long long;

// STORING THE MARKS OF THE STUDENTS IN A CLASS 
// { "16GAEC9021" : 97 }
// { "16GAEC9002" : 98 }
// { "16GAEC9001" : 90 }

// Internal Implementation of unordered_map is a HASH TABLE. 
// Time Complexity to add and access elements is O(1). 

int main() {
      // How to Declare an Unordered Map
      unordered_map<string, int> rollnoMarks; 

      // Add Element to the Unordered Map
      rollnoMarks["16GAEC9021"] = 97;
      rollnoMarks["16GAEC9002"] = 98;
      rollnoMarks["16GAEC9001"] = 90;

      // Access a Particular Element from Unordered the Map using the Key. O(1)
      cout << "MARKS OBTAINED BY 16GAEC9001 IS : " << rollnoMarks["16GAEC9001"] << endl;
      cout << "MARKS OBTAINED BY 16GAEC9021 IS : " << rollnoMarks["16GAEC9021"] << endl;

      // For Loop Over the Unordered Map : Normal and Auto Keyword
      cout << "USING NORMAL FOREACH LOOP - " << endl; 
      for (pair<string, int> p : rollnoMarks) {
            cout << p.first << " has marks : " << p.second << endl; 
      }

      cout << "USING THE AUTO KEYWORD : " << endl;
      for (auto a : rollnoMarks) {
            cout << a.first << " has marks : " << a.second << endl; 
      }

      // Check the Size of the Unordered Map
      cout << "SIZE OF UNORDERED MAP IS : " << rollnoMarks.size() << endl; 

      // Clearing the Unordered Map!
      // cout << "CLEARING THE ROLLMARKS : " << endl;
      // rollnoMarks.clear(); 
      cout << "SIZE OF UNORDERED MAP IS : " << rollnoMarks.size() << endl; 

      // Empty Check!
      if (rollnoMarks.empty()) {
            cout << "UNORDERED MAP IS EMPTY!" << endl; 
      } else {
            cout << "UNORDERED MAP IS NOT EMPTY!" << endl;
      }
}