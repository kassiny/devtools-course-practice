// Copyright 2018 Razumova Maria

#include <include/lineSegment.h>


LineSegment::LineSegment()
{
    x1=x2=y1=y2=0;
}

LineSegment::LineSegment(double _x1, double _y1, double _x2, double _y2):
    x1(_x1), y1(_y1), x2(_x2), y2(_y2)
{}

LineSegment::LineSegment(const LineSegment & ls):
    x1(ls.x1), y1(ls.y1), x2(ls.x2), y2(ls.y2)
{}

LineSegment::~LineSegment()
{

}
