#ifndef __OP_TEST_HPP__
#define __OP_TEST_HPP__

#include "gtest/gtest.h"

#include "op.hpp"
#include "Mult.hpp"
#include "Div.hpp"
#include "Random.hpp"
#include <string>

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
