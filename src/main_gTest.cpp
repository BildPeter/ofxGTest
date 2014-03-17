#include "ofMain.h"
#include "testApp.h"
#include "gtest.h"

GTEST_API_ int main(int argc, char **argv) {
    printf("Running Google Test on openFrameworks\n");
    testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}