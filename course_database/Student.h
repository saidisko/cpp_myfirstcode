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
    float hw_scores [SIZE_hw]; 
    float FINAL_Score; 
    float weight; 
    float quiz_grd; 
    float hw_grd;
   
public:
    student(int ID, std::string name, std::string surname, float quiz_grd, float hw_grd, float final_exam, float weight);      
    
    //setters
    void setQuizScores(float quiz_grd);             //set quiz grade 
    void setID(int ID);                             //set student ID
    void setHWScores(float hw_grd);                 //set homework grade
    void setFinalScore(float FINAL_Score);          //set final exam grade

    //getters
    int getQuizScores()const;                       //get quiz grades
    int setID()const;                               //get student ID
    int getHWScores()const;                         //get homework grade
    int getFinalScore()const;                       //get final exam grade

    void overallCourseScore(int ID, float quiz_grd, float hw_grd, float FINAL_Score, float weight); //calculate overall score of a student
};
    
#endif