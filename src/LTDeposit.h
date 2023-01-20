#include <string>
#include <utility>
#include "Deposit.h"
#include "utils/MyException.h"

class LTDeposit : public Deposit {
public:
    LTDeposit() : Deposit() {}
    LTDeposit(std::string fullname, float amount) : Deposit(std::move(fullname), amount) {}
    ~LTDeposit() { std::cout << "Delete Deposit\n"; }

    float calcAmount(int months) const override {
        try {
            if(months < 0)
                throw MyException("Months can't be negative!\n");
        }
        catch (MyException& e) {
            std::cout << e.what();
        }

        for (int i = 0; i < months; i++) {
            amount_ * 1.08;
        }
    }
};