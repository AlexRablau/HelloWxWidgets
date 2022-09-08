#include <wx/wxprec.h> 

#ifndef WX_PRECOMP
  #include <wx/wx.h>
#endif

class MyFrame : public wxFrame
{
private:
  void OnHello(wxCommandEvent& event);
  void OnExit(wxCommandEvent& event);
  void OnAbout(wxCommandEvent& event);
  
  enum{
    ID_Hello = 1
  };
public:
  MyFrame();
};

