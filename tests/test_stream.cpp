#include "gtest/gtest.h"
#include "test_stream.h"

TEST(stream, test)
{
    EXPECT_EQ(0, 0) << "Equal test failed";
    EXPECT_FALSE(false) << "False test failed";
    EXPECT_TRUE(true) << "True test failed";
}

TEST(stream, init)
{
    const stream_config_t conf = { "stream" };
    EXPECT_FALSE(stream_init(&conf)) << "Init test failed";
}

TEST(stream, handler)
{
    EXPECT_FALSE(stream_do(NULL)) << "Handler test failed";
}
