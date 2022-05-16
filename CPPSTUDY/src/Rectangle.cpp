#include "../include/Rectangle.h"

Rectangle::Rectangle(double width_, double height_, Color color_, bool filled_)
: Shape{color_, filled_}
{
    width = width_;
    height = height_;
}

double Rectangle::getWidth() const
{
    return width;
}

void Rectangle::setWidth(double width_)
{
    width = width_;
}

double Rectangle::getHeight() const
{
    return height;
}

void Rectangle::setHeight(double height_)
{
    height = height_;
}

double Rectangle::getArea() const
{
    return width * height;
}

Rectangle::~Rectangle()
{
    
}