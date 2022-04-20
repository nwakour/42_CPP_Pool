/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nwakour <nwakour@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/25 16:42:19 by nwakour           #+#    #+#             */
/*   Updated: 2021/12/03 16:29:06 by nwakour          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main(void)
{
    std::string s;
    std::string *stringPTR = &s;
    std::string &stringREF = s;

    s = "HI THIS IS BRAIN";
    std::cout << "string address = "<< &s << std::endl;
    std::cout << "stringPTR address = "<< stringPTR << std::endl;
    std::cout << "stringREF address = "<< &stringREF << std::endl;

    std::cout << "string = "<< s << std::endl;
    std::cout << "stringPTR = "<< *stringPTR << std::endl;
    std::cout << "stringREF = "<< stringREF << std::endl;
    return (0);
}
