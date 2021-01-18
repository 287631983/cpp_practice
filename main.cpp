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
        Box(): length(0)
        {

        }
         int printLength(Box)
         {
             length += 10;
             return length;
         }
};

int main()
{
    Box b;
    cout << "Length of box: " << b.printLength(b) << endl;
}
