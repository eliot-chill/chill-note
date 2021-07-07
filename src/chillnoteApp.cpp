#include <chillnoteApp.h>

wxBEGIN_EVENT_TABLE(ChillNoteApp, wxApp)
    wxEND_EVENT_TABLE()

        wxIMPLEMENT_APP(ChillNoteApp);

ChillNoteApp::ChillNoteApp()
{
    defaultStyle = wxBORDER_SIMPLE | wxRESIZE_BORDER | wxSTAY_ON_TOP;
}

ChillNoteApp::~ChillNoteApp()
{
}

bool ChillNoteApp::OnInit()
{
    srand(time(NULL)); // Seed the prng for random colours
    Bind(wxEVT_KEY_DOWN, &ChillNoteApp::OnKeyDown, this);
    createStickyNote(defaultStyle);
    return true;
}

void ChillNoteApp::OnKeyDown(wxKeyEvent &evt)
{
    if (evt.GetModifiers() == wxMOD_CONTROL && evt.GetKeyCode() == 78)
        createStickyNote(defaultStyle);
    else
        evt.Skip();
}

void ChillNoteApp::createStickyNote(long style)
{
    wxColour colour = generateRandomColour();
    note = new StickyNote(wxEmptyString, wxDefaultPosition, wxSize(300, 300), style, colour);
    note->Show(true);
}

wxColour ChillNoteApp::generateRandomColour()
{
    std::string randColour = "";
    for (size_t i = 0; i < 3; i++)
    {
        randColour += std::to_string(rand() % 256);
    }
    return wxColour(atol(randColour.c_str()));
}