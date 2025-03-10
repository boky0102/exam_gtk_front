#include "MultiChoiceQuestion.h"

MultiChoiceQuestion::MultiChoiceQuestion(std::string question,
                                         std::vector<std::string> answers,
                                         int correctAnswer)
    : m_question{question}, m_correctAnswer{correctAnswer} {

  int i = 0;
  for (const auto &answer : answers) {
    m_answers[i] = answer;
  }
};

auto MultiChoiceQuestion::GetQuestion() const -> std::string {
  return m_question;
}

void MultiChoiceQuestion::SetQuestion(std::string question) {
  m_question = question;
}

auto MultiChoiceQuestion::GetAnswer() const -> std::string {
  return m_answers.at(m_correctAnswer);
}
