/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Warlock.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vbachele <vbachele@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/13 11:33:09 by vbachele          #+#    #+#             */
/*   Updated: 2022/05/13 11:56:03 by vbachele         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include WARLOCK_HPP
# define WARLOCK_HPP
#include <iostream>

class Warlock
{
	public:
	//Canonical functions//
	Warlock(std::string name, std::string title);
	Warlock &operator=(const Warlock &obj);
	Warlock(const Warlock &obj);
	~Warlock(void);

	// Members functions //
	std::string	getName(void) const;
	void		setTitle(std::string &title) const;
	std::string getTitle(void) const;
	void		introduce() const;

	private:
	std::string _name;
	std::string _title;
};

#endif