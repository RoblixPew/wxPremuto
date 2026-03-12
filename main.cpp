#include <wx/wx.h>
#include "MyProjectBase.h"

class click : public m_framepremere
{
public:
    click(wxWindow* parent) : m_framepremere(parent) {}

protected:
    void cambioscritta(wxCommandEvent& event)
    {
        scritta->SetLabel(wxString::Format("Bottone Premuto"));
    }
};

class AppClick : public wxApp
{
public:
    bool OnInit() override
    {
        click* frame = new click(nullptr);
        frame->Show(true);
        return true;
    }
};

wxIMPLEMENT_APP(AppClick);