/////////////////////////////////////////////////////////////////////////////
// Name:        DialogBlocks_3Winapp.cpp
// Purpose:     
// Author:      Talipov S.N.
// Modified by: 
// Created:     14.04.2025 11:04:35
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

#include "DialogBlocks_3Winapp.h"

////@begin XPM images

////@end XPM images


/*
 * Application instance implementation
 */

////@begin implement app
IMPLEMENT_APP( DialogBlocks_3WinApp )
////@end implement app


/*
 * DialogBlocks_3WinApp type definition
 */

IMPLEMENT_CLASS( DialogBlocks_3WinApp, wxApp )


/*
 * DialogBlocks_3WinApp event table definition
 */

BEGIN_EVENT_TABLE( DialogBlocks_3WinApp, wxApp )

////@begin DialogBlocks_3WinApp event table entries
////@end DialogBlocks_3WinApp event table entries

END_EVENT_TABLE()


/*
 * Constructor for DialogBlocks_3WinApp
 */

DialogBlocks_3WinApp::DialogBlocks_3WinApp()
{
    Init();
}


/*
 * Member initialisation
 */

void DialogBlocks_3WinApp::Init()
{
////@begin DialogBlocks_3WinApp member initialisation
////@end DialogBlocks_3WinApp member initialisation
}

/*
 * Initialisation for DialogBlocks_3WinApp
 */

bool DialogBlocks_3WinApp::OnInit()
{    
////@begin DialogBlocks_3WinApp initialisation
    // Remove the comment markers above and below this block
    // to make permanent changes to the code.

#if wxUSE_XPM
    wxImage::AddHandler(new wxXPMHandler);
#endif
#if wxUSE_LIBPNG
    wxImage::AddHandler(new wxPNGHandler);
#endif
#if wxUSE_LIBJPEG
    wxImage::AddHandler(new wxJPEGHandler);
#endif
#if wxUSE_GIF
    wxImage::AddHandler(new wxGIFHandler);
#endif
    Form1* mainWindow = new Form1( NULL );
    mainWindow->Show(true);
////@end DialogBlocks_3WinApp initialisation

    return true;
}


/*
 * Cleanup for DialogBlocks_3WinApp
 */

int DialogBlocks_3WinApp::OnExit()
{    
////@begin DialogBlocks_3WinApp cleanup
    return wxApp::OnExit();
////@end DialogBlocks_3WinApp cleanup
}

