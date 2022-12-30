// this file is meant to get a quick ppm image file created
#include <iostream>

#include "vec3.h"
#include "color.h"


int main() {

    // image dimensions
    const int image_width = 256;
    const int image_height = 256;

    std::cout << "P3\n" << image_width << ' ' << image_height << "\n255\n";

    for (int i = image_height - 1; i >= 0; --i) {
        std::cerr << "\rScanlines remaining: " << i << ' ' << std::flush;
        for (int j = 0; j < image_width; ++j) {
            Color pixel_color(double(j)/(image_width - 1), double(i)/(image_height - 1), 0.25);
            write_color(std::cout, pixel_color);
        }
    }

    std::cerr << "\nDone.\n";

    return 0;
}