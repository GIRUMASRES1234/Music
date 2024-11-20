#include<iostream>
#include<string>
using namespace std;
struct Department{
    string name;
    string shortName;
};
struct Course {
string name;
string code;
};
struct Student{
    string id;
    string firstName;
    string lastName;
    Department department;
    Course *courses;
    float *scores,numOfStudent;

};
int main(){
Student *Students;
Course *Courses;
Department department;
int numOfCourses;
//fetchiin the neccessary information from the user
cout<<"how many students do you wish to register\n";
cin>>numOfSudents;
cout<<"what the name your department\n ";
getline(cin,department.Name);
cout<<"what is the short name for\""<<
  department.name<<"\":\n";
  getline(cin,department.shortName);
  cout<<"how many courses are there in \""<<
  department.Name<<"\"department:\n";
  cin>>numOfCourses;
  student = new Student[numOfStudent];
  //enter coures information
  for(int i=0,;i<numOfCourses;i++){
    cout<<"enter the name "<<(i+1)<<"course;\n";
    getline(cin,Courses[i].Name);
    cout<<"enter the code for"
  }
  //fetching each student information
  for(int i=0;i<numOfStudent;i++){
    cout<<"enter the fist name of the "<<
    (i+1)<<"students:\n";
    getline(cin,student[i.id];
    cout<<"enter the first name of the "<
    (i+1)<<"student:\n";
    getline(cin,student.firstName);
    cout<<"enter the last name "<<
    (i+1)<<"student:\n";
    getline(cin,student.lastNmae);
    students[i].department=department;
    student[i].courses=courses;
    //fetchinh the score of current student
    for(int j=0;j<numOfcourses)
  }

    return 0;
}