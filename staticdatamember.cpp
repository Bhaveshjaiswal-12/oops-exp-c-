#include<iostream>
using namespace std;

class customer
{
   string name;
   int account_no;
   int balance;
   static int total_customer;
   static int total_balance;
   
   public:
   customer(string name,int account_no,int balance)
   {
      this->name=name;
      this->account_no=account_no;
      this->balance=balance;
      total_customer++;
      total_balance+=balance;
   }
    

    static void accesStatic()
    {
        cout<<"Total no. of customer is :"<<total_customer<<endl;
        cout<<"Total balance is :"<<total_balance<<endl;
    }
    
    void diposite(int amount)
    {
        if(amount>0)
        {
            balance+=amount;
            total_balance+=amount;
        }
    }
    void withdraw(int amount)
    {
        if(amount>0 && amount<balance)
        {
            balance-=amount;
            total_balance-=amount;
        }
    }

   void display()
   {
    cout<<name<<" "<<account_no<<" "<<balance<<" "<<total_customer<<endl;
   }


};

int customer::total_customer=0;
int customer::total_balance=0;

int main()
{
    customer A1("bhavesh",1,5500000);
    customer A2("bhavya",2,4500000);
    A1.diposite(500);
    A2.withdraw(5000);
    customer::accesStatic();
    
}