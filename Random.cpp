#include "Random.h"


Random::Random()
{
}


int Random::Next(int from, int to)
{
    return std::uniform_int_distribution<>{ from, to }(this->mt);
}


int Random::Next(int to)
{
    return std::uniform_int_distribution<>{ 0, to }(this->mt);
}





RandomDouble::RandomDouble()
{
}


double RandomDouble::Next(double from, double to)
{
    return std::uniform_real_distribution<>{ from, to }(this->mt);
}


double RandomDouble::Next(double to)
{
    return std::uniform_real_distribution<>{ 0.0, to }(this->mt);
}




RangedRandom::RangedRandom(int from, int to) : rnd{ from, to }
{
}


RangedRandom::RangedRandom(int to) : rnd{ 0, to }
{
}


int RangedRandom::Next()
{
    return this->rnd(this->mt);
}





RangedRandomDouble::RangedRandomDouble(double from, double to) :rnd{ from, to }
{
}


RangedRandomDouble::RangedRandomDouble(double to) : rnd{ 0.0, to }
{
}


double RangedRandomDouble::Next()
{
    return this->rnd(this->mt);
}

