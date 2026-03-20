#include "Account.hpp"
#include <iostream>
#include <iomanip>

int Account::_nbAccounts;
int Account::_totalAmount;
int Account::_totalNbDeposits;
int Account::_totalNbWithdrawals;

int Account::getNbAccounts(void){
    return _nbAccounts;
}

int Account::getTotalAmount(void) {
    return _totalAmount;
}

int Account::getNbDeposits(void) {
    return _totalNbDeposits;
}

int Account::getNbWithdrawals(void) {
    return _totalNbWithdrawals;
}

void    Account::_displayTimestamp( void )
{
    time_t t;
    time(&t);
    tm *tmb = localtime(&t);
    std::cout << "[" << (1900 + tmb->tm_year)
     << std::setw(2) << std::setfill('0') << (1 + tmb->tm_mon)
     << std::setw(2) << std::setfill('0') << tmb->tm_mday
     << "_"
     << std::setw(2) << std::setfill('0') << tmb->tm_hour
     << std::setw(2) << std::setfill('0') << tmb->tm_min
     << std::setw(2) << std::setfill('0') << tmb->tm_sec
     << "] ";
}

Account::Account( int initial_deposit )
{
    _accountIndex = _nbAccounts;
    _nbAccounts++;
    _amount = initial_deposit;
    _nbDeposits = 0;
    _nbWithdrawals = 0;
    _totalAmount += initial_deposit;
    Account::_displayTimestamp();
    std::cout << "index:" << _accountIndex << ";";
    std::cout << "amount:"<< _amount << ";";
    std::cout << "created" << std::endl;
    return ;
}

Account::~Account(void)
{
    _displayTimestamp();
    std::cout << "index:" << _accountIndex << ";";
    std::cout << "amount:"<< _amount << ";";
    std::cout << "closed" << std::endl;
    return ;
}


void	Account::displayAccountsInfos( void )
{
    Account::_displayTimestamp();
    std::cout << "accounts:" << _nbAccounts << ";";
    std::cout << "total:" << _totalAmount << ";";
    std::cout << "deposits:" << _totalNbDeposits << ";";
    std::cout << "withdrawals:" << _totalNbWithdrawals;
    std::cout << std::endl;
    return ;
}

void	Account::displayStatus( void ) const
{
    _displayTimestamp();
    std::cout << "index:" << _accountIndex << ";";
    std::cout << "amount:" << _amount << ";";
    std::cout << "deposits:" <<_nbDeposits << ";";
    std::cout << "withdrawals:" << _nbWithdrawals;
    std::cout << std::endl;
    return ;
}

void Account::makeDeposit(int deposit)
{
    _displayTimestamp();
    std::cout << "index:" << _accountIndex << ";";
    std::cout << "p_amount:" << _amount << ";";
    std::cout << "deposit:" << deposit << ";";
    _amount += deposit;
    _totalAmount += deposit; 
    _nbDeposits++;
    _totalNbDeposits++;
    std::cout << "amount:" << _amount << ";";
    std::cout << "nb_deposits:" << _nbDeposits << std::endl;
    return ;
}

bool Account::makeWithdrawal( int withdrawal )
{
    _displayTimestamp();
    std::cout << "index:" << _accountIndex << ";";
    std::cout << "p_amount:" << _amount << ";";
    
    if (withdrawal > checkAmount())
    {
        std::cout << "withdrawal:refused" << std::endl;
        return false;
    }
    
    std::cout << "withdrawal:" << withdrawal << ";";
    _amount -= withdrawal;
    _totalAmount -= withdrawal;
    _nbWithdrawals++;
    _totalNbWithdrawals++;
    std::cout << "amount:" << _amount << ";";
    std::cout << "nb_withdrawals:" << _nbWithdrawals << std::endl;
    return true;
}

int		Account::checkAmount( void ) const
{
    return _amount;
}