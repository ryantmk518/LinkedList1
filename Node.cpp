#include <iostream>
#include <cstring>
#include <String.h>
#include "Node.h"
#include "Student.h"

using namespace std;

Node::Node(Student* newstudent) {
  student = newstudent;
  next = NULL;
}

Node::~Node() {
  delete &student;
  next = NULL;
}

void Node::setStudent(Student* newstudent) {
  student = newstudent;
}

Student* Node::getStudent() {
  return student;
}

Node* Node::getNext() {
  return next;
}

void Node::setNext(Node* newnext){
  next = newnext;
}


