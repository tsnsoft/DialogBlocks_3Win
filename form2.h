/////////////////////////////////////////////////////////////////////////////
// Name:        form2.h
// Purpose:     
// Author:      Talipov S.N.
// Modified by: 
// Created:     14.04.2025 10:17:38
// RCS-ID:      
// Copyright:   Talipov S.N., 2025
// Licence:     
/////////////////////////////////////////////////////////////////////////////

#ifndef _FORM2_H_
#define _FORM2_H_


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
#define ID_FORM2 10003
#define ID_BUTTON2 10004
#define ID_BUTTON3 10005
#define SYMBOL_FORM2_STYLE wxCAPTION|wxRESIZE_BORDER|wxSYSTEM_MENU|wxCLOSE_BOX
#define SYMBOL_FORM2_TITLE _("Form2")
#define SYMBOL_FORM2_IDNAME ID_FORM2
#define SYMBOL_FORM2_SIZE wxSize(400, 300)
#define SYMBOL_FORM2_POSITION wxDefaultPosition
////@end control identifiers


/*!
 * Form2 class declaration
 */

class Form2: public wxFrame
{    
    DECLARE_CLASS( Form2 )
    DECLARE_EVENT_TABLE()

public:
    /// Constructors
    Form2();
    Form2( wxWindow* parent, wxWindowID id = SYMBOL_FORM2_IDNAME, const wxString& caption = SYMBOL_FORM2_TITLE, const wxPoint& pos = SYMBOL_FORM2_POSITION, const wxSize& size = SYMBOL_FORM2_SIZE, long style = SYMBOL_FORM2_STYLE );

    bool Create( wxWindow* parent, wxWindowID id = SYMBOL_FORM2_IDNAME, const wxString& caption = SYMBOL_FORM2_TITLE, const wxPoint& pos = SYMBOL_FORM2_POSITION, const wxSize& size = SYMBOL_FORM2_SIZE, long style = SYMBOL_FORM2_STYLE );

    /// Destructor
    ~Form2();

    /// Initialises member variables
    void Init();

    /// Creates the controls and sizers
    void CreateControls();

////@begin Form2 event handler declarations

    /// wxEVT_CLOSE_WINDOW event handler for ID_FORM2
    void OnCloseWindow( wxCloseEvent& event );

    /// wxEVT_COMMAND_BUTTON_CLICKED event handler for ID_BUTTON2
    void OnButton2ClickPrior( wxCommandEvent& event );

    /// wxEVT_COMMAND_BUTTON_CLICKED event handler for ID_BUTTON3
    void OnButton3ClickNext( wxCommandEvent& event );

////@end Form2 event handler declarations

////@begin Form2 member function declarations

    /// Retrieves bitmap resources
    wxBitmap GetBitmapResource( const wxString& name );

    /// Retrieves icon resources
    wxIcon GetIconResource( const wxString& name );
////@end Form2 member function declarations

    /// Should we show tooltips?
    static bool ShowToolTips();

////@begin Form2 member variables
////@end Form2 member variables
};

#endif
    // _FORM2_H_
