#include <random>

double randm()
{
    std::random_device rd;
    std::mt19937 gen(rd());
    std::uniform_real_distribution <> dis(0, 1);
    return dis(gen);
}