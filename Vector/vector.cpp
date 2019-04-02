#include <iostream>
#include <vector>
#include <string>

int main(){
    std::vector<std::string> langs={"C++","C","Java","Perl","Javascript"};
    for(std::string lang: langs)
    {
        std::cout<<lang<<" ";
    }
    return 0;  
}