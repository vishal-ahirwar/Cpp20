
// Auto Genrated C++ file by newton CLI
// Copyright 2023 Vishal Ahirwar //replace it with yout copyright notice!
#include <iostream>
#include <vector>
#include<array>


template <class type>
void printVector(std::vector<type> &vec)
{
    for (int i = 0; i < vec.size(); ++i)
    {
        std::cout << vec.at(i) << ", ";
    };
    std::cout << std::endl;
};

template <class type>
bool replace(std::vector<type> &vec, const type &old_value, const type &new_value)
{
    for (int i = 0; i < vec.size(); ++i)
    {
        if (vec.at(i) == old_value)
        {
            vec.at(i) = new_value;
            return true;
        }
    };
    return false;
};

template<class type>
void printcollection(const type&collection)
{
    auto it=collection.begin();
    while(it!=collection.end())
    {
        std::cout<<*it<<", ";
        ++it;
    };
    std::cout<<std::endl;
};

template<class type>
void printSubsetOfCollection(const type&collection,const size_t&begin_offset,const size_t&end_offset)
{
    auto begin_it=collection.begin()+begin_offset;
    auto end_it=collection.end()-end_offset;

    while(begin_it!=end_it)
    {
        std::cout<<*begin_it<<", ";
        ++begin_it;
    };
    std::cout<<std::endl;
};

int main(int argc, char *argv[])
{
    std::vector<int> marks{96, 50, 36};
    std::vector<int>::iterator marks_begin_it=marks.begin();
    std::vector<int>::iterator marks_end_it=marks.end();

    std::vector<std::string> subjects{"cprogramming", "estc", "mathematics 1"};
    std::vector<std::string>::iterator subjects_begin_it=subjects.begin();
    std::vector<std::string>::iterator subjects_end_it=subjects.end();

    std::array<std::string,4>r_names{"ramesh","rakesh","rohan","ravi"};
    std::array<std::string,4>::iterator r_names_begin_it=r_names.begin();
    std::array<std::string,4>::iterator r_names_end_it=r_names.end();

    printVector<std::string>(subjects);
    printVector<int>(marks);

    auto action=[&marks,&subjects]() -> void
    {
        if (replace<std::string>(subjects, "mathematics 1", "m1"))
            std::cout << "success!\n";
        else
            std::cout << "not found!\n";
        if (replace<int>(marks, 36, 95))
            std::cout << "success!\n";
        else
            std::cout << "not found!\n";
    };

    printcollection(marks);
    printcollection(subjects);
    printcollection(r_names);

    printSubsetOfCollection(marks,0,2);
    printSubsetOfCollection(subjects,0,2);
    printSubsetOfCollection(r_names,2,1);
    
    return 0;
};
