#include <iostream>
#include <string.h>
int main()
{
    char fname[] = "Ali";
    char lname[] = "1049";
    std::cout<<fname<<lname<<"\n";
    std::cout<<strcat(fname,lname)<<"\n";

    std::string first_Name = "Ali";
    std::string last_Name = "1040";

    std::cout<<first_Name+last_Name<<"\n";
    std::cout<<first_Name.append(last_Name)<<"\n";


    return 0;
}