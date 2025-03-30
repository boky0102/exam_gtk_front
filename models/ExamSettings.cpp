#include "ExamSettings.h"
#include "ExamTypes.h"

ExamSettings::ExamSettings(std::string subject, int multiChoiceNumber, int openEndedNumber, Types::Difficulty difficutly)
  : m_subject{subject}
  , m_multiChoiceNumber(multiChoiceNumber)
  , m_openEndedNumber(openEndedNumber)
  , m_difficulty(difficutly)
{}

auto ExamSettings::GetDifficulty() -> Types::Difficulty
{
  return m_difficulty;
}

auto ExamSettings::GetMultiChoiceNumber() -> int
{
  return m_multiChoiceNumber;
}

auto ExamSettings::GetOpenEndedNumber() -> int
{
  return m_openEndedNumber;
}

auto ExamSettings::GetSubject() -> std::string
{
  return m_subject;
}

// TODO: add fast signals and fire them when settings have changed if needed

void ExamSettings::SetDifficulty(Types::Difficulty difficulty)
{
  m_difficulty = difficulty;
}

void ExamSettings::SetMultiChoiceNumber(int number)
{
  m_multiChoiceNumber = number;
}

void ExamSettings::SetOpenEndedNumber(int number)
{
  m_openEndedNumber = number;
}

void ExamSettings::SetSubject(std::string subject)
{
  m_subject = subject;
}
