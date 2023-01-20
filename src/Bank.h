#pragma once
#include <iostream>
#include <clocale>
#include <vector>
using namespace std;

class Bankk
{
private:
	char Title[50];
	float AllSum;
	int NOfDeposit;
public:
	Bankk() {
		AllSum = 0;
		NOfDeposit = 0;
	}
	Bankk(char title, float allsum, int nofdeposit) {
		Title[50] = title;
		AllSum = allsum;
		NOfDeposit = nofdeposit;
	}

	void setTitle(char title) {
		Title[50] = title;
	}
	char getTitle()const {
		return Title[50];
	}
	void setAllSum(float allsum) {
		AllSum = allsum;
	}
	float getAllSum()const {
		return AllSum;
	}
	void setNOfDeposit(int nofdeposit) {
		NOfDeposit = nofdeposit;
	}
	int getNofDeposit()const {
		return NOfDeposit;
	}
};