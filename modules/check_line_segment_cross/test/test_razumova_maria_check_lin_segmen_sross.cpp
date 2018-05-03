// Copyright 2018 Razumova Maria

#include <gtest/gtest.h>


#include "include/lineSegment.h"


TEST(Razumova_Maria_LineCross, Can_create_LineSegment_without_parametrs)
{
    //AAA
    ASSERT_NO_THROW(LineSegment());
}
TEST(Razumova_Maria_LineCross,Can_create_LineSegment_with_parametrs)
{
    //Arrange
    double x1, y1, x2, y2;

    //Act
    x1 = 1;
    y1 = 2;
    x2 = 0;
    y2 = 0;

    //Assert
    ASSERT_NO_THROW(LineSegment(x1,y1,x2,y2));
}
