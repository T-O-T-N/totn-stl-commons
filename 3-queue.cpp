#include <bits/stdc++.h>
using namespace std;
using LL = long long;

int main() {
      // How to Declare a Queue
      queue<int> q; 

      // Add Element to the Queue
      q.push(10); 
      q.push(20); 
      q.push(30); 
      q.push(40); 

      // Access the Front Element of the Queue
      cout << "FRONT ELEMENT OF THE QUEUE IS : " << q.front() << endl;

      // Access the BACK Element of the Queue
      cout << "BACK ELEMENT OF THE QUEUE IS : " << q.back() << endl;

      // Remove element from the Queue
      q.pop(); 
      cout << "FRONT ELEMENT AFTER THE POP IS : " << q.front() << endl; 

      // Check if the Queue is Empty
      if (q.empty()) {
            cout << "QUEUE IS EMPTY!" << endl; 
      } else {
            cout << "QUEUE IS NOT EMPTY!" << endl; 
      }

      // Check the Size of the Queue 
      cout << "SIZE OF THE QUEUE IS : " << q.size() << endl; 
}
