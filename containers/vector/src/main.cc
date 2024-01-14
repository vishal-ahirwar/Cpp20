
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

template<class iterator>
void printThroughIterator(iterator begin,iterator end)
{
    while(begin!=end)
    {
        std::cout<<*begin<<", ";
        ++begin;
    };
    std::cout<<std::endl;
}

int main(int argc, char *argv[])
{
    std::vector<int> marks{96, 50, 36};
    std::vector<int>::iterator marks_begin_it=marks.begin();
    std::vector<int>::iterator marks_end_it=marks.end();

    std::vector<int>::reverse_iterator marks_reverse_begin_it=marks.rbegin();
    std::vector<int>::reverse_iterator marks_reverse_end_it=marks.rend();

    std::vector<int>::const_iterator marks_const_begin_it=marks.cbegin();
    std::vector<int>::const_iterator marks_const_end_it=marks.cend();

    std::vector<std::string> subjects{"cprogramming", "estc", "mathematics 1"};
    std::vector<std::string>::iterator subjects_begin_it=subjects.begin();
    std::vector<std::string>::iterator subjects_end_it=subjects.end();

    std::vector<std::string>::reverse_iterator subjects_reverse_begin_it=subjects.rbegin();
    std::vector<std::string>::reverse_iterator subjects_reverse_end_it=subjects.rend();

    std::array<std::string,4>r_names{"ramesh","rakesh","rohan","ravi"};
    std::array<std::string,4>::iterator r_names_begin_it=r_names.begin();
    std::array<std::string,4>::iterator r_names_end_it=r_names.end();

    std::array<std::string,4>::reverse_iterator r_names_reverse_begin_it=r_names.rbegin();
    std::array<std::string,4>::reverse_iterator r_names_reverse_end_it=r_names.rend();

    std::array<std::string,4>::const_reverse_iterator r_names_reverse_const_begin_it=r_names.crbegin();
    std::array<std::string,4>::const_reverse_iterator r_names_reverse_const_end_it=r_names.crend();

    // printVector<std::string>(subjects);
    // printVector<int>(marks);

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

    std::string users[]{"any_user@user","lovely_user@user","das@user","homo@user"};
    for(std::string* it=std::begin(users);it!=std::end(users);++it)std::cout<<*users<<", ";
    std::cout<<std::endl;
    // printThroughIterator(marks_begin_it,marks_end_it);
    // printThroughIterator(r_names_begin_it,r_names_end_it);
    // printThroughIterator(marks_reverse_begin_it,marks_reverse_end_it);
    // printThroughIterator(r_names_reverse_begin_it,r_names_reverse_end_it);
    // printThroughIterator(r_names_reverse_const_begin_it,r_names_reverse_const_end_it);
    // printcollection(subjects);
    // printcollection(r_names);

    // printSubsetOfCollection(marks,0,2);
    // printSubsetOfCollection(subjects,0,2);
    // printSubsetOfCollection(r_names,2,1);
    
    return 0;
};
