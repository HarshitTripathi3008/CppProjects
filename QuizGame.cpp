#include <iostream>
#include <string>

int main() {
    std::string questions[] = {
        "1. WHAT YEAR WAS C++ CREATED?: ",
        "2. WHO INVENTED C++?: ",
        "3. WHAT IS THE PREDECESSOR OF C++?: ",
        "4. IS THE EARTH FLAT?: "
    };

    std::string options[][4] = {
        {"A. 1969", "B. 1975", "C. 1985", "D. 1989"},
        {"A. Guido Van Rossum", "B. Bjarne Stroustrup", "C. John Carmack", "D. Mark Zuckerburg"},
        {"A. C", "B. C+", "C. C--", "D. B++"},
        {"A. YES", "B. NO", "C. Sometimes", "D. What's Earth?"}
    };

    char answerkey[] = {'C', 'B', 'A', 'B'};
    int size = sizeof(questions) / sizeof(questions[0]);
    int score = 0;
    char guess;

    for (int i = 0; i < size; i++) {
        std::cout << "*******************************************************************\n";
        std::cout << questions[i] << '\n';
        std::cout << "*******************************************************************\n";

        for (int j = 0; j < sizeof(options[i])/sizeof(options[i][0]); j++) {
            std::cout << options[i][j] << '\n';
        }

        std::cout << "Enter your answer (A or a, B or b, C or c, D or d): ";
        std::cin >> guess;
        guess = toupper(guess);

        if (guess == answerkey[i]) {
            std::cout << "Correct!\n";
            score++;
        } else {
            std::cout << "Incorrect. The correct answer is " << answerkey[i] << '\n';
        }
    }
    std::cout << "*******************************************************************\n";
    std::cout << "#                         RESULT                                  #\n";
    std::cout << "*******************************************************************\n";
    std::cout << "Your final score is: " << score << " out of " << size << '\n';
    std::cout << "SCORE: "<<(score/(double)size)*100<<"%";
    return 0;
}
