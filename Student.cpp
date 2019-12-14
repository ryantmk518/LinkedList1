#include <iostream>
#include <cstring>
#include "Student.h"

using namespace std;

Student::Student(char* sfname, char* slname, int sID, float sGPA) {
  strcpy(fname, sfname);
  strcpy(lname, slname);
  ID = sID;
  gpa = sGPA;
}

Student::~Student() {
  delete &ID;
  delete &gpa;
  delete &lname;
  delete &fname;
}
char* Student::getfname() {
  return fname;
}

char* Student::getlname() {
  return lname;
}

int Student::getID() {
  return ID;
}

float Student::getGPA() {
  return gpa;
}



