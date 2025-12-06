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
                //for upper and lower borders
                cout<<"-";          
            }
            else if(j == 2 && i == 0){
                cout<<title; 
                // place i - right after the title(skip title)
                i = i + (title.length() - 1); 
            }
            else
                cout<<"  ";         
        }
        cout<<endl; 
    }
    cout<<endl;

    //student number
    int stud_number = 0; 
    cout<<"Enter the number of students: ";
    cin>>stud_number; 

    //student names
    string stud_names[stud_number],stud_name; 

    //student grades
    int stud_grades[stud_number],stud_grade = 0;
    int grade_counter = 0;      

    //other vatriables
    int user_choise, sum = 0,highest_grade = stud_grades[0], lowest_grade = stud_grades[0];

    //get the names from user
    for(int i = 0; i < stud_number; i++){
        cout<<"Enter the student name: ";
        cin>>stud_name; 
        stud_names[i] = stud_name; 
    }

    //get the grades from user
    //cout<<"Enter the student grade: "; 
    for(int i = 0; i < 100; i++){
        cout<<"Enter the student grade: ";
        cin>>stud_grade;

        if(stud_grade <= 0 || stud_grade > 100){
            cout<<"You entered the wrong grade value, try again: ";
        }
        // counter - array index that tells where to store each new grade
        else if(0 < stud_grade && stud_grade <= 100){                  
            stud_grades[grade_counter] = stud_grade;
            grade_counter++;
        }
        if(grade_counter >= stud_number)                               
            break;
    }


    cout<<endl;
   
cout<<"*** Menu ***"<<endl; 
cout<<endl; 
cout<<"1. Show all students"<<endl; 
cout<<"2. Show average grade"<<endl; 
cout<<"3. Show highest grade"<<endl; 
cout<<"4. Show lowest grade"<<endl;
cout<<"5. Exit"<<endl; 
cout<<"Your choice: "; 
cin>>user_choise; 

//Switch case
switch (user_choise)
{
    case 1: //Show all students                                               
        for(int i = 0; i < stud_number; i++){
    cout<<stud_names[i]<<": "<<stud_grades[i]<<endl; 
        }
    break; 

    case 2: //Show average grade
        for(int i = 0; i < stud_number; i++)
            sum = sum + stud_grades[i];  
    cout<<"Average grade is: "<<sum/stud_number<<endl;
    break;

    case 3: //Show highest grade
        for(int i = 0; i < stud_number; i++){
            if(stud_grades[i] > highest_grade){
                highest_grade = stud_grades[i]; 
            }
        }
    cout<<"Highest grade is: "<<highest_grade<<endl;
    break;

    case 4: //Show lowest grade
    for(int i = 0; i < stud_number; i++){
        if(stud_grades[i] < lowest_grade){
            lowest_grade = stud_grades[i]; 
        }
    }
    cout<<"Lowest grade is: "<<lowest_grade<<endl; 
    break;

    case 5: //Exit
        break;

    default:
    cout<<"Your choice is invalid: "; 
    break;
}
} 

                                              