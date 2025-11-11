

#include<iostream>
using namespace std;
class laptop
{
    public:
    string brand;
    string processor;
    int price;
    void display()
    {
        cout<<"Brand:"<<brand<<endl;
        cout<<"Processor:"<<processor<<endl;
        cout<<"Price:"<<price<<endl;
    }
      
      
};
int main()
{
    laptop l1,l2;
    l1.brand="Lenovo";
    l1.processor="Intel i5";
    l1.price=30000;
    l2.brand="Lenovo";
    l2.processor="Intel i7";
    l2.price=40000;   
    l1.display();
    l2.display();
    return 0;
}
