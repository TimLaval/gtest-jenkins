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


  //////////////////////////////////////////////////////////
  /////////  SIZE METHODS
  //////////////////////////////////////////////////////////

  TEST_F(imageTest, SetSize) {
    ASSERT_EQUALS(true);
  }

  TEST_F(imageTest, SetSizeOf3DGrid) {
    ASSERT_EQUALS(true);
  }

  TEST_F(imageTest, SetSizeOf2DTimeSeries) {
    ASSERT_EQUALS(true);
  }


  //////////////////////////////////////////////////////////
  /////////  END OF FILE
  //////////////////////////////////////////////////////////

};

