#include <iostream>
using namespace std;

/*
This small project allows user to 
store students and their grades; calculate
the average grade and find the highest or
lowest one. All results are displayed 
through a simple menu. 
*/

#define title_height 5
#define title_width 22
string title = "STUDENT GRADE MANAGER"; 


int main() {
// Display the title 
    for(int j = 0; j < title_height; j++){
        for(int i = 0; i < title_width; i++){
            if(j == 0 || j == 4){
                cout<<"-";          //upper and lower borders
            }
            else if(j == 2 && i == 0){
                cout<<title; 
                i = i + (title.length() - 1); // place i right after the title(skip title)
            }
            else
                cout<<"  ";         //space
        }
        cout<<endl; 
    }
    cout<<endl;
    cout<<endl;
    cout<<endl;

    //student number
    int stud_number = 0; 
    cout<<"Enter the number of students: ";
    cin>>stud_number; 

    //student names
    string stud_names[stud_number],stud_name; 

    //student grades
    float stud_grades[stud_number],stud_grade = 0;
    int grade_counter = 0; 

    for(int i = 0; i < stud_number; i++){
        cout<<"Enter student name: ";
        cin>>stud_name; 
        stud_names[i] = stud_name; 
    }

    //enter grades
    cout<<"Enter the student grades: "<<endl; 
    for(int i = 0; i < 100; i++){
       
        cin>>stud_grade;

        if(stud_grade <= 0 || stud_grade > 100){
            cout<<"You entered the wrong grade value, try again: ";
        }
        else if(0 < stud_grade && stud_grade <= 100){
            stud_grades[grade_counter] = stud_grade;
            grade_counter++;
        }
        if(grade_counter >= stud_number)
            break;
    }

    for(int i = 0; i < stud_number; i++)
        cout<<stud_names[i]<<": "<<stud_grades[i]<<endl; 




}                                              