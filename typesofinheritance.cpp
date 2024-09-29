#include<iostream>
using namespace std;

class human 
{
    protected:
    string name;
    int age;

    public:
    void work(){
        cout<<"I am working \n";
    }
};

class student :public human
{
  int roll_no,fees;

  public:
  student(string name,int age,int roll_no,int fees)
  {
    this->name=name;
    this->age=age;
    this->roll_no=roll_no;
    this->fees=fees;
  }
};
int main(){

    student A1("bhavesh",18,35,99);
    A1.work();
    
}