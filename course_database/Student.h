#ifndef STUDENT_H       //prevent multiple inclusion
#define STUDENT_H
#define SIZE_qz 4 
#define SIZE_hw 3

class student{
private:
    int ID;
    std::string name;
    std::string surname;
    int quiz_scores[SIZE_qz];
    int hw_scores [SIZE_hw]; 
    int FINAL_Score; 

public:
    student(int ID, std::string name, std::string surname);      
    
    //setters
    void setQuizScores(int quiz_grd);           //set quiz grade 
    void setID(int ID);                         //set student ID
    void setHWScores(int hw_grd);               //set homework grade
    void setFinalScore(int final_exam);         //set final exam grade

    //getters
    int getQuizScores()const;                   //get quiz grades
    int setID()const;                           //get student ID
    int getHWScores()const;                     //get homework grade
    int getFinalScore()const;                   //get final exam grade

    overallCourseScore();                       //calculates overall score of a student
};
    
#endif