#include <vector>
#include <iostream>

int main()
{
    std::vector<int> v; //new vector that is going to store integers
    v.push_back(2);//adding 2 to the vector
    v.push_back(3);//adding 3 to the vector
    v.push_back(5);//adding 5 to the vector

    std::cout<<v[0] <<std::endl;
    std::cout<<v[1] <<std::endl;
    std::cout<<v[2] <<std::endl;

    return 0;

}