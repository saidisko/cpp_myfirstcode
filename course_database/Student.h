#ifndef STUDENT_H       //prevent multiple inclusion
#define STUDENT_H
#define SIZE_qz 4 
#define SIZE_hw 3

class student{
private:
    int ID;
    std::string name;
    std::string surname;
    float quiz_scores[SIZE_qz];
    float hw_scores[SIZE_hw]; 
    float FINAL_Score; 
    float quiz_weight;
    float hw_weight;
    float final_weight; 
   
    
public:
    student(int ID, std::string name, std::string surname, float FINAL_Score, float quiz_weight, float hw_weight, float final_weight);      
    
    //setters
    void setID(int ID);                             //set student ID
    void setFinalScore(float FINAL_Score);          //set final exam grade

    //getters
    int getID()const;                               //get student ID
    float getFinalScore()const;                       //get final exam grade

    float overallCourseScore(int ID, float FINAL_Score, float quiz_weight, float hw_weight, float final_weight); //calculate overall score of a student
};
                
#endif