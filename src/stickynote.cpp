#include <stickynote.h>

StickyNote::StickyNote(const wxString &title, const wxPoint &pos, const wxSize &size, const long &style, const wxColour &colour) : wxFrame(NULL, wxID_ANY, title, pos, size, style)
{
    m_dragging = false;
    Bind(wxEVT_LEFT_DOWN, &StickyNote::OnMouseDown, this);
    Bind(wxEVT_MOUSE_CAPTURE_LOST, &StickyNote::OnMouseCaptureLost, this);
    Bind(wxEVT_RIGHT_DOWN, &StickyNote::OnExit, this);

    this->SetBackgroundColour(colour);

    wxBoxSizer *v_sizer = new wxBoxSizer(wxVERTICAL);
    SetSizer(v_sizer);
    wxBoxSizer *h_sizer = new wxBoxSizer(wxHORIZONTAL);
    v_sizer->Add(h_sizer);
    wxButton *button = new wxButton(this, wxID_ANY, "+", wxDefaultPosition, wxDefaultSize, wxBORDER_NONE);
    button->SetBackgroundColour(colour);
    h_sizer->AddSpacer(this->GetSize().GetX() * 0.8);
    h_sizer->Add(button);

    // sizer->AddSpacer(size.y * 0.1);

    wxTextCtrl *text = new wxTextCtrl(this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, wxTE_MULTILINE);
    text->SetBackgroundColour(colour);
    text->SetForegroundColour(GetContrastingFontColour(colour));
    button->SetForegroundColour(GetContrastingFontColour(colour));

    wxFont font = text->GetFont();
    font.SetPointSize(font.GetPointSize() + 1);

    text->SetFont(font);

    v_sizer->Add(text, wxSizerFlags().Expand().Proportion(1));
}

StickyNote::~StickyNote()
{
}

wxColour StickyNote::GetContrastingFontColour(wxColour bgColour)
{
    // Set text colour based on luminance of bg colour
    double luma = ((0.299 * bgColour.Red()) +
                   (0.587 * bgColour.Green()) +
                   (0.114 * bgColour.Blue())) /
                  255;
    return luma > 0.5 ? wxColour("black") : wxColour("white");
}

void StickyNote::OnMouseDown(wxMouseEvent &event)
{

    wxPoint mousePos = event.GetPosition();
    // drag if ALT key is pressed (and also not already dragging)
    // or if the sticky note is dragged from top 10% of the frame
    if (!m_dragging && (event.GetModifiers() == wxMOD_ALT || mousePos.y <= (GetSize().y * 0.1)))
    {
        CaptureMouse();
        Bind(wxEVT_LEFT_UP, &StickyNote::OnMouseUp, this);
        Bind(wxEVT_MOTION, &StickyNote::OnMouseMove, this);
        m_dragging = true;

        wxPoint screenPos = ClientToScreen(mousePos);
        wxPoint origin = GetPosition();
        int dx = screenPos.x - origin.x;
        int dy = screenPos.y - origin.y;
        m_delta = wxPoint(dx, dy);
    }
}

void StickyNote::OnMouseUp(wxMouseEvent &event)
{
    FinishDrag();
}

void StickyNote::OnMouseMove(wxMouseEvent &event)
{
    wxPoint currentScreenPos = ClientToScreen(event.GetPosition());
    // subtracing m_delta so the sticky note moves relative to mouse position
    // setting the position as the currentScreenPos causes the note to snap the
    // top left corner to the mouse position
    SetPosition(wxPoint(currentScreenPos.x - m_delta.x, currentScreenPos.y - m_delta.y));
}

void StickyNote::OnMouseCaptureLost(wxMouseCaptureLostEvent &)
{
    FinishDrag();
}

void StickyNote::FinishDrag()
{
    if (m_dragging)
    {
        Unbind(wxEVT_LEFT_UP, &StickyNote::OnMouseUp, this);
        Unbind(wxEVT_MOTION, &StickyNote::OnMouseMove, this);
        m_dragging = false;
    }

    if (HasCapture())
    {
        ReleaseMouse();
    }
}
void StickyNote::OnExit(wxMouseEvent &event)
{
    Close(true);
}

// wxWidgets event table stuff
wxBEGIN_EVENT_TABLE(StickyNote, wxFrame)
    wxEND_EVENT_TABLE()
