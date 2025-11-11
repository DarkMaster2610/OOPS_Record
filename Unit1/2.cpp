#include<iostream>
using namespace std;
class student
{
    public:
    string name;
    int RollNo;
    int marks;
    void display()
    {
        cout<<"Name:"<<name<<endl;
        cout<<"Rollno:"<<RollNo<<endl;
        cout<<"Marks:"<<marks<<endl;
    }
    
};
int main()
{
    student s1,s2;
    s1.name="Rahul";
    s1.RollNo=1001;
    s1.marks=90;
    s2.name="Jay";
    s2.RollNo=1002;
    s2.marks=100;
    s1.display();
    s2.display();
    return 0;
}