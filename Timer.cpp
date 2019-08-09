#include "Timer.h"


Timer::Timer() : beginnig{ std::chrono::high_resolution_clock::now() }
{
}


void Timer::Reset()
{
    this->beginnig = std::chrono::high_resolution_clock::now();
}


double Timer::elapsed() const
{
    return std::chrono::duration_cast<std::chrono::duration < double, std::ratio<1>>>(std::chrono::high_resolution_clock::now() - this->beginnig).count();
}
