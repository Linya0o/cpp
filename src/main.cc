#include <iostream>
#include <cstdio>

int main(int argc, char *argv[]) {
    unsigned short font {0x064C};
    auto italic {static_cast<unsigned short>(1u << 6)};
    auto bold {static_cast<unsigned short>(1u << 5)};

    font |= italic | bold;
    printf("font = 0x%X\n", font);
    font &= ~bold;            // turn off bold
    font &= ~bold & ~italic;  // turn bold and italic off
    font &= ~(bold | italic);  // turn bold and italic off
    printf("font = 0x%X\n", font);
    font ^= bold;  // toggle bold
    printf("font = 0x%X\n", font);
#if 0
    // 旧式枚举, 缺少class修饰
    enum Day {Monday, Tuesday, Wednesday, Thursday, Friday, Saturday, Sunday};

    // 作用域的枚举，类型规范，输出转换
    enum class Punctuation:char { Comma = ',', Exclamation = '!', Question = '?' };
    Punctuation ch {Punctuation::Question};
    std::cout << static_cast<char>(ch) << std::endl;

    // 通过using声明绕过枚举的作用域要求
    using enum Punctuation;
    ch = Comma;

    // using指令
    using Bigones = unsigned long long;

#endif // 0

    return 0;
}
