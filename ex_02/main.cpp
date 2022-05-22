/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vbachele <vbachele@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/13 11:33:05 by vbachele          #+#    #+#             */
/*   Updated: 2022/05/22 19:11:43 by vbachele         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Warlock.hpp"
#include "iostream"
#include "ASpell.hpp"
#include "ATarget.hpp"
#include "Fwoosh.hpp"
#include "Dummy.hpp"
#include "BrickWall.hpp"
#include "SpellBook.hpp"
#include "Polymorph.hpp"
#include "Fireball.hpp"

int main()
{
    Warlock richard("Richard", "foo");
    richard.setTitle("Hello, I'm Richard the Warlock!");
    BrickWall model1;

    Polymorph* polymorph = new Polymorph();
    // TargetGenerator tarGen;

    // tarGen.learnTargetType(&model1);
    richard.learnSpell(polymorph);

    Fireball* fireball = new Fireball();

    richard.learnSpell(fireball);
    richard.forgetSpell("Fireball");
    richard.learnSpell(fireball);
    // ATarget* wall = tarGen.createTarget("Inconspicuous Red-brick Wall");

    richard.introduce();
    //richard.launchSpell("Polymorph", *wall);
    //richard.launchSpell("Fireball", *wall);

    // AJOUTER CAS OU SPELL EXISTE PAS DANS LES FONCTONS
    //Test errors //
    //Warlock Bob;
   //richard = jack;
   //Warlock jim(jack);
    return (0);
}
