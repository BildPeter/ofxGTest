meta:
ADDON_NAME = ofxGTest
ADDON_DESCRIPTION = Addon for interfacing with microsoft kinect cameras
ADDON_AUTHOR = Peter A. Kolski, Hiroshi Matoba
ADDON_TAGS = "Google Test"
ADDON_URL = http://github.com/BildPeter/ofxGTest

common:

ADDON_INCLUDES = libs/gtest/include

osx:
ADDON_LIBS = libs/gtest/libs/libgtest.a
ADDON_LIBS += libs/gtest/libs/libgtest_main.a
