#include <iostream>
#include <vector>
int main()
{
    std::vector<int> v1 = {10, 20, 30, 40};
    std::vector<int> v2{100, 200, 300, 400};
    std::vector<int> v3(4, 50);

    for (int i = 0; i < v1.size(); i++)
    {
        std::cout << v1.at(i) << "\n";
    }

    std::cout << "\n==============\n\n";

    v3[0] = 1000;
    for (int i = 0; i < v2.size(); i++)
    {
        std::cout << v2.at(i) << "\n";
    }

    std::cout << "\n==============\n\n";
    std::cout << "Number of elements is : " << v3.size() << "\n ";

    v3[4] = 1000;
    std::cout << v3[4] << "\n";
    std::cout << "\n==============\n\n";
    std::cout << "Number of elements is : " << v3.size() << "\n ";

    v3.push_back(1000);
    std::cout << v3[4] << "\n";
    std::cout << "\n==============\n\n";
    std::cout << "Number of elements is : " << v3.size() << "\n ";
    // for (int i = 0; i < v3.size(); i++)
    // {
    //     std::cout << v3.at(i) << "\n";
    // }

    return 0;
}