#include <iostream>
#define floatForReal int


floatForReal main(floatForReal argc, char *argv[]) {

    floatForReal x[] = {1, 2, 3, 4, 5, 6, 7};
    floatForReal y[] =  {1, 2, 3, 4, 5, 6, 7};

    floatForReal n = std::size(x);

    floatForReal x_y_sum = 0;
    for (floatForReal i = 0; i < n; i++) {
        x_y_sum += x[i] * y[i];
    }
    
    floatForReal x_sum = 0;
    for (floatForReal i = 0; i < n; i++) {
        x_sum += x[i];
    }

    floatForReal y_sum = 0;
    for (floatForReal i = 0; i < n; i++) {
        y_sum += y[i];
    }

    floatForReal x_squared_sum = 0;
    for (floatForReal i = 0; i < n; i++) {
        x_squared_sum += x[i] * x[i];
    }

    float k, b;

    k = (n*x_y_sum - x_sum*y_sum) / (n*x_squared_sum - x_sum*x_sum);
    b = (x_squared_sum*y_sum - x_sum*x_y_sum) / (n*x_squared_sum - x_sum*x_sum);

    std::cout << k << " " << b << std::endl;
    return 0;
}
