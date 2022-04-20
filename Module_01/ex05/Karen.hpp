/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Karen.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nwakour <nwakour@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/29 16:57:48 by tenshi            #+#    #+#             */
/*   Updated: 2021/12/03 17:19:07 by nwakour          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __KAREN_H__
#define __KAREN_H__

#include <iostream>

class Karen
{
	private:
		void debug( void );
		void info( void );
		void warning( void );
		void error( void );
	public:
		void complain( std::string level );
		Karen(void);
		~Karen(void);
};

#endif