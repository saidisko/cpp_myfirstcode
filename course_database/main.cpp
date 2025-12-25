#include <iostream>
#include "Student.cpp"
using namespace std;


int main(){
  
  student student_object(1787357,"Said","Kibarov",64,0.20,0.40,0.40);
  cout<<student_object.overallCourseScore(1787357,64,0.20,0.40,0.40);
}