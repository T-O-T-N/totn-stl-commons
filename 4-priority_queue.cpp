#include <bits/stdc++.h>
using namespace std;
using LL = long long;

int main() {
      // How to Declare a PQ
      priority_queue<int> max_pq; 
      priority_queue<int, vector<int>, greater<int>> min_pq; 
      
      // Pushing Elements to the PQ 
      vector<int> vec = {100, 20, 1, 65, 23, 99}; 
      for (int a : vec) {
            max_pq.push(a); 
            min_pq.push(a); 
      }

      // Top Most Element of the PQ. 
      cout << "TOP ELEMENT IN THE MAX PQ IS : " << max_pq.top() << endl; 
      cout << "TOP ELEMENT IN THE MIN PQ IS : " << min_pq.top() << endl; 

      // Removing Element from the PQ 
      max_pq.pop(); 
      min_pq.pop();
      cout << "TOP ELEMENT IN THE MAX PQ IS : " << max_pq.top() << endl;
      cout << "TOP ELEMENT IN THE MIN PQ IS : " << min_pq.top() << endl;

      // Size of the PQ 
      max_pq.pop(); 
      max_pq.pop(); 
      cout << "SIZE OF MAX QUEUE IS : " << max_pq.size() << endl;
      cout << "SIZE OF MIN QUEUE IS : " << min_pq.size() << endl;

      // Check if the PQ is empty!
      max_pq.pop();
      max_pq.pop();
      max_pq.pop();
      if (max_pq.empty()) {
            cout << "MAX PQ IS EMPTY!" << endl; 
      } else {
            cout << "MAX PQ IS NOT EMPTY!" << endl; 
      }
}