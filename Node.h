#include <iostream>
#include <cstring>
#include <String.h>
#include "Student.h"

//Node Header

using namespace std;

class Node{
public:
  Node(Student*);
  ~Node();
  void setStudent(Student* newstudent);
  int getStudent();
  void setNext(Node* newnext);
  Node* getNext();
private:
  Student* student;
  Node* next;
};
