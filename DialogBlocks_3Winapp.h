/////////////////////////////////////////////////////////////////////////////
// Name:        DialogBlocks_3Winapp.h
// Purpose:     
// Author:      Talipov S.N.
// Modified by: 
// Created:     14.04.2025 11:04:35
// RCS-ID:      
// Copyright:   Talipov S.N., 2025
// Licence:     
/////////////////////////////////////////////////////////////////////////////

#ifndef _DIALOGBLOCKS_3WINAPP_H_
#define _DIALOGBLOCKS_3WINAPP_H_


/*!
 * Includes
 */

////@begin includes
#include "wx/image.h"
#include "form1.h"
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
////@end control identifiers

/*!
 * DialogBlocks_3WinApp class declaration
 */

class DialogBlocks_3WinApp: public wxApp
{    
    DECLARE_CLASS( DialogBlocks_3WinApp )
    DECLARE_EVENT_TABLE()

public:
    /// Constructor
    DialogBlocks_3WinApp();

    void Init();

    /// Initialises the application
    virtual bool OnInit();

    /// Called on exit
    virtual int OnExit();

////@begin DialogBlocks_3WinApp event handler declarations
////@end DialogBlocks_3WinApp event handler declarations

////@begin DialogBlocks_3WinApp member function declarations
////@end DialogBlocks_3WinApp member function declarations

////@begin DialogBlocks_3WinApp member variables
////@end DialogBlocks_3WinApp member variables
};

/*!
 * Application instance declaration 
 */

////@begin declare app
DECLARE_APP(DialogBlocks_3WinApp)
////@end declare app

#endif
    // _DIALOGBLOCKS_3WINAPP_H_
