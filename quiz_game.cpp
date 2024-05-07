#include <iostream>

int main() {
  std::string questions[] = {"1. What year was C++ created?: ",
  "2. Who invented C++?: ",
  "3. What is the predecessor of C++?: ",
  "4. is the Earth Flat?: "};

  std::string options[][4] = {
    {"A. 1969", "B. 1975", "C. 1985", "D. 1980"},
    {"A. Guido van Rossum", "B. Bjarne Stroustrup", "C. John Carmack", "D. Mark Zuckerburg"},
    {"A. C", "B. C+", "C. C--", "D. B++"},
    {"A. Yes", "B. No", "C. Sometimes", "D. Donut"}
  };

  char answerKey[] = {'C', 'B', 'A', 'B'};

  int size = sizeof(questions) / sizeof(questions[0]);
  char guess;
  int score = 0;

  for (int i = 0; i < size; i++)
  {
    std::cout << "###################" << std::endl;
    std::cout << questions[i];
    std::cout << "###################" << std::endl;

    for (int j = 0; j < sizeof(options[i]) / sizeof(options[i][0]); j++){
        std::cout << options[i][j] << std::endl;
  }

  std::cin >> guess;
  guess = toupper(guess);

  if (guess == answerKey[i])
  {
    std::cout << "Correct!\n";
    score++;
  }
  else
  {
    std::cout << "Wrong!\n";
    std::cout << "Answer: " << answerKey[i] << std::endl;
  }
  }

  std::cout << "Correct Guesses: " << score << std::endl;
  std::cout << "Score: " << score / (float) size * 100 << "%" << std::endl;

  return 0;
}