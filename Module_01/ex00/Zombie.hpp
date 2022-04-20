/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nwakour <nwakour@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/25 14:58:04 by nwakour           #+#    #+#             */
/*   Updated: 2021/12/03 16:09:46 by nwakour          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __ZOMBIE_H__
#define __ZOMBIE_H__

#include <iostream>

class Zombie {

private:
    std::string _name;
    
public:
   Zombie(void);
   Zombie(std::string);
   void announce( void );
   void set(std::string);
   std::string get(void) const;
   ~Zombie(void);
};
void randomChump( std::string name );
Zombie* newZombie( std::string name );

#endif