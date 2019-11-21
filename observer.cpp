//
// Created by rudri on 11/19/2019.
//

#include "observer.h"
#include <iostream>
#include <filesystem>

void reader_t::notify() {
    for (auto& o: observers_)
        o->update();
}

void reader_t::attach(observer_t* observer) {
    observers_.emplace_back(observer);
}

void reader_t::detach(observer_t* observer) {
    auto it = find(begin(observers_), end(observers_), observer);
    if (it != end(observers_))
        observers_.erase(it);
}

void reader_t::execute() {
    // build path
    auto path = std::filesystem::current_path()  / "test";
    // create folder if it does not exist
    if (!std::filesystem::exists(path))
        std::filesystem::create_directory(path);

    // define error variable
    std::error_code e;
    // infinite loop
    while(true) {
        // count number of files
        auto count = std::distance(std::filesystem::directory_iterator(path), std::filesystem::directory_iterator{});
        // filter notification to be executed if there are files in folder
        if (count > 0) {
            // traverse files and remove
            for (auto f: std::filesystem::directory_iterator{path}) {

                std::cout << f.path() << "\n";
                // to be defined
                // 1. open file and get content to be processed
                // 2. rules that will government the notification to the observers

                notify();
                // remove file once they were used
                std::filesystem::remove(f.path(), e);

                // alert by standard error stream if error has ocurred
                if (e)
                    std::cerr << e.message() << "\n";
            }
        }
    }
}

void finish_t::update() {
    std::cout << __FUNCTION__ << std::endl;
}

void start_t::update() {
    std::cout << __FUNCTION__ << std::endl;
}
