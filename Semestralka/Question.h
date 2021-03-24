/**
 *  The class for questions
 */

#ifndef UNTITLED14_QUESTION_H
#define UNTITLED14_QUESTION_H

#include <iostream> //посмотреть по библиотекам, что мне надо
#include <vector>
#include <string>
#include <fstream>
#include <stdexcept>
#include <ctype.h>
#include <limits>

using namespace std;

class Question
{
private:
    int variant; //variant of the test - 1 or 2
    int number; // number of the question in the test
    string question;
    int answer0;
    string answer1;
public:
    int AnswerScore;
};

#endif //UNTITLED14_QUESTION_H
