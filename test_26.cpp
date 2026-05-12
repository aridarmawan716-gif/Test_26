#include <iostream>
#include <vector>                                                      #include <algorithm>
                                                                       int main() {
    // 1. C++26 Placeholder: Menggunakan '_' berkali-kali dalam scope yang sama
    int _ = 100;
    int _ = 200;

    std::vector<int> numbers = {1, 2, 3, 4, 5};

    // 2. C++26 Structured Bindings dengan Placeholder di dalam loop
    // Kita hanya peduli pada indeks, bukan nilainya (atau sebaliknya)
    for (auto [index, _] : std::vector<std::pair<int, int>>{{1, 10}, {2, 20}}) {
        std::cout << "Memproses indeks ke-" << index << std::endl;
    }
                                                                           // 3. Pengecekan Versi Standar                                         std::cout << "\n--- Laporan Sistem Expert ---" << std::endl;
    std::cout << "Compiler: Clang 21 (Termux)" << std::endl;
    std::cout << "Standar C++: " << __cplusplus << " (C++26 Mode)" << std::endl;

    return 0;                                                          }
