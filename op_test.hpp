#ifndef __OP_TEST_HPP__
#define __OP_TEST_HPP__

#include "gtest/gtest.h"

#include "op.hpp"
#include "Add.hpp"
#include "Sub.hpp"
#include "Pow.hpp"
#include "Mult.hpp"
#include "Div.hpp"
#include "Random.hpp"
#include <string>

TEST(AddTest, AddEval1) {
      Op* testVal1 = new Op(0);
      Op* testVal2 = new Op(0);
      Base* Addi = new Add(testVal1, testVal2);
      EXPECT_NEAR(Addi->evaluate(),0,0.001);
}

TEST(AddTest, AddEval2)    {
      Op* testVal1 = new Op(10);
      Op* testVal2 = new Op(9);
      Base* Addi = new Add(testVal1, testVal2);
      EXPECT_NEAR(Addi->evaluate(),19,0.001);
}

TEST(AddTest, AddEval3)    {
      Op* testVal1 = new Op(10);
      Op* testVal2 = new Op(-12);
      Base* Addi = new Add(testVal1, testVal2);
      EXPECT_NEAR(Addi->evaluate(),-2,0.001);
}
TEST(AddTest, AddEval4)    {
      Op* testVal1 = new Op(1.0);
      Op* testVal2 = new Op(2.7);
      Base* Addi = new Add(testVal1, testVal2);
      EXPECT_NEAR(Addi->evaluate(),3.7,0.001);
}
TEST(AddTest, AddEval5)    {
      Op* testVal1 = new Op(6);
      Op* testVal2 = new Op(3);
      Base* Addi = new Add(testVal1, testVal2);
      EXPECT_EQ(Addi->stringify(),"6 + 3");
}

TEST(SubTest, SubEval1) {
      Op* testVal1 = new Op(10);
      Op* testVal2 = new Op(10);
      Base* Subtract = new Sub(testVal1, testVal2);
      EXPECT_NEAR(Subtract->evaluate(),0,0.001);
}

TEST(SubTest, SubEval2)    {
      Op* testVal1 = new Op(10);
      Op* testVal2 = new Op(1);
      Base* Subtract = new Sub(testVal1, testVal2);
      EXPECT_NEAR(Subtract->evaluate(),9,0.001); 
}

TEST(SubTest, SubEval3)    {
      Op* testVal1 = new Op(10);
      Op* testVal2 = new Op(12);
      Base* Subtract = new Sub(testVal1, testVal2);
      EXPECT_NEAR(Subtract->evaluate(),-2,0.001);
}
TEST(SubTest, SubEval4)    {
      Op* testVal1 = new Op(2.0);
      Op* testVal2 = new Op(1.7);
      Base* Subtract = new Sub(testVal1, testVal2);
      EXPECT_NEAR(Subtract->evaluate(),0.3,0.001);
}
TEST(SubTest, SubEval5)    {
      Op* testVal1 = new Op(6);
      Op* testVal2 = new Op(3);
      Base* Subtract = new Sub(testVal1, testVal2);
      EXPECT_EQ(Subtract->stringify(),"6 - 3");
}

TEST(PowTest, PowEval1) {
      Op* testVal1 = new Op(0);
      Op* testVal2= new Op(1);
      Base* Power = new Pow(testVal1, testVal2);
      EXPECT_NEAR(Power->evaluate(),0,0.001);
}

TEST(PowTest, PowEval2)    {
      Op* testVal1 = new Op(2);
      Op* testVal2= new Op(1);
      Base* Power = new Pow(testVal1, testVal2);
      EXPECT_NEAR(Power->evaluate(),2,0.001);
}
TEST(PowTest, PowEval3)    {
      Op* testVal1 = new Op(-1);
      Op* testVal2 = new Op(3);
      Base* Power = new Pow(testVal1, testVal2);
      EXPECT_NEAR(Power->evaluate(),-1,0.001);
}     
TEST(PowTest, PowEval4)    {
      Op* testVal1 = new Op(2.2);
      Op* testVal2 = new Op(2.0);
      Base* Power = new Pow(testVal1, testVal2);
      EXPECT_NEAR(Power->evaluate(),4.84,0.001);
}
TEST(PowTest, PowEval5)    {
      Op* testVal1 = new Op(6);
      Op* testVal2 = new Op(3);
      Base* Power = new Pow(testVal1, testVal2);
      EXPECT_EQ(Power->stringify(),"6 ^ 3");
}

TEST(OpTest, OpEvaluateNonZero) {
    Op* test = new Op(8);
    EXPECT_EQ(test->evaluate(), 8);
}

TEST(OpTest, OpEvaluateZero)	{
	Op* test = new Op(0);
	EXPECT_EQ(test->evaluate(), 0);
}

TEST(OpTest, OpEvaluateNeg)	{
	Op* test = new Op(-5);
	EXPECT_EQ(test->evaluate(), -5);
}

TEST(OpTest, OpEvaluateString)	{
	Op* test = new Op(88);
	EXPECT_EQ(test->stringify(), "88");
}

TEST(RandomTest, RandomEval1)    {
        Random* test = new Random();
        EXPECT_LT(test->evaluate(),100);
}

TEST(RandomTest, RandomEval2)    {
        Random* test = new Random();
        EXPECT_LT(test->evaluate(),100);
}

TEST(MultTest, MultEval0)    {
        Op* testVal1 = new Op(0);
	Op* testVal2 = new Op(8);
	Base* Multi = new Mult(testVal1, testVal2);
        EXPECT_EQ(Multi->evaluate(), 0);
}

TEST(MultTest, MultEval1)    {
        Op* testVal1 = new Op(5);
        Op* testVal2 = new Op(10);
        Base* Multi = new Mult(testVal1, testVal2);
        EXPECT_EQ(Multi->evaluate(),50);
}

TEST(MultTest, MultEvalNeg)    {
        Op* testVal1 = new Op(3);
        Op* testVal2 = new Op(-2);
        Base* Multi = new Mult(testVal1, testVal2);
        EXPECT_EQ(Multi->evaluate(),-6);
}

TEST(MultTest, MultEvalFloat)    {
        Op* testVal1 = new Op(8.88);
        Op* testVal2 = new Op(8.88);
        Base* Multi = new Mult(testVal1, testVal2);
        EXPECT_NEAR(Multi->evaluate(),78.8544, 0.001);
}

TEST(MultTest, MultEvalString)    {
        Op* testVal1 = new Op(8);
        Op* testVal2 = new Op(8);
        Base* Multi = new Mult(testVal1, testVal2);
        EXPECT_EQ(Multi->stringify(),"8 * 8");
}

TEST(DivTest, DivEvalZero)    {
        Op* testVal1 = new Op(0);
        Op* testVal2 = new Op(8);
        Base* Divi = new Div(testVal1, testVal2);
        EXPECT_NEAR(Divi->evaluate(), 0, 0.001);
}

TEST(DivTest, DivEval1)    {
        Op* testVal1 = new Op(16);
        Op* testVal2 = new Op(2);
        Base* Divi = new Div(testVal1, testVal2);
        EXPECT_NEAR(Divi->evaluate(),8, 0.001);
}

TEST(DivTest, DivEvalNeg)    {
        Op* testVal1 = new Op(-16);
        Op* testVal2 = new Op(2);
        Base* Divi = new Div(testVal1, testVal2);
        EXPECT_NEAR(Divi->evaluate(), -8, 0.001);
}

TEST(DivTest, DivEvalString)    {
        Op* testVal1 = new Op(16);
        Op* testVal2 = new Op(2);
        Base* Divi = new Div(testVal1, testVal2);
        EXPECT_EQ(Divi->stringify(), "16 / 2");
}
#endif //__OP_TEST_HPP__
