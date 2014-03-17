//
//  example_unittest.cpp
//  example
//
//  Created by Peter on 17.03.14.
//
//

#include "gtest.h"

TEST(emptyShowcase, compare){

    EXPECT_EQ(1, 1 == 1 );
    
}

TEST(emptyShowcase, shouldFail){

    EXPECT_EQ(0, 1 == 1 );      // Fails

}