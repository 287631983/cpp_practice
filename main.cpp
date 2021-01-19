#include <iostream>
#include <vector>
#include <cstdlib>
#include <string>
#include <stdexcept>
#include <unistd.h>
#include <csignal>

using namespace std;

class Box
{
    private:
        int length;
    public:
        Box(int i)
        {
            length = i;
        }
        int printLength(Box);
};

int Box::printLength(Box)
{
    return length;
}

int main()
{
    Box b(25);
    cout << "Length of box: " << b.printLength(b) << endl;
}
