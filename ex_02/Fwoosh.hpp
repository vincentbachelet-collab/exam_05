/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fwoosh.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vbachele <vbachele@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/21 17:24:25 by vbachele          #+#    #+#             */
/*   Updated: 2022/05/22 17:45:18 by vbachele         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef		FWOOSH_HPP
# define	FWOOSH_HPP
#include 	"ASpell.hpp"
#pragma once

class Fwoosh : public ASpell
{
public :
	Fwoosh();
	virtual ASpell *clone() const;
	~Fwoosh();

protected :
};

#endif