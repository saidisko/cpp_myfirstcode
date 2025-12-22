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
    int FINAL_score; 

public:
    student(int ID, std::string name, std::string surname);      
    
    //setters
    void setQuizScores(int quiz_grd) const;     //set quiz grade 
    void setID(int ID) const;
    //getters
    int getQuizScores() const;                  //return quiz grade
    int setID() const;

    overallCourseScore();
};
    
#endif