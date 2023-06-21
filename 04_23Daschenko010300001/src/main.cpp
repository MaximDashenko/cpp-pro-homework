#include <iostream>

class Shape {
public:
    [[nodiscard]] virtual double getArea() const = 0;
};

class Triangle : public Shape {
private:
    double base;
    double height;

public:
    Triangle(double base, double height) : base(base), height(height) {}

    [[nodiscard]] double getArea() const override {
        return 0.5 * base * height;
    }
};

class Rectangle : public Shape {
private:
    double length;
    double width;

public:
    Rectangle(double length, double width) : length(length), width(width) {}

    [[nodiscard]] double getArea() const override {
        return length * width;
    }
};

class Rhombus : public Shape {
private:
    double diagonal1;
    double diagonal2;

public:
    Rhombus(double diagonal1, double diagonal2) : diagonal1(diagonal1), diagonal2(diagonal2) {}

    [[nodiscard]] double getArea() const override {
        return 0.5 * diagonal1 * diagonal2;
    }
};

void printArea(const Shape &shape, const std::string &shapeName) {
    std::cout << "Area of " << shapeName << ": " << shape.getArea() << std::endl;
}

int main() {
    Triangle triangle(4.0, 5.0);
    Rectangle rectangle(6.0, 8.0);
    Rhombus rhombus(3.0, 4.0);

    printArea(triangle, "Triangle");
    printArea(rectangle, "Rectangle");
    printArea(rhombus, "Rhombus");

    return 0;
}
