
/*
Cole Schafer
CS-210
02/09/2024
*/

#ifndef CS210Project2_USERINPUT_H
#define CS210Project2_USERINPUT_H

#include <string>
#include <iostream>
#include <iomanip>

using namespace std;


class UserInput { //creat class UserInput
	public:
		void printMenu();
		void printMenuWithInput();
		void SetInitialInvestment(double initialInvestment);
		double GetInitialInvestment() const;
		void SetMonthlyDeposit(double monthlyDeposit);
		double GetMonthlyDeposit() const;
		void SetInterestRate(double interestRate);
		double GetInterestRate() const;
		void SetNumberOfYears(int numberOfYears);
		int GetNumberOfYears() const;
		bool userContinue();

	private:
		double m_initialInvestment;
		double m_monthlyDeposit;
		double m_interestRate;
		int m_numberOfYears;
};


#endif