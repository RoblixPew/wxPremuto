///////////////////////////////////////////////////////////////////////////
// C++ code generated with wxFormBuilder (version 4.2.1-0-g80c4cb6)
// http://www.wxformbuilder.org/
//
// PLEASE DO *NOT* EDIT THIS FILE!
///////////////////////////////////////////////////////////////////////////

#include "MyProjectBase.h"

///////////////////////////////////////////////////////////////////////////

m_framepremere::m_framepremere( wxWindow* parent, wxWindowID id, const wxString& title, const wxPoint& pos, const wxSize& size, long style ) : wxFrame( parent, id, title, pos, size, style )
{
	this->SetSizeHints( wxDefaultSize, wxDefaultSize );

	wxBoxSizer* bSizer1;
	bSizer1 = new wxBoxSizer( wxHORIZONTAL );

	scritta = new wxStaticText( this, wxID_ANY, _("Bottone Non Premuto"), wxDefaultPosition, wxDefaultSize, 0 );
	scritta->Wrap( -1 );
	bSizer1->Add( scritta, 0, wxALL, 5 );

	bottone = new wxButton( this, wxID_ANY, _("Premere"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizer1->Add( bottone, 0, wxALL, 5 );


	this->SetSizer( bSizer1 );
	this->Layout();

	this->Centre( wxBOTH );

	// Connect Events
	bottone->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( m_framepremere::cambioscritta ), NULL, this );
}

m_framepremere::~m_framepremere()
{
}
