#pragma once
#include <wx/wxprec.h> // For compilers that support precompliation, includes "wx.h"

#ifndef WX_PRECOMP
#include <wx/wx.h> // In case we don't support precomp.
#endif

class StickyNote : public wxFrame
{
public:
    StickyNote(const wxString &title, const wxPoint &pos, const wxSize &size, const long &style);
    ~StickyNote();

private:
    void OnExit(wxMouseEvent &event);
    void OnMouseDown(wxMouseEvent &event);
    void OnMouseUp(wxMouseEvent &event);
    void OnMouseMove(wxMouseEvent &event);
    void OnMouseCaptureLost(wxMouseCaptureLostEvent &event);
    void FinishDrag();

    wxPoint m_delta;
    bool m_dragging;

    wxDECLARE_EVENT_TABLE();
};