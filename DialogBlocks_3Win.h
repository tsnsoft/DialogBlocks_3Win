/////////////////////////////////////////////////////////////////////////////
// Name:        DialogBlocks_3Winapp.h
// Purpose:     
// Author:      Talipov S.N.
// Modified by: 
// Created:     14.04.2025 10:17:02
// RCS-ID:      
// Copyright:   Talipov S.N., 2025
// Licence:     
/////////////////////////////////////////////////////////////////////////////

#ifndef _PROJECT1APP_H_
#define _PROJECT1APP_H_


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
 * Project1App class declaration
 */

class Project1App: public wxApp
{    
    DECLARE_CLASS( Project1App )
    DECLARE_EVENT_TABLE()

public:
    /// Constructor
    Project1App();

    void Init();

    /// Initialises the application
    virtual bool OnInit();

    /// Called on exit
    virtual int OnExit();

////@begin Project1App event handler declarations

////@end Project1App event handler declarations

////@begin Project1App member function declarations

////@end Project1App member function declarations

////@begin Project1App member variables
////@end Project1App member variables
};

/*!
 * Application instance declaration 
 */

////@begin declare app
DECLARE_APP(Project1App)
////@end declare app

#endif
    // _PROJECT1APP_H_
