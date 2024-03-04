/*
Cole Schafer
CS-210
02/09/2024

*/

#include <iostream>
#include <string>
#include <iomanip>
#include <conio.h>
#include "Input.h"
using namespace std;

//accessors and mutators for variables needed from user input

void UserInput::SetInitialInvestment(double m_initialInvestment) {
	this->m_initialInvestment = m_initialInvestment;
}
double UserInput::GetInitialInvestment() const {
	return m_initialInvestment;
}
void UserInput::SetMonthlyDeposit(double m_monthlyDeposit) {
	this->m_monthlyDeposit = m_monthlyDeposit;
}
double UserInput::GetMonthlyDeposit() const {
	return m_monthlyDeposit;
}
void UserInput::SetInterestRate(double m_interestRate) {
	this->m_interestRate = m_interestRate;
}
double UserInput::GetInterestRate() const {
	return m_interestRate;
}
void UserInput::SetNumberOfYears(int m_numberOfYears) {
	this->m_numberOfYears = m_numberOfYears;
}
int UserInput::GetNumberOfYears() const {
	return m_numberOfYears;
}

void UserInput::printMenu() { //menu to prompt user input
	cout << "**********************************" << endl;
	cout << "*********** Data Input ***********" << endl;
	cout << "Initial Investment Amount: ";
	cin >> m_initialInvestment;
	cout << "Monthly Deposit: ";
	cin >> m_monthlyDeposit;
	cout << "Annual Interest: ";
	cin >> m_interestRate;
	cout << "Number of Years: ";
	cin >> m_numberOfYears;
	cout << "Press any key to continue . . ." << endl;
	_getch();		
}

void UserInput::printMenuWithInput() { //to print menu containing what the user input
	cout << "**********************************" << endl;
	cout << "*********** Data Input ***********" << endl;
	cout << "Initial Investment Amount: $" << GetInitialInvestment() << endl;
	cout << "Monthly Deposit: $" << GetMonthlyDeposit() << endl;
	cout << "Annual Interst: %" << GetInterestRate() << endl;
	cout << "Number of Years: " << GetNumberOfYears() << endl;
	cout << "Press any key to continue . . ." << endl;
	_getch();
}

bool UserInput::userContinue() { //to ask user if they want to try with different input numbers
	char choice;

	while (true) {
		cout << "Would you like to input new data and test again? (Y/N)";
		cin >> choice;

		if (choice == 'y' || choice == 'Y') {
			system("cls");
			return true;
			break;
		}
		else if (choice == 'n' || choice == 'N') {
			system("cls");
			return false;
			break;
		}
		else {
			system("cls");
			cout << "Invalid entry...Please try again." << endl;
			continue;
		}
	}
}