/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ATarget.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vbachele <vbachele@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/21 16:55:01 by vbachele          #+#    #+#             */
/*   Updated: 2022/05/22 17:05:24 by vbachele         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ATARGET_HPP
#define ATARGET_HPP
#include "iostream"

class ASpell;

//abstract class used to represent shape animal etc... it will be used at base
// for other classes

class ATarget {
public :
	ATarget(std::string type);
	ATarget(ATarget const &old_obj);
	virtual ~ATarget(void);
	//members functions;
	std::string const getType() const;
	void 		getHitSpell(ASpell const &spell) const;
	virtual ATarget *clone() const = 0;
protected:
	std::string _type;
};

#endif