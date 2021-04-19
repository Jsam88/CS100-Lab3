#ifndef __OP_HPP__
#define __OP_HPP__

#include "base.hpp"
#include <string>
#include <iostream>
#include <sstream>

class Op : public Base {
    private:
        double num;
	std::string str;

    public:
	Op(double value) : Base() { num = value; }

	virtual double evaluate() { return num; }
        virtual std::string stringify() {
			std::stringstream out;
            out << num;
            return out.str();
		}		
};

class SevenOpMock: public Base {
    public:
        SevenOpMock() { }

        virtual double evaluate() { return 7.5; }
        virtual std:: string stringify() { return "7.5"; }
};

class ZeroOpMock: public Base {
    public:
        ZeroOpMock() { }

        virtual double evaluate() { return 0; }
        virtual std:: string stringify() { return "0"; }
};

class NegativeOpMock: public Base {
    public:
        NegativeOpMock() { }

        virtual double evaluate() { return -1; }
        virtual std::string stringify() { return "-1"; }
};


#endif //__OP_HPP__
