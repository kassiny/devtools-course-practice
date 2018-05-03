// Copyright 2018 Razumova Maria

#ifndef MODULES_CROSS_LINE_SEGMENT_INCLUDE_LINESEGMENT_H_
#define MODULES_CROSS_LINE_SEGMENT_INCLUDE_LINESEGMENT_H_

class LineSegment
{
public:
    LineSegment();
    LineSegment(double _x1, double _y1, double _x2, double _y2);
    LineSegment (const LineSegment&);
    LineSegment& operator=(const LineSegment&);
    bool isCross (const LineSegment&) const;
    bool isCross(double x1, double y1, double x2, double y2) const;
    double scalarProduct(const LineSegment& line);
    double vectorProduct(const LineSegment& line);
    ~LineSegment();
private:
    double x1, y1, x2, y2;

};

#endif // MODULES_CROSS_LINE_SEGMENT_INCLUDE_LINESEGMENT_H_
