/////////////////////////////////////////////////////////////////////////////
// Name:        form3.h
// Purpose:     
// Author:      Talipov S.N.
// Modified by: 
// Created:     14.04.2025 10:17:48
// RCS-ID:      
// Copyright:   Talipov S.N., 2025
// Licence:     
/////////////////////////////////////////////////////////////////////////////

#ifndef _FORM3_H_
#define _FORM3_H_


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
#define ID_FORM3 10006
#define ID_BUTTON4 10007
#define ID_BUTTON5 10008
#define SYMBOL_FORM3_STYLE wxCAPTION|wxRESIZE_BORDER|wxSYSTEM_MENU|wxCLOSE_BOX
#define SYMBOL_FORM3_TITLE _("Form3")
#define SYMBOL_FORM3_IDNAME ID_FORM3
#define SYMBOL_FORM3_SIZE wxSize(400, 300)
#define SYMBOL_FORM3_POSITION wxDefaultPosition
////@end control identifiers


/*!
 * Form3 class declaration
 */

class Form3: public wxFrame
{    
    DECLARE_CLASS( Form3 )
    DECLARE_EVENT_TABLE()

public:
    /// Constructors
    Form3();
    Form3( wxWindow* parent, wxWindowID id = SYMBOL_FORM3_IDNAME, const wxString& caption = SYMBOL_FORM3_TITLE, const wxPoint& pos = SYMBOL_FORM3_POSITION, const wxSize& size = SYMBOL_FORM3_SIZE, long style = SYMBOL_FORM3_STYLE );

    bool Create( wxWindow* parent, wxWindowID id = SYMBOL_FORM3_IDNAME, const wxString& caption = SYMBOL_FORM3_TITLE, const wxPoint& pos = SYMBOL_FORM3_POSITION, const wxSize& size = SYMBOL_FORM3_SIZE, long style = SYMBOL_FORM3_STYLE );

    /// Destructor
    ~Form3();

    /// Initialises member variables
    void Init();

    /// Creates the controls and sizers
    void CreateControls();

////@begin Form3 event handler declarations

    /// wxEVT_CLOSE_WINDOW event handler for ID_FORM3
    void OnCloseWindow( wxCloseEvent& event );

    /// wxEVT_COMMAND_BUTTON_CLICKED event handler for ID_BUTTON4
    void OnButton4ClickPrior( wxCommandEvent& event );

    /// wxEVT_COMMAND_BUTTON_CLICKED event handler for ID_BUTTON5
    void OnButton5ClickExit( wxCommandEvent& event );

////@end Form3 event handler declarations

////@begin Form3 member function declarations

    /// Retrieves bitmap resources
    wxBitmap GetBitmapResource( const wxString& name );

    /// Retrieves icon resources
    wxIcon GetIconResource( const wxString& name );
////@end Form3 member function declarations

    /// Should we show tooltips?
    static bool ShowToolTips();

////@begin Form3 member variables
////@end Form3 member variables
};

#endif
    // _FORM3_H_
