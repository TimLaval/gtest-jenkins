#include <gtest/gtest.h>
#include "../main/Source/bdImage.h"


class ImageTest : public ::testing::Test {
 protected:
  virtual void SetUp() {
    bdImage im;
	
  }

  virtual void TearDown() {
    // Code here will be called immediately after each test
    // (right before the destructor).
  }
};
