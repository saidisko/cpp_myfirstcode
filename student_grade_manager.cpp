#include <iostream>
using namespace std;

/*
This small project allows user to 
store students and their grades; calculate
the average grade and find the highest or
lowest onr. All results are displayed to user
through a simple menu system 
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

    //enter the student names
    string stud_names[stud_number],stud_name; 
    int i;
    for(i = 0; i < stud_number; i++){
        cout<<"Enter the student name: ";
        cin>>stud_name; 
        stud_names [i] = stud_name; 
    }

    //enter the student grades
    int j;
    int stud_grades[stud_number],stud_grade;
    for(j = 0; j < stud_number; j++){
        cout<<"Enter the student grade: ";
        cin>>stud_grade; 
        if(0 < stud_grade && stud_grade < 100){
            stud_grades [j] = stud_grade;
        }
        else{
            cout<<"Enter the valid grade: ";
            stud_grades [j] = stud_grade;
        }
         
    }

    //print the student names and grades
    cout<<stud_names[i]<<":"<<stud_grades[j]<<endl;




}                                              