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



using namespace std;

class Quiz
{
private:
    int score; // player's score
    int max; // the maximum score

    int CalculateScore (  ) const; // for calculating player's score

    void NewQuiz (); // for create a new quiz

    Void ExportQuiz (); // gor export

    void run(); // Run the quiz
};
#endif // QUIZ_H_INCLUDED
