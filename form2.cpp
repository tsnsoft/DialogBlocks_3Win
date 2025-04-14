/////////////////////////////////////////////////////////////////////////////
// Name:        form2.cpp
// Purpose:     
// Author:      Talipov S.N.
// Modified by: 
// Created:     14.04.2025 10:17:38
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
#include "form3.h"
////@end includes

#include "form2.h"

////@begin XPM images
#include "tsnsoft.xpm"
////@end XPM images


/*
 * Form2 type definition
 */

IMPLEMENT_CLASS( Form2, wxFrame )


/*
 * Form2 event table definition
 */

BEGIN_EVENT_TABLE( Form2, wxFrame )

////@begin Form2 event table entries
    EVT_CLOSE( Form2::OnCloseWindow )
    EVT_BUTTON( ID_BUTTON2, Form2::OnButton2ClickPrior )
    EVT_BUTTON( ID_BUTTON3, Form2::OnButton3ClickNext )
////@end Form2 event table entries

END_EVENT_TABLE()


/*
 * Form2 constructors
 */

Form2::Form2()
{
    Init();
}

Form2::Form2( wxWindow* parent, wxWindowID id, const wxString& caption, const wxPoint& pos, const wxSize& size, long style )
{
    Init();
    Create( parent, id, caption, pos, size, style );
}


/*
 * Form2 creator
 */

bool Form2::Create( wxWindow* parent, wxWindowID id, const wxString& caption, const wxPoint& pos, const wxSize& size, long style )
{
////@begin Form2 creation
    wxFrame::Create( parent, id, caption, pos, size, style );

    CreateControls();
    SetIcon(GetIconResource(wxT("tsnsoft.xpm")));
    if (GetSizer())
    {
        GetSizer()->SetSizeHints(this);
    }
    Centre();
////@end Form2 creation
    return true;
}


/*
 * Form2 destructor
 */

Form2::~Form2()
{
////@begin Form2 destruction
////@end Form2 destruction
}


/*
 * Member initialisation
 */

void Form2::Init()
{
////@begin Form2 member initialisation
////@end Form2 member initialisation
}


/*
 * Control creation for Form2
 */

void Form2::CreateControls()
{    
////@begin Form2 content construction
    Form2* itemFrame1 = this;

    wxGridBagSizer* itemGridBagSizer1 = new wxGridBagSizer(0, 0);
    itemGridBagSizer1->SetEmptyCellSize(wxSize(10, 20));
    itemFrame1->SetSizer(itemGridBagSizer1);

    wxButton* itemButton1 = new wxButton( itemFrame1, ID_BUTTON2, _("<<<"), wxDefaultPosition, wxDefaultSize, 0 );
    itemGridBagSizer1->Add(itemButton1, wxGBPosition(10, 0), wxGBSpan(1, 1), wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL|wxALL, 5);

    wxButton* itemButton2 = new wxButton( itemFrame1, ID_BUTTON3, _(">>>"), wxDefaultPosition, wxDefaultSize, 0 );
    itemGridBagSizer1->Add(itemButton2, wxGBPosition(10, 11), wxGBSpan(1, 1), wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL|wxALL, 5);

    wxStaticText* itemStaticText1 = new wxStaticText( itemFrame1, wxID_STATIC, wxGetTranslation(wxString() + (wxChar) 0x042D + (wxChar) 0x0442 + (wxChar) 0x043E + wxT(" ") + (wxChar) 0x043E + (wxChar) 0x043A + (wxChar) 0x043D + (wxChar) 0x043E + wxT(" 2")), wxDefaultPosition, wxDefaultSize, 0 );
    itemStaticText1->SetForegroundColour(wxColour(0, 128, 0));
    itemStaticText1->SetFont(wxFont(13, wxFONTFAMILY_SWISS, wxFONTSTYLE_NORMAL, wxFONTWEIGHT_BOLD, true, wxT("Segoe UI")));
    itemGridBagSizer1->Add(itemStaticText1, wxGBPosition(4, 7), wxGBSpan(1, 1), wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL|wxALL, 5);

////@end Form2 content construction
}


/*
 * Should we show tooltips?
 */

bool Form2::ShowToolTips()
{
    return true;
}

/*
 * Get bitmap resources
 */

wxBitmap Form2::GetBitmapResource( const wxString& name )
{
    // Bitmap retrieval
////@begin Form2 bitmap retrieval
    wxUnusedVar(name);
    return wxNullBitmap;
////@end Form2 bitmap retrieval
}

/*
 * Get icon resources
 */

wxIcon Form2::GetIconResource( const wxString& name )
{
    // Icon retrieval
////@begin Form2 icon retrieval
    wxUnusedVar(name);
    if (name == wxT("tsnsoft.xpm"))
    {
        wxIcon icon(tsnsoft_xpm);
        return icon;
    }
    return wxNullIcon;
////@end Form2 icon retrieval
}


/*
 * wxEVT_CLOSE_WINDOW event handler for ID_FORM2
 */

void Form2::OnCloseWindow( wxCloseEvent& event )
{
    wxWindow* parent = this -> GetParent();  // Сохраняем указатель на родителя
    this -> Destroy();  // Уничтожаем текущее окно
    parent -> Show(true); // Показываем предыдущее окно
}


/*
 * wxEVT_COMMAND_BUTTON_CLICKED event handler for ID_BUTTON3
 */

void Form2::OnButton3ClickNext( wxCommandEvent& event )
{
    Form3* window = new Form3(this);
    window->Show(true);
    Hide();
}


/*
 * wxEVT_COMMAND_BUTTON_CLICKED event handler for ID_BUTTON2
 */

void Form2::OnButton2ClickPrior( wxCommandEvent& event )
{
    wxWindow* parent = this -> GetParent();  // Сохраняем указатель на родителя
    this -> Destroy();  // Уничтожаем текущее окно
    parent -> Show(true); // Показываем предыдущее окно
}

