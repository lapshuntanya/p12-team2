#pragma once
#include <iostream>
#include <clocale>
#include <utility>
#include <vector>
#include "Deposit.h"

using namespace std;

class Bank
{
private:
	std::string title_;
    std::vector<Deposit> deposits_;
public:
    Bank() : title_("Super Bank"), deposits_() {}
    Bank(std::string title) : title_(std::move(title)), deposits_() {}

    std::string getTitle() const { return title_; }
	float getTotalAmount() const { float out = 0; for (const Deposit &deposit: deposits_) out+=deposit.getAmount(); }
	int getTotalDeposits() const { return deposits_.size(); }
    std::vector<Deposit> getDeposits() const { return deposits_; }

    void setTitle(std::string title) { title_ = std::move(title); }

    void addDeposit(const Deposit& deposit) {
        deposits_.emplace_back(deposit);
    }
    void removeDeposit(const std::string& fullname) {
        deposits_.erase(std::remove_if(deposits_.begin(), deposits_.end(), [fullname](const Deposit& dep) -> bool {return dep.getFullname() == fullname;}), deposits_.end());
    }
    const Deposit& findDeposit(const std::string& fullname) {
        return *(std::find_if(deposits_.begin(), deposits_.end(),[fullname](const Deposit& dep) -> bool {return dep.getFullname() == fullname;}));
    }
};