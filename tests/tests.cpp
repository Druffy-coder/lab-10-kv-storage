
#include <stdexcept>

#include <gtest/gtest.h>

#include <kv-storage.hpp>

TEST(Example, EmptyTest) {
    EXPECT_THROW(example(), std::runtime_error);
}
