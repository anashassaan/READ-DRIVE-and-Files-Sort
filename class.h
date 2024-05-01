#pragma once
#include <iostream>
#include <filesystem>
#include <string.h>


using namespace std;
namespace fs = std::filesystem;

class file_class
{
public:
    std::string sort_name;
    long double sorted_time;
    int count = 0;
    
public:
    std::uintmax_t size;
    string name;
    string extension;
    int size_of_list;
    file_class* next;
public:
    file_class* readfile();
    //file_class* takehead(class file_class head);
    
   
};

