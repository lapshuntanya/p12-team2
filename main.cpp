#include "src/Bank.h"

int main() {
	Bank bank;
	bank.setTitle("Mega Bank")

	bank.addDeposit(new LTDeposit("Petrov Petya", -15));

	bank.addDeposit(new LTDeposit());

	bank.addDeposit(new LTDeposit("Petrov Petya", 1500));

	bank.addDeposit(new STDeposit("Petrov Petya", 1000));
	
	bank.addDeposit(new STDeposit());

	bank.findDeposit("Petrov Petya1");

	bank.findDeposit("Petrov Petya");
	

    return 0;
}
