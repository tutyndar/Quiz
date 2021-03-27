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
    int numberOfQuestion; // number of the question in the test
    string question;
    string typeOfQuestion;

    string variantOfAnswer;

    int AnswerScore (); // for answer's evaluation

public:

    Question ( string question, string typeOfQuestion){

        string answer;
    }

    ~Question ( ){

    }

    void SetQuestion (string question){

    }

    int GetVariant (){

    }
    int GetNumberOfQuestion (){

    }
};

#endif //UNTITLED14_QUESTION_H
