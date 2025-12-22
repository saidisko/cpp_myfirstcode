#include <iostream> 
using namespace std;
#include "Student.h"

student::student(int ID, string name, string surname, float quiz_grd, float hw_grd, float FINAL_Score, float weight){
    this->ID = ID;
    this->name = name;
    this->surname = surname; 
    this->quiz_grd = quiz_grd;
    this->hw_grd = hw_grd;
    this->FINAL_Score = FINAL_Score;
    this->weight = weight; 
}
//setters 