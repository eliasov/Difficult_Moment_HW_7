#include <iostream>
#include <numeric>
#include "students.h"
#include "groups.h"


int main()
{
    Study::FullName fn;
    fn.set_name("Ilya");
    fn.set_surname("Ovsyannikov");
    fn.set_patronymic("Yurevich");

    Study::Student s;
    *s.mutable_fname() = fn;
    s.add_grades(5);
    s.add_grades(2);
    s.add_grades(4);
    s.add_grades(3);
    s.add_grades(4);
    s.add_grades(3);
    s.add_grades(4);
    s.add_grades(3);
    s.set_avggrades(std::accumulate(s.grades().begin(), s.grades().end(), 0) / s.grades().size());

    SG::StudentsGroup sg;
    sg.add_student(s);
    sg.Save();

    SG::StudentsGroup new_sg;
    new_sg.Open();
    std::cout << new_sg.GetAllInfo(fn) << std::endl;


    return 0;
}