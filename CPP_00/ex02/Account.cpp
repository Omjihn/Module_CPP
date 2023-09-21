
#include <iostream>
#include <ctime>
#include <chrono>
#include "Account.hpp"

int Account::_nbAccounts = 0;
int Account::_totalAmount = 0;
int Account::_totalNbDeposits = 0;
int Account::_totalNbWithdrawals = 0;

Account::Account( int initial_deposit)
{
    static int  i = 0;

    this->_accountIndex = i;
    this->_amount = initial_deposit;
    this->_totalAmount += initial_deposit;
    this->_nbAccounts++;
    this->_nbDeposits = 0;
    this->_nbWithdrawals = 0;
    _displayTimestamp();
    std::cout << "index:" << i++ <<\
        ";amount:" << this->_amount  <<\
        ";created" << std::endl;
}

Account::~Account( void )
{
    _displayTimestamp();
    std::cout << "index:" << this->_accountIndex <<\
        ";amount:" << this->_amount <<\
        ";closed" << std::endl;
}

void    Account::makeDeposit(int deposit)
{
    _displayTimestamp();
    std::cout << "index:" << this->_accountIndex <<\
        ";p_amount:" << this->_amount <<\
        ";deposit:" << deposit;
    this->_amount += deposit;
    this->_totalAmount += deposit;
    this->_nbDeposits++;
    _totalNbDeposits++;
    std::cout << ";amount:" << this->_amount <<\
        ";nb_deposits:" << this->_nbDeposits << std::endl;
}

bool    Account::makeWithdrawal(int withdrawal)
{
    _displayTimestamp();
    std::cout << "index:" << this->_accountIndex <<\
        ";p_amount:" << this->_amount << ";withdrawal:";
    if (this->_amount < withdrawal)
    {
        std::cout << "refused" << std::endl;
        return (false);
    }
    this->_amount -= withdrawal;
    this->_totalAmount -= withdrawal;
    this->_nbWithdrawals++;
    this->_totalNbWithdrawals++;
    std::cout << withdrawal << ";amount:" << this->_amount <<\
        ";nb_withdrawals:" << this->_nbWithdrawals << std::endl;
    return (true);
}

int     Account::checkAmount( void ) const
{
    std::cout << "checkAmount triggered" << std::endl;
    return(0);
}

void    Account::displayStatus( void ) const
{
    _displayTimestamp();
    std::cout << "index:" <<  this->_accountIndex << ";amount:" << this->_amount\
        << ";deposits:" << this->_nbDeposits << ";withdrawals:" << _nbWithdrawals\
        << std::endl;
}

void    Account::_displayTimestamp( void )
{
    std::time_t currentTime = std::chrono::system_clock::to_time_t(std::chrono::system_clock::now());
    std::tm* timeinfo = std::localtime(&currentTime);
    char    str[16];
    std::sprintf(str, "%04d%02d%02d_%02d%02d%02d", timeinfo->tm_year + 1900,
        timeinfo->tm_mon + 1, timeinfo->tm_mday, timeinfo->tm_hour,
        timeinfo->tm_min, timeinfo->tm_sec);
    std::cout << "[" << str << "] ";
    //std::cout << "[19920104_091532] "; debug
}

int     Account::getNbAccounts( void )
{
    return (_nbAccounts);
}

int     Account::getTotalAmount( void )
{
    return (_totalAmount);
}

int     Account::getNbDeposits( void )
{
    return (_totalNbDeposits);
}

int     Account::getNbWithdrawals( void )
{
    return (_totalNbWithdrawals);
}

void    Account::displayAccountsInfos( void )
{
    _displayTimestamp();
    std::cout << "accounts:" << _nbAccounts <<\
        ";total:" << _totalAmount <<\
        ";deposits:" << _totalNbDeposits <<\
        ";withdrawals:" << _totalNbWithdrawals << std::endl;
}