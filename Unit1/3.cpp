#include<iostream>
using namespace std;
class Bank
{
    public:
    string name;
    int Accno;
    int balance;
    void display()
    {
        cout<<"Name:"<<name<<endl;
        cout<<"Account no:"<<Accno<<endl;
        cout<<"Balance:"<<balance<<endl;
    }
    
};
int main()
{
    Bank s1,s2;
    s1.name="Ravi";
    s1.Accno=1001;
    s1.balance=9000000;
    s2.name="Jay";
    s2.Accno=1002;
    s2.balance=1000000;
    s1.display();
    s2.display();
    return 0;
}
