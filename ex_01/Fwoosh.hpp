/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fwoosh.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vbachele <vbachele@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/21 17:24:25 by vbachele          #+#    #+#             */
/*   Updated: 2022/05/21 17:30:34 by vbachele         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef		FWOOSH_HPP
# define	FWOOSH_HPP
#include 	"ASpell.hpp"

class Fwoosh : public ASpell
{
public :
	Fwoosh();
	Fwoosh(Fwoosh const &old_obj);
	~Fwoosh();

protected :
};

#endif