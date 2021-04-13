#ifndef __ADD_HPP__
#define __ADD_HPP__

#include <iostream>
#include "base.hpp"
#include <string>

Class Add: public Base {
        public:
                Add(Base * LEFT, Base* RIGHT) {
                        Lnode = LEFT;
                        Rnode = RIGHT;
                }

                virtual double evaluate() { return Lnode + Rnode ; }
                virtual std:string stringify() { return std::to_string(Lnode "+" Rnode);}
        private:
                Base* Lnode = NULL;
                Base* Rnode = NULL;
};

#endif
