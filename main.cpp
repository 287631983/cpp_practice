#include <iostream>
#include <vector>
#include <cstdlib>
#include <string>
#include <stdexcept>
#include <unistd.h>
#include <csignal>

using namespace std;

class VLA{
    private:
        const int m_len;
        int *m_arr;
    public:
        VLA(int len);
};

VLA::VLA(int len):m_len(len)
{

}

int main(int argc, char **argv)
{
    VLA *vla = new VLA(5);

    return 0;
}