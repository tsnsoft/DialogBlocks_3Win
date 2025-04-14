/////////////////////////////////////////////////////////////////////////////
// Name:        form1.cpp
// Purpose:     
// Author:      Talipov S.N.
// Modified by: 
// Created:     14.04.2025 10:17:17
// RCS-ID:      
// Copyright:   Talipov S.N., 2025
// Licence:     
/////////////////////////////////////////////////////////////////////////////

// For compilers that support precompilation, includes "wx/wx.h".
#include "wx/wxprec.h"

#ifdef __BORLANDC__
#pragma hdrstop
#endif

#ifndef WX_PRECOMP
#include "wx/wx.h"
#endif

////@begin includes
#include "form2.h"
////@end includes

#include "form1.h"

////@begin XPM images
#include "tsnsoft.xpm"
////@end XPM images


/*
 * Form1 type definition
 */

IMPLEMENT_CLASS( Form1, wxFrame )


/*
 * Form1 event table definition
 */

BEGIN_EVENT_TABLE( Form1, wxFrame )

////@begin Form1 event table entries
    EVT_BUTTON( ID_BUTTON, Form1::OnButtonClickExit )
    EVT_BUTTON( ID_BUTTON1, Form1::OnButton1ClickNext )
////@end Form1 event table entries

END_EVENT_TABLE()


/*
 * Form1 constructors
 */

Form1::Form1()
{
    Init();
}

Form1::Form1( wxWindow* parent, wxWindowID id, const wxString& caption, const wxPoint& pos, const wxSize& size, long style )
{
    Init();
    Create( parent, id, caption, pos, size, style );
}


/*
 * Form1 creator
 */

bool Form1::Create( wxWindow* parent, wxWindowID id, const wxString& caption, const wxPoint& pos, const wxSize& size, long style )
{
////@begin Form1 creation
    wxFrame::Create( parent, id, caption, pos, size, style );

    CreateControls();
    SetIcon(GetIconResource(wxT("tsnsoft.xpm")));
    if (GetSizer())
    {
        GetSizer()->SetSizeHints(this);
    }
    Centre();
////@end Form1 creation
    return true;
}


/*
 * Form1 destructor
 */

Form1::~Form1()
{
////@begin Form1 destruction
////@end Form1 destruction
}


/*
 * Member initialisation
 */

void Form1::Init()
{
////@begin Form1 member initialisation
////@end Form1 member initialisation
}


/*
 * Control creation for Form1
 */

void Form1::CreateControls()
{    
////@begin Form1 content construction
    Form1* itemFrame1 = this;

    wxGridBagSizer* itemGridBagSizer1 = new wxGridBagSizer(0, 0);
    itemGridBagSizer1->SetEmptyCellSize(wxSize(10, 20));
    itemFrame1->SetSizer(itemGridBagSizer1);

    wxButton* itemButton1 = new wxButton( itemFrame1, ID_BUTTON, _("X"), wxDefaultPosition, wxDefaultSize, 0 );
    itemGridBagSizer1->Add(itemButton1, wxGBPosition(11, 0), wxGBSpan(1, 1), wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL|wxALL, 5);

    wxButton* itemButton2 = new wxButton( itemFrame1, ID_BUTTON1, _(">>>"), wxDefaultPosition, wxDefaultSize, 0 );
    itemGridBagSizer1->Add(itemButton2, wxGBPosition(11, 14), wxGBSpan(1, 1), wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL|wxALL, 5);

    wxStaticText* itemStaticText1 = new wxStaticText( itemFrame1, wxID_STATIC, wxGetTranslation(wxString() + (wxChar) 0x042D + (wxChar) 0x0442 + (wxChar) 0x043E + wxT(" ") + (wxChar) 0x043E + (wxChar) 0x043A + (wxChar) 0x043D + (wxChar) 0x043E + wxT(" 1")), wxDefaultPosition, wxDefaultSize, 0 );
    itemStaticText1->SetForegroundColour(wxColour(0, 128, 0));
    itemStaticText1->SetFont(wxFont(13, wxFONTFAMILY_SWISS, wxFONTSTYLE_NORMAL, wxFONTWEIGHT_BOLD, true, wxT("Segoe UI")));
    itemGridBagSizer1->Add(itemStaticText1, wxGBPosition(4, 7), wxGBSpan(1, 1), wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL|wxALL, 5);

////@end Form1 content construction
}


/*
 * Should we show tooltips?
 */

bool Form1::ShowToolTips()
{
    return true;
}

/*
 * Get bitmap resources
 */

wxBitmap Form1::GetBitmapResource( const wxString& name )
{
    // Bitmap retrieval
////@begin Form1 bitmap retrieval
    wxUnusedVar(name);
    return wxNullBitmap;
////@end Form1 bitmap retrieval
}

/*
 * Get icon resources
 */

wxIcon Form1::GetIconResource( const wxString& name )
{
    // Icon retrieval
////@begin Form1 icon retrieval
    wxUnusedVar(name);
    if (name == wxT("tsnsoft.xpm"))
    {
        wxIcon icon(tsnsoft_xpm);
        return icon;
    }
    return wxNullIcon;
////@end Form1 icon retrieval
}


/*
 * wxEVT_COMMAND_BUTTON_CLICKED event handler for ID_BUTTON
 */

void Form1::OnButtonClickExit( wxCommandEvent& event )
{
////@begin wxEVT_COMMAND_BUTTON_CLICKED event handler for ID_BUTTON in Form1.
    // Before editing this code, remove the block markers.
    Destroy();
////@end wxEVT_COMMAND_BUTTON_CLICKED event handler for ID_BUTTON in Form1. 
}


/*
 * wxEVT_COMMAND_BUTTON_CLICKED event handler for ID_BUTTON1
 */

void Form1::OnButton1ClickNext( wxCommandEvent& event )
{
    Form2* window = new Form2(this);
    window->Show(true);
    Hide();
}

