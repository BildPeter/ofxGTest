#include "ofMain.h"
#include "ofApp.h"

#include "gtest/gtest.h"
#include "example_unittest.cc"

//========================================================================
int main(int argc, char **argv) {

    printf("Running Google Test on openFrameworks\n");
    testing::InitGoogleTest(&argc, argv);
    RUN_ALL_TESTS();

	ofSetupOpenGL(1024,768,OF_WINDOW);			// <-------- setup the GL context

	// this kicks off the running of my app
	// can be OF_WINDOW or OF_FULLSCREEN
	// pass in width and height too:
	ofRunApp(new ofApp());

}
