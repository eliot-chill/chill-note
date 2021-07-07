#pragma once
#include <wx/wxprec.h> // For compilers that support precompliation, includes "wx.h"

#ifndef WX_PRECOMP
#include <wx/wx.h> // In case we don't support precomp.
#endif

#include <stickynote.h>

// Outer wx app - needs to contain a method to create a sticky note
class ChillNoteApp : public wxApp
{
public:
    ChillNoteApp();
    ~ChillNoteApp();

private:
    virtual bool OnInit();
    void OnKeyDown(wxKeyEvent &evt);
    void createStickyNote(long style);

    wxColour generateRandomColour();

    StickyNote *note = nullptr;
    long defaultStyle;
    wxDECLARE_EVENT_TABLE();
};