#include <gtest/gtest.h>
#include "classes.h"    
#include "templates.h"  

class TransformerTest : public ::testing::Test {
protected:
    Class1 cl1;
    Class2 cl2;
    Class3 cl3;
};

// Tests for Class1
TEST_F(TransformerTest, Class1FooTrue) {
    std::vector<float> vec = {1.0f, 2.0f, 3.0f};
    Transformer<Class1, int> transformer(5, vec, cl1);
    EXPECT_TRUE(transformer.foo());
}

TEST_F(TransformerTest, Class1FooFalse) {
    std::vector<float> vec = {1.0f, 2.0f, 3.0f};
    Transformer<Class1, int> transformer(-5, vec, cl1);
    EXPECT_FALSE(transformer.foo());
}

// Tests for Class2
TEST_F(TransformerTest, Class2FooTrue) {
    std::vector<float> vec = {1.0f, 2.0f, 3.0f};
    Transformer<Class2, int> transformer(1, vec, cl2);
    EXPECT_TRUE(transformer.foo());
}

TEST_F(TransformerTest, Class2FooFalse) {
    std::vector<float> vec;
    Transformer<Class2, int> transformer(-5, vec, cl2);
    EXPECT_FALSE(transformer.foo());
}

// Tests for Class3
TEST_F(TransformerTest, Class3FooTrue) {
    std::vector<float> vec = {1.0f, 2.0f, 3.0f};
    Transformer<Class3, int> transformer(-3, vec, cl3);
    EXPECT_TRUE(transformer.foo());
}

TEST_F(TransformerTest, Class3FooFalse) {
    std::vector<float> vec = {1.0f, 2.0f, 3.0f};
    Transformer<Class3, int> transformer(3, vec, cl3);
    EXPECT_FALSE(transformer.foo());
}

// Tests for specializations
TEST_F(TransformerTest, IntSpecializationAlwaysTrue) {
    Transformer<int, Class1> transformer(0, {}, cl1);
    EXPECT_TRUE(transformer.foo());
}

TEST_F(TransformerTest, DoubleSpecializationAlwaysFalse) {
    Transformer<double, Class1> transformer(0, {}, cl1);
    EXPECT_FALSE(transformer.foo());
}

int main(int argc, char **argv) {
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
