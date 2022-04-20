/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   account.class.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nwakour <nwakour@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/21 16:26:43 by nwakour           #+#    #+#             */
/*   Updated: 2021/12/03 15:56:24 by nwakour          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Account.hpp"
#include <iostream>
#include <stdio.h>
#include <time.h>
Account::Account(int initial_deposit)
{
    _displayTimestamp();
    _accountIndex = _nbAccounts++;
    _amount = initial_deposit;
    _totalAmount += initial_deposit;
    _nbDeposits = 0;
    _nbWithdrawals = 0;
    std::cout << "index:" << _accountIndex << ";amount:" << _amount << ";created" << std::endl;
	return;
}

Account::Account( void )
{
	std::cout << "Constructor Called" << std::endl;
	return;
}

Account::~Account(void)
{
    _displayTimestamp();
	std::cout << "index:" << _accountIndex << ";amount:" << _amount << ";closed" << std::endl;
	return;
}

int	Account::getNbAccounts(void)
{
    return Account::_nbAccounts;
}

int	Account::getTotalAmount(void)
{
    return Account::_totalAmount;
}

int	Account::getNbDeposits(void)
{
    return Account::_totalNbDeposits;
}

int	Account::getNbWithdrawals(void)
{
    return Account::_totalNbWithdrawals;
}

void	Account::displayAccountsInfos( void )
{
    _displayTimestamp();
    std::cout << "accounts:" << _nbAccounts << ";total:" << _totalAmount << ";deposits:" <<
        _totalNbDeposits << ";withdrawals:" << _totalNbWithdrawals << std::endl;
    return ;
}

int Account::_nbAccounts = 0;
int Account::_totalAmount = 0;
int Account::_totalNbDeposits = 0;
int Account::_totalNbWithdrawals = 0;

void	Account::makeDeposit( int deposit )
{
    _displayTimestamp();
    _totalNbDeposits++;
    _nbDeposits++;
    _amount += deposit;
    _totalAmount += deposit;
    std::cout << "index:" << _accountIndex << ";p_amount:" << _amount - deposit << ";deposit:" << deposit;
    std::cout << ";amount:" << _amount << ";nb_deposits:" << _nbDeposits << std::endl;
    return;
}

bool	Account::makeWithdrawal( int withdrawal )
{
    _displayTimestamp();
    if (withdrawal <= _amount)
    {
        _totalNbWithdrawals++;
        _nbWithdrawals++;
        _amount -= withdrawal;
        _totalAmount -= withdrawal;
        std::cout << "index:" << _accountIndex << ";p_amount:" << _amount +  withdrawal << ";withdrawal:" << withdrawal
        << ";amount:" << _amount << ";nb_withdrawals:" << _nbWithdrawals << std::endl;
        return 1;
    }
    else
    {
        std::cout << "index:" << _accountIndex << ";p_amount:" << _amount << ";withdrawal:"
        << "refused" << std::endl;
        return 0;
    }
}

int		Account::checkAmount( void ) const
{
    return 1;
}

void	Account::displayStatus( void ) const
{
    _displayTimestamp();
    std::cout << "index:" << _accountIndex << ";amount:" << _amount << ";deposits:" <<
        _nbDeposits << ";withdrawals:" << _nbWithdrawals << std::endl;
    return ;
}

void	Account::_displayTimestamp( void )
{
    time_t rawtime;
    struct tm * timeinfo;
    char buffer [20];

    time (&rawtime);
    timeinfo = localtime (&rawtime);
    strftime (buffer,20,"[%G%m%d_%H%M%S]",timeinfo);
    std::cout << buffer << " ";
    return ;
}
