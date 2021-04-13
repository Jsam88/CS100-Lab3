#ifndef __RANDOM_HPP__
#define __RANDOM_HPP__

#include <iostream>
#include "base.hpp"
#include <string>

Class Random: public Base {
        public:
                Rand() { num = rand() % 100; }
                virtual double evaluate() { return num; }
                virtual std:string stringify() { return std::to_string(num);}
        private:
                double num;
};

#endif
