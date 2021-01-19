#include <iostream>
#include <vector>
#include <cstdlib>
#include <string>
#include <stdexcept>
#include <unistd.h>
#include <csignal>

using namespace std;

class Student{
    public:
        Student(char *name, int age, float score)
        {
            this->m_count ++;
            this->m_name = name;
            this->m_age = age;
            this->m_score = score;
        }
        void setname(char *name);
        void setage(int age);
        void setscore(float score);
        void show();
    private:
        static int m_count;
        char *m_name;
        int m_age;
        float m_score;
};

int Student::m_count = 0;

void Student::setname(char *name)
{
    this->m_name = name;
}

void Student::setage(int age)
{
    this->m_age = age;
}

void Student::setscore(float score)
{
    this->m_score = score;
}

void Student::show()
{
    cout << "index: " << this->m_count << "name:" << this->m_name << " age:" << this->m_age << " score:" << this->m_score << endl;
}

int main(int argc, char **argv)
{
    (new Student("小明", 18, 95.1))->show();
    (new Student("小刚", 18, 94.9))->show();
    (new Student("小花", 18, 91.5))->show();
}