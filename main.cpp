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
        Student(char *name, int age, float score);
        void show();
        static int getTotal();
        static float getPoints();
    private:
        static int m_total;
        static float m_points;
        char *m_name;
        int m_age;
        float m_score;
};

int Student::m_total = 0;
float Student::m_points = 0;

Student::Student(char *name, int age, float score)
{
    m_total ++;
    m_points += score;
    this->m_name = name;
    this->m_age = age;
    this->m_score = score;
}

void Student::show()
{
    cout << m_name << "的年龄是" << m_age << "岁,成绩是" << m_score << "分" << endl;
}

int Student::getTotal()
{
    return m_total;
}

float Student::getPoints()
{
    return m_points;
}

int main(int argc, char **argv)
{
    (new Student("小明", 18, 95.1))->show();
    (new Student("小刚", 18, 94.9))->show();
    (new Student("小花", 18, 91.5))->show();

    int total = Student::getTotal();
    float points = Student::getPoints();
    cout << "当前共有" << total << "名学生,总成绩是" << points << endl;

    return 0;
}