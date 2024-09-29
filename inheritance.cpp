#include<iostream>
using namespace std;

class human
{
    string regligion,colour;

    public:
    string name;
    int age,weight;

};

class student:protected human
{
    private:
    int roll_no,fees;

    public:
    
    student(string name,int age,int weight,int roll_no,int fees)
    {

        this->name=name;
        this->age=age;
        this->weight=weight;
        this->roll_no=roll_no;
        this->fees=fees;
    }

    void display()
    {
        cout<<"name is"<<name<<" "<<"age is"<<age<<" "
        <<"weight is "<<weight<<" "<<"roll no  is"<<roll_no<<" "<<"fees is "<<fees;
    }
};

class teacher: public human 
{
   int salary, experience;

};

int main()
{
    student A("bhavesh",18,55,35,200000);
    A.display();
    teacher b;
    b.name="mohit";
   
}