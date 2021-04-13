#ifndef __MULT_HPP__
#define __MULT_HPP__

#include <iostream>
#include "base.hpp"
#include <string>

Class Mult: public Base {
        public:
                Mult(Base * LEFT, Base* RIGHT) {
                        Lnode = LEFT;
                        Rnode = RIGHT;
                }

                virtual double evaluate() { return Lnode * Rnode ; }
                virtual std:string stringify() { return std::to_string(Lnode "*" Rnode);}
        private:
                Base* Lnode = NULL;
                Base* Rnode = NULL;
};

#endif
