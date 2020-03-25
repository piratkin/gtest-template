#include "gtest/gtest.h"
#include "test_storage.h"

TEST(storage, test)
{
    EXPECT_EQ(0, 0) << "Equal test failed";
    EXPECT_FALSE(false) << "False test failed";
    EXPECT_TRUE(true) << "True test failed";
}

TEST(storage, init)
{
    const storage_config_t conf = { "stream" };
    EXPECT_FALSE(storage_init(&conf)) << "Init test failed";
}

TEST(storage, handler)
{
    EXPECT_FALSE(storage_do(NULL)) << "Handler test failed";
}
