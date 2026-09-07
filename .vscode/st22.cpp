#include <array>
#include <iostream>
int main()
{

    // int poitnes[4] = {1, 2, 3, 4};// C- style Array
    std::array<int, 4> points = {1, 7, -3, 4};
    std::cout << points[0] << "\n";
    std::cout << points[1] << "\n";
    std::cout << points[2] << "\n";
    std::cout << points[3] << "\n";

    std::cout << "Element Count : " << points.size() << "\n";

    points.fill(false);

    std::cout << points[0] << "\n";
    std::cout << points[1] << "\n";
    std::cout << points[2] << "\n";
    std::cout << points[3] << "\n";

    

    return 0;
}