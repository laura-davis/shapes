#include <iostream>
#include "triang.h"

int main() {
    triangle example;
    for(int counter = 1; counter <= 6; ++counter) {
        example.initialise();
        example.display_area();
    }
}
