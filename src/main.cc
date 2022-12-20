#include <algorithm>
#include <iostream>
#include <cstdio>
#include <compare>
#include <cctype>
#include <limits>
#include <numbers>

int main(int argc, char *argv[]) {
#if 0
    const double nan {std::numeric_limits<double>::quiet_NaN()};
    std::cout << (nan == nan) << std::endl;    // NaN值不等于任何值

    int value {12};
    std::strong_ordering ordering { value <=> 0 };
    std::cout << "value < 0: " << (ordering == std::strong_ordering::less) << std::endl;
    std::cout << "value ==0: " << (ordering == std::strong_ordering::equal) << std::endl;
    std::cout << "value > 0: " << (ordering == std::strong_ordering::greater) << std::endl;
    std::cout << "value ==0: " << std::is_eq(ordering) << std::endl;

    std::cout << "isspace(' '): " << std::isspace(' ') << std::endl;
    std::cout << "isblank(' '): " << std::isblank(' ') << std::endl;
    std::cout << "ispunct(' '): " << std::ispunct(' ') << std::endl;
    std::cout << "isprint(' '): " << std::isprint(' ') << std::endl;
    std::cout << "isgraph(' '): " << std::isgraph(' ') << std::endl;

    char input;
    std::cin >> input;
    if (auto lower {static_cast<char>(tolower(input))}; lower >= 'a' && lower <= 'z')
		std::cout << "You've entered the letter '" << lower << "\'" << std::endl;
#endif // 0

    // practices
    enum class AcademicDegree { none, associate, bachelor, professional, master, doctor };
    unsigned age;
    char gender;
    bool married, speaksHindi, speaksUrdu;
    std::cout << "please input your age: ";
    if (std::cin >> age; age < 21 || age > 35) std::cout << "You don't meet the conditions\n";
    std::cout << "please input your gender(m:male, f:female): ";
    if (std::cin >> gender; gender != 'f') std::cout << "You don't meet the conditions\n";
    std::cout << "are you married? (1:Yes, 0:No): ";
    if (std::cin >> married; married) std::cout << "You don't meet the conditions\n";
    std::cout << "can you speak Handi? (1:Yes, 0:No): ";
    if (std::cin >> speaksHindi; !speaksHindi) std::cout << "You don't meet the conditions\n";
    std::cout << "can you speak Urdu? (1:Yes, 0:No): ";
    if (std::cin >> speaksUrdu; !speaksUrdu) std::cout << "You don't meet the conditions\n";

    std::cout << "You have the offer.\n";

    return 0;
}
