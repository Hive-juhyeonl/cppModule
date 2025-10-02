/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: JuHyeon <JuHyeon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/02 20:48:50 by JuHyeon           #+#    #+#             */
/*   Updated: 2025/10/02 22:13:58 by JuHyeon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Account.hpp"
#include <iostream>
#include <ctime>

void	Account::_displayTimestamp(void)
{
	time_t  ts;
	char    buf[16];

	time(&ts);
	strftime(buf, sizeof(buf), "%Y%m%d_%H%M%S", localtime(&ts));
	std::cout << "[" << buf << "]";
}
int	Account::getNbAccounts(void) { return (_nbAccounts); }
int	Account::getTotalAmount(void) { return (_totalAmount); }
int	Account::getNbDeposits(void) { return (_totalNbDeposits); }
int	Account::getNbWithdrawals(void) { return (_totalNbWithdrawals); }

void	Account::makeDeposit(int deposit)
{

}

bool	Account::makeWithdrawal(int withdrawal)
{

}

int Account::checkAmount(void) const
{

}

void    Account::displayStatus(void) const
{
	_displayTimestamp();
	std::cout << " index:" << _accountIndex
				<< ";total:" << _amount
				<< ";deposits:" << _nbDeposits
				<< ";withdrawals:" << _nbWithdrawals << std::endl;
}

void	Account::displayAccountsInfos(void)
{
	_displayTimestamp();
	std::cout << " accounts:" << getNbAccounts()
				<< ";total:" << getTotalAmount()
				<< ";deposits:" << getNbDeposits()
				<< ";withdrawals:" << getNbWithdrawals() <<std::endl;
}
