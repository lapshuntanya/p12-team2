#include <iostream>
using namespace std;
#include <string>

class LTDeposit
{
public:
    LTDeposit() { fullname = "Unknown"; amount = "0" }
    LTDeposit(string fullname, float amount) { this->fullname = fullname; this->amount = amount; }
    ~LTDeposit() { cout << "Delete LTDeposit\n"; }


    float calcAmount(int months) const override {
        for (int i = 0; i < months; i++) {
            amount * 1.08;
        }
    }
}
