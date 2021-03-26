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

    int variant; //variant of the test - 1 or 2
    int numberOfQuestion; // number of the question in the test
    int numberOfAnswer;

    int AnswerScore();

public:

    Answer ( int numberOfQuestion, int variant, int numberOfAnswer ){

    }

    ~Answer ( ){

    }

    int GetVariant (){

    };
    int GetNumberOfQuestion (){

    };

};
#endif //MAIN_CPP_ANSWER_H
