/*
Cole Schafer
CS-210
02/09/2024

*/

#include <iostream>
#include <string>
#include <iomanip>

#include "Input.h"
#include "Calculate.h"

using namespace std;




void Calculate::printDetails(int year, double yearEndBalance, double interestEarned) { 
    cout << year << fixed << setprecision(2) << "\t\t" << yearEndBalance << "\t\t" << interestEarned << endl;
}



void Calculate::calculateBalanceWithoutMonthlyDeposit(double initialInvestment, double interestRate, int numberOfYears) { //calculations with no monthly deposits
    double balance = initialInvestment;
    double monthlyInterestRate = interestRate / (double)100 / (double)12;
    cout << "   Balance and Interest Without Additional Monthly Deposits   " << endl;
    cout << "==============================================================" << endl;
    cout << "Year \t\tYear End Balance \t\tYear End Earned Interest" << endl;
    cout << "--------------------------------------------------------------" << endl;
    for (int i = 1; i <= numberOfYears; ++i) {
        double yearEndInterest = 0.00;
        for (int j = 1; j <= 12; ++j) { //monthly compounding
            double monthlyInterest = balance * monthlyInterestRate;
            balance = balance + monthlyInterest;
            yearEndInterest += monthlyInterest;
        }
        printDetails(i, balance, yearEndInterest);
    }
    cout << endl;
}


void Calculate::balanceWithMonthlyDeposit(double initialInvestment, double monthlyDeposit, double interestRate, int numberOfYears) { //calcualtions with monthly deposits
    double balance = initialInvestment;
    double monthlyInterestRate = interestRate / (double)100 / (double)12;
    double monthlyInterest;
    cout << "    Balance and Interest With Additional Monthly Deposits     " << endl;
    cout << "==============================================================" << endl;
    cout << "Year \t\tYear End Balance \t\tYear End Earned Interest" << endl;
    cout << "--------------------------------------------------------------" << endl;
    for (int i = 1; i <= numberOfYears; ++i) {
        double yearEndInterest = 0.00;
        for (int j = 1; j <= 12; ++j) { //monthly compounding
            balance = balance + monthlyDeposit;
            monthlyInterest = balance * monthlyInterestRate;
            balance = balance + monthlyInterest;
            yearEndInterest += monthlyInterest;
        }
        printDetails(i, balance, yearEndInterest);
    }
    cout << endl;
}

