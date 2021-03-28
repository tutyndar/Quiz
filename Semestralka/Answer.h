/**
 *  The class for answers
 */

#ifndef MAIN_CPP_ANSWER_H
#define MAIN_CPP_ANSWER_H

#include <iostream> //посмотреть по библиотекам, что мне надо
#include <vector>
#include <string>
#include <fstream>
#include <stdexcept>
#include <ctype.h>
#include <limits>

using namespace std;

class Answer {
private:
    int answerId;
    string answer;

public:

    Answer(int answerId, string answer);

    ~Answer() {}

    //TODO getters

};
#endif //MAIN_CPP_ANSWER_H
