#include "Account.hpp"
#include <iostream>
#include <iomanip>

void	Account::_displayTimestamp(void)
{
	time_t		t;
	struct tm	*tm;

	t = time(0);
	tm = localtime(&t);
	std::cout << "[" << tm->tm_year + 1900;
	std::cout << std::setfill('0') << std::setw(2) << tm->tm_mon + 1;
	std::cout << std::setfill('0') << std::setw(2) << tm->tm_mday << "_";
	std::cout << std::setfill('0') << std::setw(2) << tm->tm_hour;
	std::cout << std::setfill('0') << std::setw(2) << tm->tm_min;
	std::cout << std::setfill('0') << std::setw(2) << tm->tm_sec << "] ";
	return ;
}

Account::Account(int deposit)
{
	_accountIndex = _nbAccounts;
	_nbAccounts++;
	_amount = deposit;
	_nbDeposits = 0;
	_nbWithdrawals = 0;
	_totalAmount += deposit;
	_displayTimestamp();
	std::cout << "index:" << _accountIndex;
	std::cout <<  ";amount:" << _amount;
	std::cout << ";created" << std::endl;
}

Account::~Account( void )
{
	_nbAccounts--;
	_displayTimestamp();
	std::cout << "index:" << _accountIndex;
	std::cout <<  ";amount:" << _amount;
	std::cout << ";closed" << std::endl;
}

void	Account::displayAccountsInfos( void )
{
	_displayTimestamp();
	std::cout << "accounts:" << _nbAccounts;
	std::cout << ";total:" <<_totalAmount;
	std::cout << ";deposits:" << _totalNbDeposits;
	std::cout << ";withdrawals:" << _totalNbWithdrawals << std::endl;
}

void	Account::displayStatus( void ) const
{
	_displayTimestamp();
	std::cout << "index:" << _accountIndex;
	std::cout <<  ";amount:" << _amount;
	std::cout << ";deposits:" << _nbDeposits;
	std::cout << ";withdrawals:" << _nbWithdrawals << std::endl;
}

void	Account::makeDeposit( int deposit )
{
	_displayTimestamp();
	std::cout << "index:" << _accountIndex;
	std::cout << ";p_amount:" << _amount;
	std::cout << ";deposit:" << deposit;
	_amount += deposit;
	_nbDeposits++;
	_totalAmount += deposit;
	_totalNbDeposits++;
	std::cout << ";amount:" << _amount;
	std::cout << ";nb_deposits:" << _nbDeposits << std::endl;
}

bool	Account::makeWithdrawal( int withdrawal )
{
	_displayTimestamp();
	std::cout << "index:" << _accountIndex;
	std::cout << ";p_amount:" << _amount;
	std::cout << ";withdrawal:";
	if (withdrawal > _amount)
	{
		std::cout << "refused" << std::endl;
		return (0);
	}
	std::cout << withdrawal;
	_amount -= withdrawal;
	_nbWithdrawals++;
	_totalAmount -= withdrawal;
	_totalNbWithdrawals++;
	std::cout << ";amount:" << _amount;
	std::cout << ";nb_withdrawals:" << _nbWithdrawals << std::endl;
	return (1);
}

int Account::getNbAccounts( void ) {
	return (_nbAccounts);
}

int Account::getTotalAmount( void ) {
	return (_totalAmount);
}

int	Account::getNbDeposits( void ) {
	return (_totalNbDeposits);
}
int	Account::getNbWithdrawals( void ) {
	return (_totalNbWithdrawals);
}
int	Account::checkAmount( void )const {
	return (_amount);
}

int		Account::_nbAccounts = 0;
int		Account::_totalAmount = 0;
int		Account::_totalNbDeposits = 0;
int		Account::_totalNbWithdrawals = 0;
