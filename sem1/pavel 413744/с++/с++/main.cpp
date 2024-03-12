#include <vector>
#include <string>
#include <algorithm>
#include <iostream>

int main() {
    std::vector<std::string> vec = {"apple", "banana", "apricot", "cherry", "avocado"};
    char c;
    std::cin >> c;
    
    auto starts_with_c = [c](const std::vector<std::string>& v) {
        std::vector<std::string> result;
        std::copy_if(v.begin(), v.end(), std::back_inserter(result), [c](const std::string& s) {
            return !s.empty() && s[0] == c;
        });
        return result;
    };
    
    std::vector<std::string> filtered_strings = starts_with_c(vec);
    std::cout << "Strings starting with '" << c << "':" << std::endl;
    for (const auto& str : filtered_strings) {
        std::cout << str << std::endl;
    }
    
    std::cout << "Number of strings starting with '" << c << "': " << filtered_strings.size() << std::endl;
    
    return 0;
}
