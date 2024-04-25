#include <gtest/gtest.h>

#include "test/c/client.cpp"
#include "test/c/eventlog_test.cpp"
#include "test/c/memq_test.cpp"
#include "test/c/udpm_test.cpp"

#include "test/cpp/client.cpp"
#include "test/cpp/common.cpp"
#include "test/cpp/memq_test.cpp"

extern "C" int main(int argc, char** argv)
{
  ::testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}