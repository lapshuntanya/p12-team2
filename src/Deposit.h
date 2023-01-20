#include <iostream>
#include <utility>

class Deposit {
protected:
    std::string fullname_;
    float amount_;
public:
    Deposit() : fullname_("Unknown"), amount_(1) {}
    Deposit(std::string fullname, float amount) : fullname_(std::move(fullname)) { if(!setAmount(amount)) setAmount(1); }
    ~Deposit() { std::cout << "Delete Deposit\n"; }

    void setFullname(std::string fullname) { fullname_ = std::move(fullname); }
    bool setAmount(float amount) {if(amount <= 0) return false; amount_ = amount; return true; }

    std::string getFullname() const { return fullname_; }
    float getAmount() const { return amount_; }

    virtual float calcAmount(int months) const {
        for (int i = 0; i < months; i++) {
            amount_ * 1.05;
        }
    }
};