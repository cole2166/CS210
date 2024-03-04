/*
Cole Schafer
CS-210
02/09/2024

*/

#include <iostream>
#include <string>
#include <iomanip>

#include "Input.h" //include the input header
#include "Calculate.h" //include the calculate header

using namespace std;

bool continue_to_run = true;

int main() {
	
	while (continue_to_run == true) { //loop whil continue_to_run is true so that user can try with other input values
		UserInput input1; 
		input1.printMenu(); //prompt for user input
		input1.printMenuWithInput(); //menu with the inputted info
		Calculate calc1;
		calc1.calculateBalanceWithoutMonthlyDeposit(input1.GetInitialInvestment(), input1.GetInterestRate(), input1.GetNumberOfYears()); //calculate with no monthly deposits
		calc1.balanceWithMonthlyDeposit(input1.GetInitialInvestment(), input1.GetMonthlyDeposit(), input1.GetInterestRate(), input1.GetNumberOfYears()); //calc with monthly deposits

		continue_to_run = input1.userContinue(); //ask user if they want to try again
	}
	cout << "Thank you for choosing AIRGEAD BANKING for all you banking needs!" << endl;

	return 0;
}