#include "Exam.h"
#include "LocalAiConnection.h"
#include "stdafx.h"
#include <gtkmm.h>

class MyWindow : public Gtk::Window {
public:
  MyWindow();
};

MyWindow::MyWindow() {
  set_title("Basic application");
  set_default_size(700, 500);
}

// TODO: check if cpr is properly linked !!!

int main(int argc, char *argv[]) {
  auto app = Gtk::Application::create("org.gtkmm.examples.base");

  auto aiConn = LocalAiConnection();
  aiConn.EstablishConnection("http://localhost:11434");

  auto ex = Exam();

  return app->make_window_and_run<MyWindow>(argc, argv);
}
