#include <topbar.h>

TopBar::TopBar(wxFrame *parent)
{
    wxPanel *panel = new wxPanel(parent);
    wxButton *addNoteButton = new wxButton(panel, wxID_ANY, "+", wxDefaultPosition, wxDefaultSize);
    wxSizerSpacer *spacer = new wxSizerSpacer(wxSize(0, 100));
    // addNoteButton->Show();
}

TopBar::~TopBar()
{
}