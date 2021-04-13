#ifndef __DIV_HPP__
#define __DIV_HPP__

#include <iostream>
#include "base.hpp"
#include <string>

Class Div: public Base {
        public:
                Div(Base * LEFT, Base* RIGHT) {
                        Lnode = LEFT;
                        Rnode = RIGHT;
                }

                virtual double evaluate() { return Lnode / Rnode ; }
                virtual std:string stringify() { return std::to_string(Lnode "/" Rnode);}
        private:
                Base* Lnode = NULL;
                Base* Rnode = NULL;
};

#endif
