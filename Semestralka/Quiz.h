/**
 *
 * The main class that creates the quiz.
 *
 */
#ifndef QUIZ_H_INCLUDED // хз, что это, лучше оставлю
#define QUIZ_H_INCLUDED

#include <iostream> //посмотреть по библиотекам, что мне надо
#include <vector>
#include <string>
#include <fstream>
#include <stdexcept>
#include <ctype.h>
#include <limits>
#include "Question.h"



using namespace std;

class Quiz
{
private:
    int score; // player's score
    int max; // the maximum score
    int countOfQuestion; // the count of question in the quiz
    vector<Question> teacherQuiz;
    vector<Question> studentQuiz;

    int CalculateScore (  ) const; // for calculating player's score

    void NewQuiz (); // for create a new quiz

    void ExportQuiz (); // for export

    void run(); // run the quiz


public:
    Quiz (int countOfQuestion){

    }

    ~Quiz (){

    }

    void SetScore ( int score) (){

    }

    int GetScore (){

    }
    int GetMax (){

    }
};
#endif // QUIZ_H_INCLUDED
