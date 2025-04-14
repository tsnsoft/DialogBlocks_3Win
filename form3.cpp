/////////////////////////////////////////////////////////////////////////////
// Name:        form3.cpp
// Purpose:     
// Author:      Talipov S.N.
// Modified by: 
// Created:     14.04.2025 10:17:48
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
////@end includes

#include "form3.h"

////@begin XPM images
#include "tsnsoft.xpm"
////@end XPM images


/*
 * Form3 type definition
 */

IMPLEMENT_CLASS( Form3, wxFrame )


/*
 * Form3 event table definition
 */

BEGIN_EVENT_TABLE( Form3, wxFrame )

////@begin Form3 event table entries
    EVT_CLOSE( Form3::OnCloseWindow )
    EVT_BUTTON( ID_BUTTON4, Form3::OnButton4ClickPrior )
    EVT_BUTTON( ID_BUTTON5, Form3::OnButton5ClickExit )
////@end Form3 event table entries

END_EVENT_TABLE()


/*
 * Form3 constructors
 */

Form3::Form3()
{
    Init();
}

Form3::Form3( wxWindow* parent, wxWindowID id, const wxString& caption, const wxPoint& pos, const wxSize& size, long style )
{
    Init();
    Create( parent, id, caption, pos, size, style );
}


/*
 * Form3 creator
 */

bool Form3::Create( wxWindow* parent, wxWindowID id, const wxString& caption, const wxPoint& pos, const wxSize& size, long style )
{
////@begin Form3 creation
    wxFrame::Create( parent, id, caption, pos, size, style );

    CreateControls();
    SetIcon(GetIconResource(wxT("tsnsoft.xpm")));
    if (GetSizer())
    {
        GetSizer()->SetSizeHints(this);
    }
    Centre();
////@end Form3 creation
    return true;
}


/*
 * Form3 destructor
 */

Form3::~Form3()
{
////@begin Form3 destruction
////@end Form3 destruction
}


/*
 * Member initialisation
 */

void Form3::Init()
{
////@begin Form3 member initialisation
////@end Form3 member initialisation
}


/*
 * Control creation for Form3
 */

void Form3::CreateControls()
{    
////@begin Form3 content construction
    Form3* itemFrame1 = this;

    wxGridBagSizer* itemGridBagSizer1 = new wxGridBagSizer(0, 0);
    itemGridBagSizer1->SetEmptyCellSize(wxSize(10, 20));
    itemFrame1->SetSizer(itemGridBagSizer1);

    wxButton* itemButton1 = new wxButton( itemFrame1, ID_BUTTON4, _("<<<"), wxDefaultPosition, wxDefaultSize, 0 );
    itemGridBagSizer1->Add(itemButton1, wxGBPosition(11, 0), wxGBSpan(1, 1), wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL|wxALL, 5);

    wxButton* itemButton2 = new wxButton( itemFrame1, ID_BUTTON5, _("X"), wxDefaultPosition, wxDefaultSize, 0 );
    itemGridBagSizer1->Add(itemButton2, wxGBPosition(11, 16), wxGBSpan(1, 1), wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL|wxALL, 5);

    wxStaticText* itemStaticText1 = new wxStaticText( itemFrame1, wxID_STATIC, wxGetTranslation(wxString() + (wxChar) 0x042D + (wxChar) 0x0442 + (wxChar) 0x043E + wxT(" ") + (wxChar) 0x043E + (wxChar) 0x043A + (wxChar) 0x043D + (wxChar) 0x043E + wxT(" 3")), wxDefaultPosition, wxDefaultSize, 0 );
    itemStaticText1->SetForegroundColour(wxColour(0, 128, 0));
    itemStaticText1->SetFont(wxFont(13, wxFONTFAMILY_SWISS, wxFONTSTYLE_NORMAL, wxFONTWEIGHT_BOLD, true, wxT("Segoe UI")));
    itemGridBagSizer1->Add(itemStaticText1, wxGBPosition(4, 7), wxGBSpan(1, 1), wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL|wxALL, 5);

////@end Form3 content construction
}


/*
 * Should we show tooltips?
 */

bool Form3::ShowToolTips()
{
    return true;
}

/*
 * Get bitmap resources
 */

wxBitmap Form3::GetBitmapResource( const wxString& name )
{
    // Bitmap retrieval
////@begin Form3 bitmap retrieval
    wxUnusedVar(name);
    return wxNullBitmap;
////@end Form3 bitmap retrieval
}

/*
 * Get icon resources
 */

wxIcon Form3::GetIconResource( const wxString& name )
{
    // Icon retrieval
////@begin Form3 icon retrieval
    wxUnusedVar(name);
    if (name == wxT("tsnsoft.xpm"))
    {
        wxIcon icon(tsnsoft_xpm);
        return icon;
    }
    return wxNullIcon;
////@end Form3 icon retrieval
}


/*
 * wxEVT_COMMAND_BUTTON_CLICKED event handler for ID_BUTTON5
 */

void Form3::OnButton5ClickExit( wxCommandEvent& event )
{
    wxTheApp->Exit();
}


/*
 * wxEVT_CLOSE_WINDOW event handler for ID_FORM3
 */

void Form3::OnCloseWindow( wxCloseEvent& event )
{
    wxWindow* parent = this -> GetParent();  // Сохраняем указатель на родителя
    this -> Destroy();  // Уничтожаем текущее окно
    parent -> Show(true); // Показываем предыдущее окно
}


/*
 * wxEVT_COMMAND_BUTTON_CLICKED event handler for ID_BUTTON4
 */

void Form3::OnButton4ClickPrior( wxCommandEvent& event )
{
    wxWindow* parent = this -> GetParent();  // Сохраняем указатель на родителя
    this -> Destroy();  // Уничтожаем текущее окно
    parent -> Show(true); // Показываем предыдущее окно
}

