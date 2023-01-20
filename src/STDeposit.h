#include <string>
#include <utility>
#include "Deposit.h"

class STDeposit : public Deposit {
public:
    STDeposit() : Deposit() {}
    STDeposit(std::string fullname, float amount) : Deposit(std::move(fullname), amount) {}
    ~STDeposit() { std::cout << "Delete Deposit\n"; }

    float calcAmount(int months) const override {
        try {
            if (months < 0)
                throw MyException("Months can't be negative!\n");
        }
        catch (MyException& e) {
            std::cout << e.what();
        }

        for (int i = 0; i < months; i++) {
            amount_ * 1.03;
        }
    }
};