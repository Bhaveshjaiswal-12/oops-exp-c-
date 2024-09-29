#include<iostream>
using namespace std;

class student
{
    public:
    string name;
    int age,roll_no;
    string grade;
};
int main(){

    student *s = new student ;

    (*s).name="bhavesh";
    (*s).age=10;
    (*s).grade="A+";

    cout<<s->name<<endl;
    
}