#include <iostream>
#include <cstring>
#include <String.h>
#include "Node.h"
#include "Student.h"

using namespace std;

void add(char* fname, char* lname, int id);
void print(Node* next);

Node* head = NULL;

int main() {
  
}

void add(char* fname, char* lname, int id) {
  Student* student;
  Node* current = head;
  if (current == NULL) {
    head = new Node();
    head->setValue(newvalue);
  }
  else {
    while (current->getNext() != NULL) {
      current = current->getNext();
    }
    current->setNext(new Node());
    current->getNext()->setValue(newvalue);
  }
}

void print (Node* next) {
  if (next == head) {
    cout << "list: ";
  }
  if (next != NULL){
    cout << next->getValue() << " ";
    print(next->getNext());
  }
}
