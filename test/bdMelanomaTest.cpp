#include <gtest/gtest.h>
#include "../../dermscan-ipi/DermScan_CMAKE/Source/bdMelanoma.h"
#include "../../dermscan-ipi/DermScan_CMAKE/Source/vbdMelanoma.h"

//Test file for methods of bdMelanoma.h
class MelanomaTest : public ::testing::Test {
 protected:
  virtual void SetUp() {
    bdMelanoma mel;
    vbdMelanoma vmel;
    bdImage input, output, outputExpected;
  }

  virtual void TearDown() {
    // Code here will be called immediately after each test
    // (right before the destructor).
    input = NULL;
    output = NULL;
    outputExpected = NULL;
  }
};


//////////////////////////////////////////////////////////
///////// TEST ALL DOWNSAMPLING METHODS
//////////////////////////////////////////////////////////
TEST_F(MelanomaTest,Downsample) {
  
  vmel.LoadGrayScaleImageFromPNGFile("../ressource/test.png", input);
  vmel.LoadGrayScaleImageFromPNGFile("../ressource/test_expected.png", outputExpected);

	mel.DownSample(input, output, 4);
  ASSERT_EQUALS(output, outputExpected);
}

TEST_F(MelanomaTest, DownsampleMax) {

  vmel.LoadGrayScaleImageFromPNGFile("../ressource/test.png", input);
  vmel.LoadGrayScaleImageFromPNGFile("../ressource/test_expected.png", outputExpected);

  ASSERT_TRUE(true);
}

TEST_F(MelanomaTest, DownsampleMean) { 

  vmel.LoadGrayScaleImageFromPNGFile("../ressource/test.png", input);
  vmel.LoadGrayScaleImageFromPNGFile("../ressource/test_expected.png", outputExpected);

  ASSERT_TRUE(true);
}

//////////////////////////////////////////////////////////
///////// TEST ALL HISTOGRAM METHODS
//////////////////////////////////////////////////////////

TEST_F(MelanomaTest, HistogramArray) {
	bdArray<int> output_histogram, output_histogram_expected;
	int range_max = 255;
	output_histogram_expected.Set(range_max+1);
	
  ASSERT_TRUE(true);
  ASSERT_EQUALS(output_histogram, output_histogram_expected);
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

//////////////////////////////////////////////////////////
///////// TEST ALL EXTRACT METHODS
//////////////////////////////////////////////////////////

TEST_F(MelanomaTest, ExtractRedImage) {
  ASSERT_TRUE(true);
}

TEST_F(MelanomaTest, ExtractGreenImage) {
  ASSERT_TRUE(true);
}

TEST_F(MelanomaTest, ExtractBlueImage) {
  ASSERT_TRUE(true);
}

TEST_F(MelanomaTest, ExtractMaxOfRGBImage) {
  ASSERT_TRUE(true);
}

//////////////////////////////////////////////////////////
///////// END OF FILE
//////////////////////////////////////////////////////////