#include <gtest/gtest.h>
#include "../../dermscan-ipi/DermScan_CMAKE/Source/bdMelanoma.cpp"
#include "../../dermscan-ipi/DermScan_CMAKE/Source/vbdMelanoma.cpp"


class MelanomaTest : public ::testing::Test {
 protected:
  virtual void SetUp() {
    bdMelanoma mel;
    vbdMelanoma vmel;
    bdImage input, outputExpected;
	  
    vmel.LoadGrayScaleImageFromPNGFile("../ressource/test.png", input);
    vmel.LoadGrayScaleImageFromPNGFile("../ressource/test_expected.png", outputExpected);

  }

  virtual void TearDown() {
    // Code here will be called immediately after each test
    // (right before the destructor).
  }
};

TEST_F(MelanomaTest,Downsample){
	bdImage output;


	mel.DownSample(input, output, 4);

  ASSERT_EQUALS(output, outputExpected);
}

TEST_F(MelanomaTest, HistogramArray) {
	bdArray<int> output_histogram, output_histogram_expected;
	int range_max = 255;
	output_histogram_expected.Set(range_max+1);
	
	
  ASSERT_TRUE(true);
}

TEST_F(MelanomaTest, HistogramCurveXY) {
  ASSERT_TRUE(true);

}

TEST_F(MelanomaTest, HistogramArrayWithMask){
  ASSERT_TRUE(true);

}

TEST_F(MelanomaTest, HistogramCurveXYWithMask){
    ASSERT_TRUE(true);

}

TEST_F(MelanomaTest, HistogramMaxima){
  ASSERT_TRUE(true);

}
