#include <iostream>
using namespace std;

const int RGB_MAX = 255;

class Color {
private:
    int red;
    int green;
    int blue;

public:
    Color() {
        red = 0;
        green = 0;
        blue = 0;
    }

    Color(int r, int g, int b) {
        red = r;
        green = g;
        blue = b;
    }

    Color(int r) {
        red = r;
        green = 0;
        blue = 0;
    }

    int getRed() const      { return red; }
    int getGreen() const    { return green; }
    int getBlue() const     { return blue; }

    void setRed(int r)      { red = r; }
    void setGreen(int g)    { green = g; }
    void setBlue(int b)     { blue = b; }

    void print(const string& colorName);
};

void Color::print(const string& colorName) {
    cout << "Color " << colorName << " (R: " << red << ", G: " << green << ", B: " << blue << ")\n";
}

void print(Color);

int main()
{
    Color defaultColor;

    Color parameterR(RGB_MAX, 0, 0);
    Color parameterG(0, RGB_MAX, 0);
    Color parameterB(0, 0, RGB_MAX);

    Color partialR(RGB_MAX);

    defaultColor.print("Defalt RGB");

    parameterR.print("Red");
    parameterG.print("Green");
    parameterB.print("Blue");

    partialR.print("Partial Red");

    return 0;
}