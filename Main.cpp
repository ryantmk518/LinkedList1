#include <iostream>
#include <cstring>
#include <String.h>
#include "Node.h"
#include "Student.h"

using namespace std;

void add(char* fname, char* lname, int id, float GPA);
void print(Node* next);

int main() {
  bool start = true;
  while (start == true) {
    char fname[99];
    char lname[99];
    float gpa;
    int ID;
    char q[3];
    cout << "Enter first name" << endl;
    cin.get(fname, 99);
    cin.get();
    cout << "Enter last name" << endl;
    cin.get(lname, 99);
    cin.get();
    cout << "Enter GPA" << endl;
    cin >> gpa;
    cin.get();
    cout << "Enter ID" << endl;
    cin >> ID;
    cin.get();
    add(fname, lname, ID, gpa);
  }
}

void add(char* fname, char* lname, int id, float gpa) {
  Student* null = NULL;
  Student* student = new Student(fname, lname, id, gpa);
  bool run = true;
  Node* head = NULL;
  Node* current = head;
  if (current == NULL) {
    head = new Node(null);
    head -> setStudent(student);
  }
  else {
    if (current -> getNext() != NULL) {
      run = false;
    }
    while (run == true) {
      current = current -> getNext();
    }
    current -> setNext(new Node(null));
    current -> getNext() -> setStudent(student);
  }
  print(head);
}

void print (Node* next) {
  if (next != NULL){
    cout << "Name: " << next -> getStudent() -> getfname() << " " << next->getStudent()->getlname()<<endl;
    cout << "GPA: " << next ->getStudent()->getGPA() << endl;
    cout << "ID: " << next->getStudent()->getID() << endl;
    print(next->getNext());
    cout << "\n" << endl;
  }
}
