#include <iostream>
#include <vector>
#include <cstdlib>
#include <string>
#include <stdexcept>
#include <unistd.h>
#include <csignal>

using namespace std;

class Student{
    private:
        char *m_name;
        int m_age;
        float m_score;
    public:
        Student();
        Student(char *name, int age, float score);
        void setname(char *name);
        void setage(int age);
        void setscore(float score);
        void show();
};

Student::Student()
{
    m_name = "小兰";
    m_age = 16;
    m_score = 96.1;
}

Student::Student(char *name, int age, float score)
{
    m_name = name;
    m_age = age;
    m_score = score;
}

void Student::setname(char *name)
{
    m_name = name;
}

void Student::setage(int age)
{
    m_age = age;
}

void Student::setscore(float score)
{
    m_score = score;
}

void Student::show()
{
    cout << "name: " << m_name << " age: " << m_age << " score: " << m_score << endl;
}

int main()
{
    Student *stu = new Student();

    stu->show();

    return 0;
}
