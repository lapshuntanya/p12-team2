#include <iostream>
using namespace std;
#include <string>

class Deposit
{
protected:
    string fullname;
    float amount;

public:
    Deposit() { fullname = "Unknown"; amount = "0" }
    Deposit(string fullname, float amount) { this->fullname = fullname; this->amount = amount; }
    ~Deposit() { cout << "Delete Deposit\n"; }

    void setFullname(string fullname) { this->fullname = fullname; }
    void setAmount(float amount) {this->amount = amount; }

    string getFullname() const { return fullname; }
    string getAmount() const { return amount; }

    virtual float calcAmount(int months) const { 
        for (int i = 0; i < months; i++) {
            amount * 1.03;
        }
    }
}
