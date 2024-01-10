///////////////////////////////////////////////////////////////////////////
// C++ code generated with wxFormBuilder (version Nov  6 2017)
// http://www.wxformbuilder.org/
//
// PLEASE DO *NOT* EDIT THIS FILE!
///////////////////////////////////////////////////////////////////////////

#include "wxfb_project.h"

///////////////////////////////////////////////////////////////////////////

calculadora_de_vigas::calculadora_de_vigas( wxWindow* parent, wxWindowID id, const wxString& title, const wxPoint& pos, const wxSize& size, long style ) : wxFrame( parent, id, title, pos, size, style )
{
	this->SetSizeHints( wxDefaultSize, wxDefaultSize );
	
	wxBoxSizer* bSizer2;
	bSizer2 = new wxBoxSizer( wxVERTICAL );
	
	wxBoxSizer* bSizer4;
	bSizer4 = new wxBoxSizer( wxVERTICAL );
	
	m_staticText3 = new wxStaticText( this, wxID_ANY, wxT("Calculadora de Vigas H°A°"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText3->Wrap( -1 );
	m_staticText3->SetFont( wxFont( 28, wxFONTFAMILY_SWISS, wxFONTSTYLE_NORMAL, wxFONTWEIGHT_NORMAL, false, wxT("Arial") ) );
	
	bSizer4->Add( m_staticText3, 0, wxALL|wxALIGN_CENTER_HORIZONTAL, 5 );
	
	boton_comun = new wxButton( this, wxID_ANY, wxT("Viga Comun"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizer4->Add( boton_comun, 0, wxALL|wxALIGN_CENTER_HORIZONTAL, 5 );
	
	boton_intermedia = new wxButton( this, wxID_ANY, wxT("Viga Intermedia"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizer4->Add( boton_intermedia, 0, wxALL|wxALIGN_CENTER_HORIZONTAL, 5 );
	
	boton_extrema = new wxButton( this, wxID_ANY, wxT("Viga Extrema"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizer4->Add( boton_extrema, 0, wxALL|wxALIGN_CENTER_HORIZONTAL, 5 );
	
	
	bSizer2->Add( bSizer4, 1, wxEXPAND|wxALIGN_CENTER_HORIZONTAL, 5 );
	
	wxBoxSizer* bSizer5;
	bSizer5 = new wxBoxSizer( wxHORIZONTAL );
	
	wxBoxSizer* bSizer34;
	bSizer34 = new wxBoxSizer( wxVERTICAL );
	
	acerca_de = new wxButton( this, wxID_ANY, wxT("Acerca de"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizer34->Add( acerca_de, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );
	
	
	bSizer5->Add( bSizer34, 1, wxEXPAND|wxALIGN_CENTER_VERTICAL, 5 );
	
	wxBoxSizer* bSizer35;
	bSizer35 = new wxBoxSizer( wxVERTICAL );
	
	boton_historial = new wxButton( this, wxID_ANY, wxT("Ver historial"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizer35->Add( boton_historial, 0, wxALL|wxALIGN_CENTER_VERTICAL|wxALIGN_CENTER_HORIZONTAL, 5 );
	
	
	bSizer5->Add( bSizer35, 1, wxEXPAND, 5 );
	
	wxBoxSizer* bSizer36;
	bSizer36 = new wxBoxSizer( wxVERTICAL );
	
	boton_as = new wxButton( this, wxID_ANY, wxT("Calculadora de Acero necesario"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizer36->Add( boton_as, 0, wxALL|wxALIGN_CENTER_VERTICAL|wxALIGN_RIGHT, 5 );
	
	
	bSizer5->Add( bSizer36, 1, wxEXPAND, 5 );
	
	
	bSizer2->Add( bSizer5, 0, wxEXPAND|wxALIGN_CENTER_HORIZONTAL, 5 );
	
	
	this->SetSizer( bSizer2 );
	this->Layout();
	
	this->Centre( wxBOTH );
	
	// Connect Events
	boton_comun->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( calculadora_de_vigas::Click_boton_comun ), NULL, this );
	boton_intermedia->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( calculadora_de_vigas::Click_boton_intermedia ), NULL, this );
	boton_extrema->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( calculadora_de_vigas::Click_boton_extrema ), NULL, this );
	acerca_de->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( calculadora_de_vigas::Click_boton_acerca_de ), NULL, this );
	boton_historial->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( calculadora_de_vigas::Click_boton_historial ), NULL, this );
	boton_as->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( calculadora_de_vigas::Click_boton_as ), NULL, this );
}

calculadora_de_vigas::~calculadora_de_vigas()
{
	// Disconnect Events
	boton_comun->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( calculadora_de_vigas::Click_boton_comun ), NULL, this );
	boton_intermedia->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( calculadora_de_vigas::Click_boton_intermedia ), NULL, this );
	boton_extrema->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( calculadora_de_vigas::Click_boton_extrema ), NULL, this );
	acerca_de->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( calculadora_de_vigas::Click_boton_acerca_de ), NULL, this );
	boton_historial->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( calculadora_de_vigas::Click_boton_historial ), NULL, this );
	boton_as->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( calculadora_de_vigas::Click_boton_as ), NULL, this );
	
}

historial::historial( wxWindow* parent, wxWindowID id, const wxString& title, const wxPoint& pos, const wxSize& size, long style ) : wxFrame( parent, id, title, pos, size, style )
{
	this->SetSizeHints( wxSize( 700,350 ), wxDefaultSize );
	
	wxBoxSizer* bSizer6;
	bSizer6 = new wxBoxSizer( wxVERTICAL );
	
	wxBoxSizer* bSizer157;
	bSizer157 = new wxBoxSizer( wxVERTICAL );
	
	m_staticText7 = new wxStaticText( this, wxID_ANY, wxT("Historial"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText7->Wrap( -1 );
	m_staticText7->SetFont( wxFont( 12, wxFONTFAMILY_SWISS, wxFONTSTYLE_NORMAL, wxFONTWEIGHT_NORMAL, false, wxT("Arial") ) );
	
	bSizer157->Add( m_staticText7, 0, wxALL|wxALIGN_CENTER_HORIZONTAL, 5 );
	
	m_grid1 = new wxGrid( this, wxID_ANY, wxDefaultPosition, wxSize( -1,225 ), 0 );
	
	// Grid
	m_grid1->CreateGrid( 5, 17 );
	m_grid1->EnableEditing( true );
	m_grid1->EnableGridLines( true );
	m_grid1->EnableDragGridSize( false );
	m_grid1->SetMargins( 0, 0 );
	
	// Columns
	m_grid1->EnableDragColMove( false );
	m_grid1->EnableDragColSize( true );
	m_grid1->SetColLabelSize( 30 );
	m_grid1->SetColLabelAlignment( wxALIGN_CENTRE, wxALIGN_CENTRE );
	
	// Rows
	m_grid1->EnableDragRowSize( true );
	m_grid1->SetRowLabelSize( 80 );
	m_grid1->SetRowLabelAlignment( wxALIGN_CENTRE, wxALIGN_CENTRE );
	
	// Label Appearance
	
	// Cell Defaults
	m_grid1->SetDefaultCellAlignment( wxALIGN_LEFT, wxALIGN_TOP );
	m_grid1->SetMinSize( wxSize( -1,225 ) );
	
	bSizer157->Add( m_grid1, 0, wxALL, 15 );
	
	
	bSizer6->Add( bSizer157, 1, wxEXPAND, 5 );
	
	wxBoxSizer* bSizer158;
	bSizer158 = new wxBoxSizer( wxVERTICAL );
	
	Boton_exportar = new wxButton( this, wxID_ANY, wxT("Exportar a .txt"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizer158->Add( Boton_exportar, 0, wxALL|wxALIGN_RIGHT, 5 );
	
	
	bSizer6->Add( bSizer158, 0, wxEXPAND, 5 );
	
	
	this->SetSizer( bSizer6 );
	this->Layout();
	
	this->Centre( wxBOTH );
	
	// Connect Events
	Boton_exportar->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( historial::Click_boton_exportar ), NULL, this );
}

historial::~historial()
{
	// Disconnect Events
	Boton_exportar->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( historial::Click_boton_exportar ), NULL, this );
	
}

acerca_de1::acerca_de1( wxWindow* parent, wxWindowID id, const wxString& title, const wxPoint& pos, const wxSize& size, long style ) : wxFrame( parent, id, title, pos, size, style )
{
	this->SetSizeHints( wxDefaultSize, wxDefaultSize );
	
	wxBoxSizer* bSizer7;
	bSizer7 = new wxBoxSizer( wxVERTICAL );
	
	acerca_de = new wxStaticText( this, wxID_ANY, wxT("Información sobre el proyecto"), wxDefaultPosition, wxDefaultSize, 0 );
	acerca_de->Wrap( -1 );
	acerca_de->SetFont( wxFont( 20, wxFONTFAMILY_SWISS, wxFONTSTYLE_NORMAL, wxFONTWEIGHT_NORMAL, false, wxT("Arial") ) );
	
	bSizer7->Add( acerca_de, 0, wxALL|wxALIGN_CENTER_HORIZONTAL, 5 );
	
	m_staticText110 = new wxStaticText( this, wxID_ANY, wxT("MyLabel"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText110->Wrap( -1 );
	bSizer7->Add( m_staticText110, 0, wxALL, 20 );
	
	
	this->SetSizer( bSizer7 );
	this->Layout();
	
	this->Centre( wxBOTH );
}

acerca_de1::~acerca_de1()
{
}

calculadora_as::calculadora_as( wxWindow* parent, wxWindowID id, const wxString& title, const wxPoint& pos, const wxSize& size, long style ) : wxFrame( parent, id, title, pos, size, style )
{
	this->SetSizeHints( wxSize( 560,300 ), wxSize( 560,300 ) );
	
	wxBoxSizer* bSizer8;
	bSizer8 = new wxBoxSizer( wxVERTICAL );
	
	wxBoxSizer* bSizer9;
	bSizer9 = new wxBoxSizer( wxVERTICAL );
	
	m_staticText9 = new wxStaticText( this, wxID_ANY, wxT("Acero necesario (As)"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText9->Wrap( -1 );
	m_staticText9->SetFont( wxFont( 14, wxFONTFAMILY_SWISS, wxFONTSTYLE_NORMAL, wxFONTWEIGHT_NORMAL, false, wxT("Arial") ) );
	
	bSizer9->Add( m_staticText9, 0, wxALL|wxALIGN_CENTER_VERTICAL|wxALIGN_CENTER_HORIZONTAL, 5 );
	
	
	bSizer8->Add( bSizer9, 1, wxEXPAND|wxALIGN_CENTER_HORIZONTAL, 5 );
	
	wxBoxSizer* bSizer91;
	bSizer91 = new wxBoxSizer( wxHORIZONTAL );
	
	wxBoxSizer* bSizer47;
	bSizer47 = new wxBoxSizer( wxVERTICAL );
	
	m_textCtrl11 = new wxTextCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	bSizer47->Add( m_textCtrl11, 0, wxALL|wxALIGN_CENTER_VERTICAL|wxALIGN_CENTER_HORIZONTAL, 5 );
	
	
	bSizer91->Add( bSizer47, 1, wxEXPAND|wxALIGN_CENTER_VERTICAL, 5 );
	
	wxBoxSizer* bSizer49;
	bSizer49 = new wxBoxSizer( wxVERTICAL );
	
	m_staticText101 = new wxStaticText( this, wxID_ANY, wxT("Ø 10"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText101->Wrap( -1 );
	m_staticText101->SetFont( wxFont( 11, wxFONTFAMILY_SWISS, wxFONTSTYLE_NORMAL, wxFONTWEIGHT_NORMAL, false, wxT("Arial") ) );
	
	bSizer49->Add( m_staticText101, 0, wxALL|wxALIGN_CENTER_VERTICAL|wxALIGN_CENTER_HORIZONTAL, 5 );
	
	
	bSizer91->Add( bSizer49, 1, wxEXPAND, 5 );
	
	wxBoxSizer* bSizer50;
	bSizer50 = new wxBoxSizer( wxVERTICAL );
	
	m_textCtrl21 = new wxTextCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	m_textCtrl21->Enable( false );
	
	bSizer50->Add( m_textCtrl21, 0, wxALL|wxALIGN_CENTER_VERTICAL|wxALIGN_CENTER_HORIZONTAL, 5 );
	
	
	bSizer91->Add( bSizer50, 1, wxEXPAND, 5 );
	
	wxBoxSizer* bSizer51;
	bSizer51 = new wxBoxSizer( wxVERTICAL );
	
	m_staticText141 = new wxStaticText( this, wxID_ANY, wxT("[cm²]"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText141->Wrap( -1 );
	m_staticText141->SetFont( wxFont( 11, wxFONTFAMILY_SWISS, wxFONTSTYLE_NORMAL, wxFONTWEIGHT_NORMAL, false, wxT("Arial") ) );
	
	bSizer51->Add( m_staticText141, 0, wxALL|wxALIGN_CENTER_VERTICAL|wxALIGN_CENTER_HORIZONTAL, 5 );
	
	
	bSizer91->Add( bSizer51, 1, wxEXPAND, 5 );
	
	
	bSizer8->Add( bSizer91, 1, wxEXPAND, 5 );
	
	wxBoxSizer* bSizer911;
	bSizer911 = new wxBoxSizer( wxHORIZONTAL );
	
	wxBoxSizer* bSizer471;
	bSizer471 = new wxBoxSizer( wxVERTICAL );
	
	m_textCtrl111 = new wxTextCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	bSizer471->Add( m_textCtrl111, 0, wxALL|wxALIGN_CENTER_VERTICAL|wxALIGN_CENTER_HORIZONTAL, 5 );
	
	
	bSizer911->Add( bSizer471, 1, wxEXPAND, 5 );
	
	wxBoxSizer* bSizer491;
	bSizer491 = new wxBoxSizer( wxVERTICAL );
	
	m_staticText1011 = new wxStaticText( this, wxID_ANY, wxT("Ø 12"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText1011->Wrap( -1 );
	m_staticText1011->SetFont( wxFont( 11, wxFONTFAMILY_SWISS, wxFONTSTYLE_NORMAL, wxFONTWEIGHT_NORMAL, false, wxT("Arial") ) );
	
	bSizer491->Add( m_staticText1011, 0, wxALL|wxALIGN_CENTER_VERTICAL|wxALIGN_CENTER_HORIZONTAL, 5 );
	
	
	bSizer911->Add( bSizer491, 1, wxEXPAND, 5 );
	
	wxBoxSizer* bSizer501;
	bSizer501 = new wxBoxSizer( wxVERTICAL );
	
	m_textCtrl211 = new wxTextCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	m_textCtrl211->Enable( false );
	
	bSizer501->Add( m_textCtrl211, 0, wxALL|wxALIGN_CENTER_VERTICAL|wxALIGN_CENTER_HORIZONTAL, 5 );
	
	
	bSizer911->Add( bSizer501, 1, wxEXPAND, 5 );
	
	wxBoxSizer* bSizer511;
	bSizer511 = new wxBoxSizer( wxVERTICAL );
	
	m_staticText1411 = new wxStaticText( this, wxID_ANY, wxT("[cm²]"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText1411->Wrap( -1 );
	m_staticText1411->SetFont( wxFont( 11, wxFONTFAMILY_SWISS, wxFONTSTYLE_NORMAL, wxFONTWEIGHT_NORMAL, false, wxT("Arial") ) );
	
	bSizer511->Add( m_staticText1411, 0, wxALL|wxALIGN_CENTER_VERTICAL|wxALIGN_CENTER_HORIZONTAL, 5 );
	
	
	bSizer911->Add( bSizer511, 1, wxEXPAND, 5 );
	
	
	bSizer8->Add( bSizer911, 1, wxEXPAND, 5 );
	
	wxBoxSizer* bSizer912;
	bSizer912 = new wxBoxSizer( wxHORIZONTAL );
	
	wxBoxSizer* bSizer472;
	bSizer472 = new wxBoxSizer( wxVERTICAL );
	
	m_textCtrl112 = new wxTextCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	bSizer472->Add( m_textCtrl112, 0, wxALL|wxALIGN_CENTER_VERTICAL|wxALIGN_CENTER_HORIZONTAL, 5 );
	
	
	bSizer912->Add( bSizer472, 1, wxEXPAND, 5 );
	
	wxBoxSizer* bSizer492;
	bSizer492 = new wxBoxSizer( wxVERTICAL );
	
	m_staticText1012 = new wxStaticText( this, wxID_ANY, wxT("Ø 16"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText1012->Wrap( -1 );
	m_staticText1012->SetFont( wxFont( 11, wxFONTFAMILY_SWISS, wxFONTSTYLE_NORMAL, wxFONTWEIGHT_NORMAL, false, wxT("Arial") ) );
	
	bSizer492->Add( m_staticText1012, 0, wxALL|wxALIGN_CENTER_VERTICAL|wxALIGN_CENTER_HORIZONTAL, 5 );
	
	
	bSizer912->Add( bSizer492, 1, wxEXPAND, 5 );
	
	wxBoxSizer* bSizer502;
	bSizer502 = new wxBoxSizer( wxVERTICAL );
	
	m_textCtrl212 = new wxTextCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	m_textCtrl212->Enable( false );
	
	bSizer502->Add( m_textCtrl212, 0, wxALL|wxALIGN_CENTER_VERTICAL|wxALIGN_CENTER_HORIZONTAL, 5 );
	
	
	bSizer912->Add( bSizer502, 1, wxEXPAND, 5 );
	
	wxBoxSizer* bSizer512;
	bSizer512 = new wxBoxSizer( wxVERTICAL );
	
	m_staticText1412 = new wxStaticText( this, wxID_ANY, wxT("[cm²]"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText1412->Wrap( -1 );
	m_staticText1412->SetFont( wxFont( 11, wxFONTFAMILY_SWISS, wxFONTSTYLE_NORMAL, wxFONTWEIGHT_NORMAL, false, wxT("Arial") ) );
	
	bSizer512->Add( m_staticText1412, 0, wxALL|wxALIGN_CENTER_VERTICAL|wxALIGN_CENTER_HORIZONTAL, 5 );
	
	
	bSizer912->Add( bSizer512, 1, wxEXPAND, 5 );
	
	
	bSizer8->Add( bSizer912, 1, wxEXPAND, 5 );
	
	wxBoxSizer* bSizer913;
	bSizer913 = new wxBoxSizer( wxHORIZONTAL );
	
	wxBoxSizer* bSizer473;
	bSizer473 = new wxBoxSizer( wxVERTICAL );
	
	m_textCtrl113 = new wxTextCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	bSizer473->Add( m_textCtrl113, 0, wxALL|wxALIGN_CENTER_VERTICAL|wxALIGN_CENTER_HORIZONTAL, 5 );
	
	
	bSizer913->Add( bSizer473, 1, wxEXPAND, 5 );
	
	wxBoxSizer* bSizer493;
	bSizer493 = new wxBoxSizer( wxVERTICAL );
	
	m_staticText1013 = new wxStaticText( this, wxID_ANY, wxT("Ø 20"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText1013->Wrap( -1 );
	m_staticText1013->SetFont( wxFont( 11, wxFONTFAMILY_SWISS, wxFONTSTYLE_NORMAL, wxFONTWEIGHT_NORMAL, false, wxT("Arial") ) );
	
	bSizer493->Add( m_staticText1013, 0, wxALL|wxALIGN_CENTER_VERTICAL|wxALIGN_CENTER_HORIZONTAL, 5 );
	
	
	bSizer913->Add( bSizer493, 1, wxEXPAND, 5 );
	
	wxBoxSizer* bSizer503;
	bSizer503 = new wxBoxSizer( wxVERTICAL );
	
	m_textCtrl213 = new wxTextCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	m_textCtrl213->Enable( false );
	
	bSizer503->Add( m_textCtrl213, 0, wxALL|wxALIGN_CENTER_VERTICAL|wxALIGN_CENTER_HORIZONTAL, 5 );
	
	
	bSizer913->Add( bSizer503, 1, wxEXPAND, 5 );
	
	wxBoxSizer* bSizer513;
	bSizer513 = new wxBoxSizer( wxVERTICAL );
	
	m_staticText1413 = new wxStaticText( this, wxID_ANY, wxT("[cm²]"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText1413->Wrap( -1 );
	m_staticText1413->SetFont( wxFont( 11, wxFONTFAMILY_SWISS, wxFONTSTYLE_NORMAL, wxFONTWEIGHT_NORMAL, false, wxT("Arial") ) );
	
	bSizer513->Add( m_staticText1413, 0, wxALL|wxALIGN_CENTER_VERTICAL|wxALIGN_CENTER_HORIZONTAL, 5 );
	
	
	bSizer913->Add( bSizer513, 1, wxEXPAND, 5 );
	
	
	bSizer8->Add( bSizer913, 1, wxEXPAND, 5 );
	
	wxBoxSizer* bSizer914;
	bSizer914 = new wxBoxSizer( wxHORIZONTAL );
	
	wxBoxSizer* bSizer474;
	bSizer474 = new wxBoxSizer( wxVERTICAL );
	
	
	bSizer474->Add( 20, 20, 1, wxEXPAND, 10 );
	
	
	bSizer914->Add( bSizer474, 1, wxEXPAND, 5 );
	
	wxBoxSizer* bSizer494;
	bSizer494 = new wxBoxSizer( wxVERTICAL );
	
	m_staticText1014 = new wxStaticText( this, wxID_ANY, wxT("Total"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText1014->Wrap( -1 );
	m_staticText1014->SetFont( wxFont( 14, wxFONTFAMILY_SWISS, wxFONTSTYLE_NORMAL, wxFONTWEIGHT_NORMAL, false, wxT("Arial") ) );
	
	bSizer494->Add( m_staticText1014, 0, wxALL|wxALIGN_CENTER_VERTICAL|wxALIGN_CENTER_HORIZONTAL, 5 );
	
	
	bSizer914->Add( bSizer494, 1, wxEXPAND, 5 );
	
	wxBoxSizer* bSizer504;
	bSizer504 = new wxBoxSizer( wxVERTICAL );
	
	m_textCtrl214 = new wxTextCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	m_textCtrl214->Enable( false );
	
	bSizer504->Add( m_textCtrl214, 0, wxALL|wxALIGN_CENTER_VERTICAL|wxALIGN_CENTER_HORIZONTAL, 5 );
	
	
	bSizer914->Add( bSizer504, 1, wxEXPAND, 5 );
	
	wxBoxSizer* bSizer514;
	bSizer514 = new wxBoxSizer( wxVERTICAL );
	
	m_staticText1414 = new wxStaticText( this, wxID_ANY, wxT("[cm²]"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText1414->Wrap( -1 );
	m_staticText1414->SetFont( wxFont( 14, wxFONTFAMILY_SWISS, wxFONTSTYLE_NORMAL, wxFONTWEIGHT_NORMAL, false, wxT("Arial") ) );
	
	bSizer514->Add( m_staticText1414, 0, wxALL|wxALIGN_CENTER_VERTICAL|wxALIGN_CENTER_HORIZONTAL, 5 );
	
	
	bSizer914->Add( bSizer514, 1, wxEXPAND, 5 );
	
	
	bSizer8->Add( bSizer914, 1, wxEXPAND, 5 );
	
	
	this->SetSizer( bSizer8 );
	this->Layout();
	
	this->Centre( wxBOTH );
}

calculadora_as::~calculadora_as()
{
}
