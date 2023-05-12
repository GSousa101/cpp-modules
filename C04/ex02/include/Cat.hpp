#ifndef CAT_HPP
# define CAT_HPP

#include "AAnimal.hpp"

class Cat : public AAnimal {
public:
            Cat( void );
            Cat(const Cat& other);
            ~Cat( void );
    Cat&    operator=(const Cat& other);

    void    makeSound( void ) const;
};

#endif
