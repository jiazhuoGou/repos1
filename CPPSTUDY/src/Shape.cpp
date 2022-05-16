#include "../include/Shape.h"
#include<array>

using namespace std::string_literals;

Shape::Shape(Color color_, bool filled_)
{
    this->color = color_;
    this->filled = filled_;
}

Color Shape::getColor()
{
    return this->color;
}

void Shape::setColor(Color color_)
{
    this->color = color_;
}

bool Shape::isFilled()
{
    return filled;
}

void Shape::setFilled(bool Filled_)
{
    filled = Filled_;
}

string Shape::toString()
{
    std::array<string, 6> c{"white"s, "black"s, "red"s, "green"s, "blue"s, "yellow"s};
    return "Shape: " + c[static_cast<int>(color)] + " " 
    + (filled?"filled"s:"not filled");
}

Shape::~Shape()
{
}