#include<iostream>
using namespace std;
class person
{
    protected:
    string name;

    public:

    void introduce()
    {
        cout<<"my name is "<<name <<endl;
    }
};

class employee:public person
{
   protected:
   int salary;

   public:

   void income()
   {
    cout<<"my monthly income is "<<salary<<endl;
   }
};

class manager:public employee
{
    protected:
    string department;

    public:
    manager(string name,int salary ,string department)
    {
        this->name=name;
        this->salary=salary;
        this->department=department;
    };

    void work()
    {
        cout<<"my work is "<<department<<endl;
    }

    void display()
    {
        cout<<name<<" "<<salary<<" "<<department<<endl;
    }
};

int main()
{
    manager A1("bhavesh",500000,"SDE");
    A1.work(); 
    A1.display();
}