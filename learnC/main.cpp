#include <iostream>
#include <string>
#include <queue>
using namespace std;

class Vehicle
{
private:
    int size;
    double width;
    double height;

public:
    Vehicle() {}
    Vehicle(int size, double width, double height)
    {
        this->size = size;
        this->width = width;
        this->height = height;
    }

    int getSize()
    {
        return this->size;
    }
    bool checkCar()
    {
        return true;
    }
};

int main()
{
    Vehicle v{10, 20, 20};
    tuple<int, string> person(20, "tim");
    cout << get<0>(person) << endl;
    cout << v.checkCar() << endl;
    cout << v.getSize() << endl;
}
