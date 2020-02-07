# include <iostream>
# include <iomanip>

class triangle {
public:
    void initialise();

    void display_area();

private:
    float height;
    float base;
};

void triangle::initialise() {
    char terminator;
    do {
        std::cout << "Enter height of triangle in centimetres ";
        std::cin >> height;
    }
    while (height < 10.0);
        do {
            std::cout << "Enter base of triangle in centimetres ";
            std::cin >> base;
    }
    while(base < 12.5) ;
    std::cin.get (terminator);
}

void triangle::display_area() {
    float area = height * base / 2;
    std::cout << "The area of the triangle is " << std::setprecision(2) << area << " square centimetres" << std::endl;
}