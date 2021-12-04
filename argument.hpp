#pragma once

//Native C++ Libraries
#include <string_view>
#include <vector>


//Class 'Argument' represents a commandline argument and its parameters
struct Argument final 
{
    std::string_view name; 
    std::vector<std::string_view> params;
    bool set;
};
