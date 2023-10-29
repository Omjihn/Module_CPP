/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbricot <gbricot@student.42perpignan.fr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/27 17:22:24 by gbricot           #+#    #+#             */
/*   Updated: 2023/10/29 17:39:50 by gbricot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

class AMateria
{
    protected:
    
        const std::string   type;
        
    public:
    
        AMateria(std::string const & type);
        [...]
        std::string const & getType() const; //Returns the materia type
        virtual AMateria* clone() const = 0;
        virtual void use(ICharacter& target);
};