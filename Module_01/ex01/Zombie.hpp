/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nwakour <nwakour@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/25 14:58:04 by nwakour           #+#    #+#             */
/*   Updated: 2021/12/03 16:23:00 by nwakour          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __ZOMBIE_H__
#define __ZOMBIE_H__

#include <iostream>

class Zombie {

private:
    std::string _name;
    
public:
   void announce( void );
   void set(std::string);
   std::string get(void) const;
   Zombie(void);
   ~Zombie(void);
};
Zombie* zombieHorde( int N, std::string name );
#endif