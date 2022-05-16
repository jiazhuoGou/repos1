# pragma once

#include <iostream>
#include <string>

using namespace std::string_literals;

using std::string;

enum class Color
{
    white, black, red, green, blue, yellow, 
};

class Shape
{
private:
    Color color {Color::black};
    bool filled{false};
public:
    Shape() = default;
    Shape(Color color_, bool filled_);

    Color getColor();
    void setColor(Color color_);
    bool isFilled();
    void setFilled(bool Filled_);
    string toString();

    ~Shape();
};

