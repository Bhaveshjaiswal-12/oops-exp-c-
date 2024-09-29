#include<iostream>
using namespace std;
class customer
{
    string name;
    int account_no;
    int balance;

    public:
    // default constructor
    customer()
    {
        name="bhavesh";
        account_no=123;
        balance=10000;
    }

    // parameterized constructor 
     customer(string name,int account_no,int balance)
    {
        this->name= name;
        this->account_no=account_no;
        this->balance=balance; 
    }

    // constructor overloding
    customer(string a,int b)
    {
        name=a;
        account_no=b;
        balance=500000;
    }

    // inline constructor

//    inline customer(string a,int b,int c):name(a),account_no(b),balance(c)
//     {
        
//     }

    //  copy construction 

    customer (customer &b)
    {
        name=b.name;
        account_no=b.account_no;
        balance=b.balance;
    }
    void display()
    {
        cout<<name<<" "<<account_no<<" "<<balance<<endl;
    }

    

};
int main(){

    customer A1;
    customer A2("bhavesh",35,1000000);
    customer A3("bhavesh",50);
    A1.display();
    A2.display();
    A3.display();
    customer A4(A3);
    A4.display();
    
}