#include "LocalAiConnection.h"

LocalAiConnection::LocalAiConnection(){
  m_source = "bla";
}


bool LocalAiConnection::EstablishConnection(std::string path){
  
  // here add logic to fetch data from the local ai service e.g. Ollama
  return true;
}

std::string LocalAiConnection::Prompt(std::string question){
  return std::string("hi");
}
