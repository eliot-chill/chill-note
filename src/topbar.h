#pragma once
#include <wx/wxprec.h> // For compilers that support precompliation, includes "wx.h"

#ifndef WX_PRECOMP
#include <wx/wx.h> // In case we don't support precomp.
#endif

class TopBar : public wxPanel
{
public:
    TopBar(wxFrame *parent);
    ~TopBar();
    //wxButton *addNoteButton = nullptr;
    wxStaticText *noteLabel = nullptr;
};