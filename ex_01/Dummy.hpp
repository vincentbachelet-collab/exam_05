/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dummy.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vbachele <vbachele@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/21 17:36:23 by vbachele          #+#    #+#             */
/*   Updated: 2022/05/21 18:36:54 by vbachele         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DUMMY_HPP
# define DUMMY_HPP
#include "iostream"
#include "ATarget.hpp"

class Dummy : public ATarget {
public :
	Dummy();
	Dummy(Dummy const &old_obj);
	virtual ~Dummy(void);
	//members functions;
};

#endif