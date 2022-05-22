/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vbachele <vbachele@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/13 11:33:05 by vbachele          #+#    #+#             */
/*   Updated: 2022/05/22 17:02:19 by vbachele         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Warlock.hpp"
#include "iostream"
#include "ASpell.hpp"
#include "ATarget.hpp"
#include "Fwoosh.hpp"
#include "Dummy.hpp"

int main()
{
    Warlock richard("Richard", "the Titled");
    Dummy bob;
    Fwoosh* fwoosh = new Fwoosh();
    richard.learnSpell(fwoosh);
    richard.introduce();
    richard.launchSpell("Fwoosh", bob);
    richard.forgetSpell("Fwoosh");
    richard.launchSpell("Fwoosh", bob);

    delete fwoosh;

    // AJOUTER CAS OU SPELL EXISTE PAS DANS LES FONCTONS
    //Test errors //
    //Warlock Bob;
   //richard = jack;
   //Warlock jim(jack);
    return (0);
}
