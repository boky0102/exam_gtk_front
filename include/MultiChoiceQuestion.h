#include "IQuestion.h"
#include "stdafx.h"

class MultiChoiceQuestion : public IQuestion {

public:
  MultiChoiceQuestion(std::string question, std::vector<std::string> answers,
                      int correctAnswer);

  // IQuestion
  auto GetQuestion() const -> std::string override;
  void SetQuestion(std::string) override;
  auto GetAnswer() const -> std::string override;

private:
  std::string m_question;
  std::map<int, std::string> m_answers;
  int m_correctAnswer;
};
