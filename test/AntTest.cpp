#include <gtest/gtest.h>
#include <Ant.hpp>

class AntTest : public ::testing::Test
{
protected:
    void SetUp() override {}
    void TearDown() override {}

    Ant ant;
};

TEST_F(AntTest, hardWork)
{
    std::string wantedStr{"Ant is a small and hard-working ally."};
    ASSERT_EQ(wantedStr, ant.toString());
}
