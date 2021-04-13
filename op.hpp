#ifndef __OP_HPP__
#define __OP_HPP__

#include "base.hpp"

class Op : public Base {
    public:
        Op(double value) : Base() { }
        virtual double evaluate() { return 0.0; }
        virtual std::string stringify() { return ""; }
};

class SevenOpMock: public Base {
    public:
        SevenOpMock() { }

        virtual double evaluate() { return 7.5; }
        virtual string stringify() { return "7.5"; }
}

class ZeroOpMock: public Base {
    public:
        ZeroOpMock() { }

        virtual double evaluate() { return 0; }
        virtual string stringify() { return "0"; }
}

class NegativeOpMock: public Base {
    public:
        NegativeOpMock() { }

        virtual double evaluate() { return -1; }
        virtual string stringify() { return "-1"; }
}

#endif //__OP_HPP__
