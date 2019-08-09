#ifndef RANDOM_H
#define RANDOM_H

#include <random>


class Random
{
private:
    std::mt19937 mt{ std::random_device{}() };
public:
    Random();
    int Next(int from, int to);
    int Next(int to);
};


class RandomDouble
{
private:
    std::mt19937 mt{ std::random_device{}() };
public:
    RandomDouble();
    double Next(double from, double to);
    double Next(double to);
};


class RangedRandom
{
private:
    std::mt19937 mt{ std::random_device{}() };
    std::uniform_int_distribution<> rnd;
public:
    RangedRandom(int from, int to);
    RangedRandom(int to);
    int Next();
};


class RangedRandomDouble
{
private:
    std::mt19937 mt{ std::random_device{}() };
    std::uniform_real_distribution<> rnd;
public:
    RangedRandomDouble(double from, double to);
    RangedRandomDouble(double to);
    double Next();
};


#endif
