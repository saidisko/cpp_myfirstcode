#include <iostream> 
using namespace std;
#include "Student.h"

student::student(int ID, string name, string surname, float FINAL_Score, float quiz_weight, float hw_weight, float final_weight){
    this->ID = ID;
    this->name = name;
    this->surname = surname; 
    this->FINAL_Score = FINAL_Score;
    this->quiz_weight = quiz_weight;
    this->hw_weight = hw_weight;
    this->final_weight = final_weight; 
}
//id
void student::setID(int ID){
    this->ID = ID;
}
int student::getID()const{
    return ID;
}
//final exam grade
void student::setFinalScore(float FINAL_Score){
    this->FINAL_Score = FINAL_Score;
}
float student::getFinalScore()const{
    return FINAL_Score;
}


float student::overallCourseScore(int ID, float FINAL_Score, float quiz_weight, float hw_weight, float final_weight){   //consider single student
    cout<<"Student name and Surname: "<<name<<" "<<surname<<endl;
    cout<<"Studnet ID: "<<ID<<endl; 
    cout<<endl;  
//Quiz
    float qz_sum = 0, qz_avg = 0;
    cout<<"Enter quiz grades: ";
    for(int i = 0; i<SIZE_qz; i++){
        cin>>quiz_scores[i];
            qz_sum = qz_sum + quiz_scores[i]; 
    }
    //quiz avarage
    qz_avg = qz_sum/SIZE_qz;

//Homework
    float hw_sum = 0, hw_avg = 0;
    cout<<"Enter homework grades: ";
    for(int i = 0; i<SIZE_hw; i++){
        cin>>hw_scores[i];
            hw_sum = hw_sum + hw_scores[i]; 
    }
    //homework avarage    
    hw_avg = hw_sum/SIZE_hw;
    //weihted final exam
    float weighted_final = FINAL_Score * final_weight;  
    //overall calculation
    float overl_result = qz_avg*quiz_weight + hw_avg*hw_weight + weighted_final;

    return overl_result; 
}