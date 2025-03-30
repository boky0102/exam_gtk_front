#include <gtest/gtest.h>
#include "FakeQuestionGenerator.h"

// TODO: MOVE SHARED LIBRARY TO THE SAME LOCATION AS THE TEST EXECUTABLE !!!

TEST(Example, willRun){
  EXPECT_EQ("UNS", "RUNS");
}

int main(int argc, char **argv) {
  testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}
