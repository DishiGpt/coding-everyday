#include <iostream>
using namespace std;

class bank_account{
    private :
    float balance;

    public:
    void deposit(float dep)
    {
        balance=balance+dep;
        cout<<"balance now is : "<<balance<<endl;
    }

    void withdraw(float with)
    {
        balance=balance-with;
        cout<<"balance now is : "<<balance<<endl;
    }

    bank_account(float bal)
    {
        balance=bal;
        cout<<"balance now set to : "<<balance<<endl;
    }

    ~bank_account()
        {
            cout<<"destructor called balance empty"<<endl;
        }
    

};

int main()
{
    bank_account balance1(0);
    float val;
    cout<<"enter the amount you wish to deposit : "<<endl;
    balance1.deposit(val);
    cout<<"enter the amount you wish to withdraw : "<<endl;
    balance1.withdraw(val);
    return 0;
    
} 