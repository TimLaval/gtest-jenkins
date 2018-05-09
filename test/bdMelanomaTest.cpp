#include <gtest/gtest.h>
#include "../main/Source/bdMelanoma.h"
#include "../main/Source/vbdMelanoma.h"

//Test file for methods of bdMelanoma.h
class MelanomaTest : public ::testing::Test {
 protected:
  virtual void SetUp() {
    bdMelanoma mel;
    vbdMelanoma vmel;
    bdImage input, output, outputExpected;
	  bdArray<int> output_histogram, output_histogram_expected;
    
  }

  virtual void TearDown() {
    // Code here will be called immediately after each test
    // (right before the destructor).
    input.Reset();
    output.Reset();
    outputExpected.Reset();
    output_histogram.Reset();
    output_histogram_expected.Reset();
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
  vmel.LoadGrayScaleImageFromPNGFile("../ressource/test_for_extraction.png", input);
  vmel.LoadGrayScaleImageFromPNGFile("../ressource/red_extraction_output.png", outputExpected);
  
  ASSERT_EQUALS(1, mel.Extract_RedImage(input, output));
  ASSERT_EQUALS(outputExpected, output);
}

TEST_F(MelanomaTest, ExtractGreenImage) {
  vmel.LoadGrayScaleImageFromPNGFile("../ressource/test_for_extraction.png", input);
  vmel.LoadGrayScaleImageFromPNGFile("../ressource/green_extraction_output.png", outputExpected);
  
  ASSERT_EQUALS(1, mel.Extract_GreenImage(input, output));
  ASSERT_EQUALS(outputExpected, output);
}

TEST_F(MelanomaTest, ExtractBlueImage) {
  vmel.LoadGrayScaleImageFromPNGFile("../ressource/test_for_extraction.png", input);
  vmel.LoadGrayScaleImageFromPNGFile("../ressource/blue_extraction_output.png", outputExpected);
  
  ASSERT_EQUALS(1, mel.Extract_BlueImage(input, output));
  ASSERT_EQUALS(outputExpected, output);
}

TEST_F(MelanomaTest, ExtractMaxOfRGBImage) {
  ASSERT_TRUE(true);
}

//////////////////////////////////////////////////////////
///////// END OF FILE
//////////////////////////////////////////////////////////
