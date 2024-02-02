#if !defined(TROLL_HX)
#define TROLL_HX
#include <iostream>
#include <algorithm>
#include <vector>
#define PRINT_ARR std::ranges::for_each(arr, [](const auto &n) { std::cout << n << ", "; });
#define NEWLINE std::cout << "\n";
#define SORT std::ranges::sort(arr);
#define RETURN return 0;
#define DEFINE_ARR int arr[]{45, 3, 23, 67, 89, 4, 345, 324, 6};
#define MAIN_START int main(int argc, char *argv[]){
#define MAIN_END };
#endif