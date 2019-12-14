#ifndef STUDENT_H
#define STUDENT_H
#include <iostream>
#include <cstring>

//Student header

using namespace std;

class Student{
public:
  Student(char* sfname, char* slname, int ID, float GPA); //Initialize functions and variables
  ~Student();
  char* getfname();
  char* getlname();
  int getID();
  float getGPA();
private:
  int ID;
  float gpa;
  char fname[99];
  char lname[99];
};
#endif
