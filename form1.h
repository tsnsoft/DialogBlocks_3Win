/////////////////////////////////////////////////////////////////////////////
// Name:        form1.h
// Purpose:     
// Author:      Talipov S.N.
// Modified by: 
// Created:     14.04.2025 10:17:17
// RCS-ID:      
// Copyright:   Talipov S.N., 2025
// Licence:     
/////////////////////////////////////////////////////////////////////////////

#ifndef _FORM1_H_
#define _FORM1_H_


/*!
 * Includes
 */

////@begin includes
#include "wx/frame.h"
#include "wx/gbsizer.h"
////@end includes

/*!
 * Forward declarations
 */

////@begin forward declarations
////@end forward declarations

/*!
 * Control identifiers
 */

////@begin control identifiers
#define ID_FORM1 10000
#define ID_BUTTON 10001
#define ID_BUTTON1 10002
#define SYMBOL_FORM1_STYLE wxCAPTION|wxRESIZE_BORDER|wxSYSTEM_MENU|wxCLOSE_BOX
#define SYMBOL_FORM1_TITLE _("Form1")
#define SYMBOL_FORM1_IDNAME ID_FORM1
#define SYMBOL_FORM1_SIZE wxSize(400, 300)
#define SYMBOL_FORM1_POSITION wxDefaultPosition
////@end control identifiers


/*!
 * Form1 class declaration
 */

class Form1: public wxFrame
{    
    DECLARE_CLASS( Form1 )
    DECLARE_EVENT_TABLE()

public:
    /// Constructors
    Form1();
    Form1( wxWindow* parent, wxWindowID id = SYMBOL_FORM1_IDNAME, const wxString& caption = SYMBOL_FORM1_TITLE, const wxPoint& pos = SYMBOL_FORM1_POSITION, const wxSize& size = SYMBOL_FORM1_SIZE, long style = SYMBOL_FORM1_STYLE );

    bool Create( wxWindow* parent, wxWindowID id = SYMBOL_FORM1_IDNAME, const wxString& caption = SYMBOL_FORM1_TITLE, const wxPoint& pos = SYMBOL_FORM1_POSITION, const wxSize& size = SYMBOL_FORM1_SIZE, long style = SYMBOL_FORM1_STYLE );

    /// Destructor
    ~Form1();

    /// Initialises member variables
    void Init();

    /// Creates the controls and sizers
    void CreateControls();

////@begin Form1 event handler declarations

    /// wxEVT_COMMAND_BUTTON_CLICKED event handler for ID_BUTTON
    void OnButtonClickExit( wxCommandEvent& event );

    /// wxEVT_COMMAND_BUTTON_CLICKED event handler for ID_BUTTON1
    void OnButton1ClickNext( wxCommandEvent& event );

////@end Form1 event handler declarations

////@begin Form1 member function declarations

    /// Retrieves bitmap resources
    wxBitmap GetBitmapResource( const wxString& name );

    /// Retrieves icon resources
    wxIcon GetIconResource( const wxString& name );
////@end Form1 member function declarations

    /// Should we show tooltips?
    static bool ShowToolTips();

////@begin Form1 member variables
////@end Form1 member variables
};

#endif
    // _FORM1_H_
