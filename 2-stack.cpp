#include <bits/stdc++.h>
using namespace std;
using LL = long long;

void checkEmpty(stack<int> &st) {
      if (st.empty()) {
            cout << "STACK IS EMPTY!" << endl; 
      } else {
            cout << "STACK IS NOT EMPTY!" << endl; 
      }
}

int main() {
      // How to Declare a Stack 
      stack<int> st; 

      // Pushing Elements in the Stack 
      st.push(10); 
      st.push(20); 
      st.push(30); 
      st.push(40); 

      // Top of the Stack 
      cout << "TOP OF THE STACK : " << st.top() << endl; 

      // Popping Elements from the Stack 
      cout << "POPPING THE ELEMENT FROM THE STACK!" << endl; 
      st.pop(); 
      cout << "TOP OF THE STACK : " << st.top() << endl; 
      
      // Size of the Stack 
      cout << "SIZE OF THE STACK IS : " << st.size() << endl; 
      st.pop(); 
      cout << "SIZE OF THE STACK IS : " << st.size() << endl; 

      // Check if the Stack is Empty!
      checkEmpty(st); 
      st.pop();
      st.pop();
      checkEmpty(st); 
}