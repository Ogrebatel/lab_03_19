// Copyright 2018 Your Name <your_email>

#include <gtest/gtest.h>
#include "header.hpp"

TEST(Example, EmptyTest) {
int a = 7;
int b = 8;

SharedPtr<int> s1(&a);
SharedPtr<int> s3(&b);
EXPECT_EQ(s1.use_count(),1)
}

int main(int argc, char **argv) {
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
