#ifndef HARD_HPP
#define HARD_HPP

#include "Difficulty.hpp"
#include <iostream>
#include <vector>
using namespace std;
class Board;
class Hard: public Difficulty{
        public:
		Hard(Board* b);
		virtual bool difficulty();
};
#endif //HARD_CPP
