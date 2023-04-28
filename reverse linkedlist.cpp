#include<stdio.h>
using namespace std;
struct Node {
   int data;
   struct Node* next;
   Node(int data) {
      this->data = data;
      next = NULL;
   }
};
struct LinkedList {
   Node* head;
   LinkedList() { head = NULL; }
   
   void reverse() {
      auto curr = head; 
      Node* prev = NULL; 
      stack<Node *> s;
      while(curr) {
         s.push(curr);
         curr = curr -> next;
      }
      prev = s.top();
      head = prev;
      s.pop();
      while(!s.empty()) {
         auto temp = s.top();
         s.pop();
         prev -> next = temp;
         prev = temp;
      }
      prev -> next = NULL;
   }
   void print() {
      struct Node* temp = head;
      while (temp != NULL) {
         cout << temp->data << " ";
         temp = temp->next;
      }
   }
   void push(int data) {
      Node* temp = new Node(data);
      temp->next = head;
      head = temp;
   }
};
int main() {
   LinkedList list;
   list.push(20);
   list.push(4);
   list.push(15);
   list.push(85);
   list.print();
   list.reverse();
   cout << "";
   list.print();
}
