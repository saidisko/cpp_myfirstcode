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
//Grade manager function declaration  
int grade_manager(int no_stud,string stud_names[], int stud_grades[]); 

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

//Number of students
int no_stud = 0; 
cout<<"Enter number of students: ";
cin>>no_stud; 

//student names
string stud_names[no_stud];
string stud_name; 

//student grades
int stud_grades[no_stud];
int stud_grade = 0;
int grade_counter = 0;      

//get names from user
for(int i = 0; i < no_stud; i++){
    cout<<"Enter student name: ";
    cin>>stud_name; 
    stud_names[i] = stud_name; 
}

//get grades from user 
cout<<"Enter student grade: ";
for(int i = 0; i < 100; i++){
    cin>>stud_grade;

    if(stud_grade <= 0 || stud_grade > 100){
        cout<<"You entered an invalid grade value. Please try again: ";
    }
    // counter - array index that tells where to store each new grade
    else if(0 < stud_grade && stud_grade <= 100){                  
        stud_grades[grade_counter] = stud_grade;
        grade_counter++;
    }
    if(grade_counter >= no_stud)                               
        break;
}
cout<<endl;

 //function call 
 int function_return = grade_manager(no_stud,stud_names,stud_grades);
 while(function_return != 5){
    cout<<"Enter your choice again: "<<endl;
    function_return = grade_manager(no_stud,stud_names,stud_grades); 
 }

}              

//Grade manager function definition 
int grade_manager(int no_stud,string stud_names[], int stud_grades[]){

    int stud_grades_f[no_stud]; 
    //copy int array from main
    for(int i = 0; i < no_stud; i++){
        stud_grades_f[i] = stud_grades[i];
    }

    string stud_names_f[no_stud]; 
    //copy string array from main
    for(int i = 0; i < no_stud; i++){
        stud_names_f[i] = stud_names[i];
    }

//vatriables
    int sum = 0;
    int user_choice = 0; 
    int highest_grade = stud_grades_f[0]; 
    int lowest_grade = stud_grades_f[0];

cout<<"*** Menu ***"<<endl; 
cout<<"1. Show all students"<<endl; 
cout<<"2. Show average grade"<<endl; 
cout<<"3. Show highest grade"<<endl; 
cout<<"4. Show lowest grade"<<endl;
cout<<"5. Exit"<<endl; 
cout<<"Enter your choice: "; 
cin>>user_choice; 
//cout<<endl;

//Switch case
switch (user_choice){

case 1: //Show all students                                               
    for(int i = 0; i < no_stud; i++){
cout<<stud_names_f[i]<<": "<<stud_grades_f[i]<<endl; 
    }   
    cout<<endl;
break; 

case 2: //Show average grade
    for(int i = 0; i < no_stud; i++)
        sum = sum + stud_grades_f[i];  
cout<<"Average grade is: "<<sum/no_stud<<endl;
cout<<endl;
break;

case 3: //Show highest grade
    for(int i = 0; i < no_stud; i++){
        if(stud_grades_f[i] > highest_grade){
            highest_grade = stud_grades_f[i]; 
        }
    }
cout<<"Highest grade is: "<<highest_grade<<endl;
cout<<endl;
break;

case 4: //Show lowest grade
for(int i = 0; i < no_stud; i++){
    if(stud_grades_f[i] < lowest_grade){
        lowest_grade = stud_grades_f[i]; 
    }
}
cout<<"Lowest grade is: "<<lowest_grade<<endl; 
cout<<endl;
break;

case 5: 
    break;

default:
cout<<"Your choice is invalid: "; 
cout<<endl;
break;
}
    return user_choice; 
}