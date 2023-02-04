#include <vector>
#include <array>
#include <cstdio>
#include <istream>

int main(int argc, char *argv[]) {
    int total {};
    for (auto x : { 1, 2, 3, 4, 5, })
        total += x;
    std::printf("total: %d\n", total);

    char punc[] { "!@#$%^&*()_+-=" };

    for (size_t i = 0; i < std::size(punc) - 1; i++) {
        printf("%zu'%c' :%X :%d\n", i, punc[i], punc[i], punc[i]);
    }

    std::array<double, 100> values { 3.1, 2.0, 6.1, 5.4 };
    printf("length: %zu, first element: %g, last element: %g\n", values.size(), values.front(), values.back());

    std::vector<int> st;
    st.push_back(23);
    printf("length: %zu\n", st.size());
    std::erase(st, 23);
    printf("length: %zu\n", st.size());

    return 0;
}
