#include<iostream>
using namespace std;

class student
{
    private:
    string name;
    int age,roll_no;
    string grade;
    //   function getter and setter :
    public:

    void setname(string s)
    {
        name=s;
    }
     void setage(int x)
    {
        age=x;
    }
     void setroll_no(int n)
    {
        roll_no=n;
    }
     void setgrade(string s)
    {
        grade=s;
    }

    // function call  ;

    void getname()
    {
        cout<<name<<endl;
    }
    int getage()
    {
        cout<<age<<endl;
    }
    int getroll_no()
    {
        cout<<roll_no<<endl;
    }
    string getgrade(int pin)
    {
        if(pin==1234)
        return grade;

        return " ";
    }
    
};
int main(){

    student s1;
    s1.setname("bhavesh");
    s1.setage(18);
    s1.setroll_no(21);
    s1.setgrade("A+");

    s1.getname();
    
    s1.getage();

    s1.getroll_no();
    
    cout<<s1.getgrade(1234);
   
}