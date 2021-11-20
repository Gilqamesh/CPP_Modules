#include "Account.hpp"
#include <iostream>
#include <time.h>

int Account::_nbAccounts = 0;
int Account::_totalAmount = 0;
int Account::_totalNbDeposits = 0;
int Account::_totalNbWithdrawals = 0;


Account::Account(int initial_deposit)
: _accountIndex(_nbAccounts++), _amount(initial_deposit),
_nbDeposits(0), _nbWithdrawals(0)
{
	_displayTimestamp();
	std::cout << "index:" << _accountIndex
	<< ";amount:" << checkAmount()
	<< ";created" << std::endl;
	_totalAmount += initial_deposit;
}

Account::Account(void)
: _accountIndex(_nbAccounts++), _amount(0),
_nbDeposits(0), _nbWithdrawals(0)
{
	_displayTimestamp();
	std::cout << "index:" << _accountIndex
	<< ";amount:" << checkAmount()
	<< ";created" << std::endl;
}

Account::~Account(void)
{
	_displayTimestamp();
	std::cout << "index:" << _accountIndex
	<< ";amount:" << checkAmount()
	<< ";closed" << std::endl;
}

void Account::makeDeposit(int deposit)
{
	_displayTimestamp();
	std::cout << "index:" << _accountIndex
	<< ";p_amount:" << checkAmount()
	<< ";deposit:" << deposit;
	++_nbDeposits;
	++_totalNbDeposits;
	_amount += deposit;
	_totalAmount += deposit;
	std::cout << ";amount:" << checkAmount()
	<< ";nb_deposits:" << _nbDeposits << std::endl;
}

bool Account::makeWithdrawal(int withdrawal)
{
	_displayTimestamp();
	std::cout << "index:" << _accountIndex
	<< ";p_amount:" << checkAmount()
	<< ";withdrawal:";
	if (_amount < withdrawal)
	{
		std::cout << "refused" << std::endl;
		return (false);
	}
	_amount -= withdrawal;
	_totalAmount -= withdrawal;
	++_nbWithdrawals;
	++_totalNbWithdrawals;
	std::cout << withdrawal
	<< ";amount:" << checkAmount()
	<< ";nb_withdrawals:" << _nbWithdrawals << std::endl;
	return (true);
}

int Account::checkAmount(void) const
{
	return (_amount);
}

void Account::displayStatus(void) const
{
	_displayTimestamp();
	std::cout << "index:" << _accountIndex << ";"
	<< "amount:" << _amount << ";"
	<< "deposits:" << _nbDeposits << ";"
	<< "withdrawals:" << _nbWithdrawals
	<< std::endl;
}

int Account::getNbAccounts(void)
{
	return (_nbAccounts);
}

int Account::getTotalAmount(void)
{
	return (_totalAmount);
}

int Account::getNbDeposits(void)
{
	return (_totalNbDeposits);
}

int Account::getNbWithdrawals(void)
{
	return (_totalNbWithdrawals);
}

void Account::displayAccountsInfos(void)
{
	_displayTimestamp();
	std::cout << "accounts:" << getNbAccounts()
	<< ";total:" << getTotalAmount()
	<< ";deposits:" << getNbDeposits()
	<< ";withdrawals:" << getNbWithdrawals()
	<< std::endl;
}

void Account::_displayTimestamp(void)
{
	struct tm *cur_time;
	time_t rawtime;

	std::time(&rawtime);
	cur_time = std::localtime(&rawtime);
	std::mktime(cur_time);
	std::cout << '[' << 1900 + cur_time->tm_year
	<< 1 + cur_time->tm_mon << cur_time->tm_mday
	<< '_' << cur_time->tm_hour << cur_time->tm_min
	<< cur_time->tm_sec << "] ";
}
