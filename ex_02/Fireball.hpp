/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fireball.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vbachele <vbachele@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/22 17:11:10 by vbachele          #+#    #+#             */
/*   Updated: 2022/05/22 17:48:54 by vbachele         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef		FIREBALL_HPP
# define	FIREBALL_HPP
#include 	"ASpell.hpp"

class Fireball : public ASpell
{
public :
	Fireball();
	virtual ASpell *clone() const;
	~Fireball();

protected :
};

#endif


