#include <bits/stdc++.h>
using namespace std;
using LL = long long;

//    

void printList(list<int> &ls) {
      for (int a : ls) {
            cout << a << " "; 
      }
      cout << endl; 
}

int main() {
      // How to Declare a List
      list<int> ls; 

      // Pushing Back 
      ls.push_back(10); 
      ls.push_back(20); 
      printList(ls); 

      // Pushing Front 
      ls.push_front(30); 
      ls.push_front(100); 
      ls.push_front(2300); 
      printList(ls); 

      // Popping Back 
      ls.pop_back(); 
      printList(ls); 

      // Popping Front 
      ls.pop_front(); 
      printList(ls); 

      // Access Front Element 
      cout << "Front Element in the List is : " << ls.front() << endl; 

      // Access Back Element 
      cout << "Back Element in the List is : " << ls.back() << endl; 

      // Size of the List 
      cout << "Size of the List is : " << ls.size() << endl; 

      ls.pop_back(); 
      ls.pop_front(); 
      ls.pop_back(); 
      // Check if the List is Empty
      if (ls.empty()) {
            cout << "List is Empty!" << endl; 
      } else {
            cout << "List is Not Empty!" << endl; 
      }
}

