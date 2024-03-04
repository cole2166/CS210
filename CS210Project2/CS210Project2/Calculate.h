/*
Cole Schafer
CS-210
02/09/2024

*/

#ifndef CS210Project2_CALCULATE_H
#define CS210Project2_CALCULATE_H

#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

class Calculate { //class to calculate interest
    public:
        void printDetails(int year, double yearEndBalance, double interestEarned);
        void calculateBalanceWithoutMonthlyDeposit(double initialInvestment, double interestRate, int numberOfYears);
        void balanceWithMonthlyDeposit(double initialInvestment, double monthlyDeposit, double interestRate, int numberOfYears);

    private:
        int year;
        double yearEndBalance;
        double interestEarned;
        double initialInvestment;
        double interestRate;
        double numberOfYears;
        double monthlyDeposit;

};





#endif
