#include "src/Bank.h"

int main() {
	Bank bank;
	bank.setTitle("Mega Bank");

	bank.addDeposit(new Deposit("Petrov Petya", -15));
	bank.addDeposit(new LTDeposit("Petrov Petya1", 1500));

	bank.addDeposit(new STDeposit("Petrov Vanya", 1000));

    printf("\"Petrov Petya1\" %s\n", (bank.findDeposit("Petrov Petya1") != nullptr) ? "found" : "not found");
    printf("\"Petrov Jenya\" %s\n", (bank.findDeposit("Petrov Jenya") != nullptr) ? "found" : "not found");

	bank.removeDeposit("Petrov Vanya");

    return 0;
}
