#include "ofMain.h"
#include "ofApp.h"
#include "gtest/gtest.h"

GTEST_API_ int main(int argc, char **argv) {
    printf("Running Google Test on openFrameworks\n");
    testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
