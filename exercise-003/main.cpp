#include <fmt/chrono.h>
#include <fmt/format.h>

#include "vectorint.hpp"

auto main(int argc, char **argv) -> int
{
    
    fmt::print("Hello, World!\n");

   
    VectorInt data(20);
    fmt::print("Die G ist: {} \n",data.size());
    data.push_back(1);
    data.push_back(2);
    fmt::print("Die G ist: {} \n",data.size());

    VectorInt foo(20);
    auto start = std::chrono::system_clock::now();
    foo.push_back(1);
    foo.push_back(2);
    foo.push_back(3);
    foo.push_back(4);
    foo.push_back(5);
    auto end = std::chrono::system_clock::now();
    auto elapsed = std::chrono::duration_cast<std::chrono::nanoseconds>(end - start);
    fmt::print("The push_back took {}\n", elapsed);
    fmt::print("Die G ist: {} \n",foo.size());

    VectorInt poo(20);
    auto start2 = std::chrono::system_clock::now();
    poo.push_back_new(1);
    poo.push_back_new(2);
    poo.push_back_new(3);
    poo.push_back_new(4);
    poo.push_back_new(5);
    auto end2 = std::chrono::system_clock::now();
    auto elapsed2 = std::chrono::duration_cast<std::chrono::nanoseconds>(end2 - start2);
    fmt::print("The push_back_new took {}\n", elapsed2);
    fmt::print("Die G ist: {} \n",poo.size());
    return 0; 
}
