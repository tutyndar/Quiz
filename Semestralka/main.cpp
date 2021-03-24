#include <iostream> //понятия не имею, какие мне нужны библиотеки
#include <cstdlib>
#include <stdio.h>
#include <list>
#include <iomanip>
#include <fstream>
#include <stdexcept>
#include "Quiz.h"
#include "Question.h"
#include "Answer.h"

using namespace std;

int main()
{
    try
    {
        Quiz quiz;
        quiz.initialize();
        quiz.run();
    }
    catch(invalid_argument& a)
    {
        cout<<a.what()<<endl;
    }
}
