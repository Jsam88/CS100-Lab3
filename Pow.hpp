#ifndef __POW_HPP__
#define __POW_HPP__

#include <iostream>
#include "base.hpp"
#include <string>
#include <cmath>
Class Pow: public Base {
        public:
                Pow(Base * LEFT, Base* RIGHT) {
                        Lnode = LEFT;
                        Rnode = RIGHT;
                }

                virtual double evaluate() { return pow(Lnode,Rnode) ; }
                virtual std:string stringify() { return std::to_string(Lnode "**" Rnode);}
        private:
                Base* Lnode = NULL;
                Base* Rnode = NULL;
};

#endif
