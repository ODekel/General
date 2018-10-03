#ifndef TIMER_H
#define TIMER_H

#include <chrono>

class Timer
{
private:
    std::chrono::time_point<std::chrono::high_resolution_clock> beginnig;
public:
    Timer();
    ~Timer();
    void Reset();
    double elapsed() const;
};

#endif
