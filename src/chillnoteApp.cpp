#include <chillnoteApp.h>

wxIMPLEMENT_APP(ChillNoteApp);

ChillNoteApp::ChillNoteApp()
{
}

ChillNoteApp::~ChillNoteApp()
{
}

bool ChillNoteApp::OnInit()
{
    long style = wxBORDER_SIMPLE | wxRESIZE_BORDER | wxSTAY_ON_TOP;
    note = new StickyNote("Hello World", wxDefaultPosition, wxSize(300, 300), style);
    note->Show(true);

    return true;
}