//
// Created by rudri on 11/19/2019.
//

#ifndef OBSERVER_PATTERN_OBSERVER_H
#define OBSERVER_PATTERN_OBSERVER_H

#include <vector>
#include <memory>

class observer_t {
public:
    virtual void update() = 0;
};

class start_t: public observer_t {
public:
    void update() override;
};

class finish_t: public observer_t {
public:
    void update() override;
};

class reader_t {
    std::vector<observer_t*> observers_;
public:
    void attach(observer_t* observer);
    void detach(observer_t* observer);
    void notify();
    void execute();
};


#endif //OBSERVER_PATTERN_OBSERVER_H
