/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbricot <gbricot@student.42perpignan.fr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/28 13:20:54 by gbricot           #+#    #+#             */
/*   Updated: 2023/09/28 15:32:27 by gbricot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include    "sed_losers.h"

static void    ft_create_output(char *av, std::ofstream &output_file)
{
    std::string file_name(av);
    file_name.insert(file_name.length(), ".remplace");
    output_file.open(file_name.c_str(), std::ofstream::in | std::ofstream::trunc);
}

static void    ft_get_input_text(std::ofstream &input_file, std::string &file_content)
{
    std::ostringstream buf;
    buf << input_file.rdbuf();
    file_content = buf.str();
}

int main(int ac, char **av)
{
    if (ac != 4)
    {
        std::cout << "Wrong number of arguments" << std::endl;
        return (0);
    }
    std::ofstream   input_file(av[1], std::ofstream::in);
    if(!input_file.is_open())
    {
        std::cout << "Can't open " << av[1] << std::endl;
        return (0);
    }
    std::ofstream output_file;
    ft_create_output(av[1], output_file);
    std::string file_content;
    ft_get_input_text(input_file, file_content);
    std::string s1 = av[2];
    while (file_content.length())
    {
        if (!file_content.compare(0, s1.length(), s1))
        {
            output_file << av[3];
            file_content.erase(0, s1.length());
        }
        else
        {
            output_file << file_content[0];
            file_content.erase(0, 1);
        }
    }
    return (0);
}