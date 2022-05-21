/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dummy.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vbachele <vbachele@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/21 17:36:23 by vbachele          #+#    #+#             */
/*   Updated: 2022/05/21 19:01:41 by vbachele         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DUMMY_HPP
# define DUMMY_HPP
#include "iostream"
#pragma once
#include "ATarget.hpp"

class Dummy : public ATarget {
public :
	Dummy();
	virtual ATarget *clone() const; // permet de subsituer la class abstrait et creer une class
	virtual ~Dummy(void);
	//members functions;
};

#endif