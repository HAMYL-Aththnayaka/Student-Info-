#include<iostream>
using namespace std;
struct Student{
                string name;
                int age;
                double gpa;
              };

int main()
{

    int numOfStudent;
    cout<<"Enter number of student: ";
    cin>>numOfStudent;
    Student students[numOfStudent];

    for(int i=0; i<numOfStudent; i++)
    {
        cout<<"Enter the information of student "<<i+1<<":"<<endl;
        cout<<"Name :";
        cin>>students[i].name;

        cout<<"Age :";
        cin>>students[i].age;

        cout<<"GPA :";
        cin>>students[i].gpa;

    }
    for(int i=0; i<numOfStudent; i++)
    {
    cout<<"Information of the student "<<i+1<<":\n";
    cout<<"Name :"<<students[i].name<<endl;
    cout<<"Age :"<<students[i].age<<endl;
    cout<<"GPA :"<<students[i].gpa<<endl;
    }

return 0;
}
