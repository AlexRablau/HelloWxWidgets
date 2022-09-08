// wxWidgets "Hello World" Program

#include "frame.h"
 
// For compilers that support precompilation, includes "wx/wx.h".
#include <wx/wxprec.h>
 
#ifndef WX_PRECOMP
  #include <wx/wx.h>
#endif

class App : public wxApp
{
public:
  virtual bool OnInit();
};

bool App::OnInit()
{
    MyFrame *frame = new MyFrame();
    frame->Show(true);
    return true;
}

wxIMPLEMENT_APP(App);