#include "stdafx.h"
#include "ExamTypes.h"

class ExamSettings {
public:
  ExamSettings(std::string subject, int multiChoiceNumber, int openEndedNumber, Types::Difficulty difficulty);
 
  auto GetSubject() -> std::string;
  auto GetMultiChoiceNumber() -> int;
  auto GetOpenEndedNumber() -> int;
  auto GetDifficulty() -> Types::Difficulty;
  
  void SetSubject(std::string subject);
  void SetMultiChoiceNumber(int multiNumber);
  void SetOpenEndedNumber(int openEndedNumber);
  void SetDifficulty(Types::Difficulty difficulty);
  
private:
  
  std::string m_subject;
  
  // NOTE: in the future add possibility for math questions, coding questions etc ...
  int m_multiChoiceNumber;
  int m_openEndedNumber;
  Types::Difficulty m_difficulty;
};
