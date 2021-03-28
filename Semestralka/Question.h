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
#include "Answer.h"

using namespace std;

class Question
{
protected:
    int questionId;
    string question;
    vector<Answer> answers;

public:

    Question (int questionId, string question, vector<Answer> answers);

    virtual ~Question() {}

    virtual int CalculateScore(); // for answer's evaluation

    //TODO getters


};

#endif //UNTITLED14_QUESTION_H
