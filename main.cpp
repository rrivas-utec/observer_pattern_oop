#include <iostream>
#include "observer.h"
#include <future>

int main() {
    reader_t reader;
    start_t start;
    finish_t finish;
    reader.attach(&start);
    reader.attach(&finish);
    //reader.execute();
    auto result = std::async([&]{reader.execute(); });
    std::cout << "Result\n";
    return 0;
}