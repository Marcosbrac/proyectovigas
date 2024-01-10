///////////////////////////////////////////////////////////////////////////
// C++ code generated with wxFormBuilder (version Nov  6 2017)
// http://www.wxformbuilder.org/
//
// PLEASE DO *NOT* EDIT THIS FILE!
///////////////////////////////////////////////////////////////////////////

#ifndef __WXFB_PROJECT_H__
#define __WXFB_PROJECT_H__

#include <wx/artprov.h>
#include <wx/xrc/xmlres.h>
#include <wx/string.h>
#include <wx/stattext.h>
#include <wx/gdicmn.h>
#include <wx/font.h>
#include <wx/colour.h>
#include <wx/settings.h>
#include <wx/button.h>
#include <wx/sizer.h>
#include <wx/frame.h>
#include <wx/grid.h>
#include <wx/textctrl.h>

///////////////////////////////////////////////////////////////////////////


///////////////////////////////////////////////////////////////////////////////
/// Class calculadora_de_vigas
///////////////////////////////////////////////////////////////////////////////
class calculadora_de_vigas : public wxFrame 
{
	private:
	
	protected:
		wxStaticText* m_staticText3;
		wxButton* boton_comun;
		wxButton* boton_intermedia;
		wxButton* boton_extrema;
		wxButton* acerca_de;
		wxButton* boton_historial;
		wxButton* boton_as;
		
		// Virtual event handlers, overide them in your derived class
		virtual void Click_boton_comun( wxCommandEvent& event ) { event.Skip(); }
		virtual void Click_boton_intermedia( wxCommandEvent& event ) { event.Skip(); }
		virtual void Click_boton_extrema( wxCommandEvent& event ) { event.Skip(); }
		virtual void Click_boton_acerca_de( wxCommandEvent& event ) { event.Skip(); }
		virtual void Click_boton_historial( wxCommandEvent& event ) { event.Skip(); }
		virtual void Click_boton_as( wxCommandEvent& event ) { event.Skip(); }
		
	
	public:
		
		calculadora_de_vigas( wxWindow* parent, wxWindowID id = wxID_ANY, const wxString& title = wxT("Calculadora de vigas"), const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxSize( 788,493 ), long style = wxDEFAULT_FRAME_STYLE|wxTAB_TRAVERSAL );
		
		~calculadora_de_vigas();
	
};

///////////////////////////////////////////////////////////////////////////////
/// Class historial
///////////////////////////////////////////////////////////////////////////////
class historial : public wxFrame 
{
	private:
	
	protected:
		wxStaticText* m_staticText7;
		wxGrid* m_grid1;
		wxButton* Boton_exportar;
		
		// Virtual event handlers, overide them in your derived class
		virtual void Click_boton_exportar( wxCommandEvent& event ) { event.Skip(); }
		
	
	public:
		
		historial( wxWindow* parent, wxWindowID id = wxID_ANY, const wxString& title = wxT("Cálculos recientes"), const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxSize( 700,350 ), long style = wxDEFAULT_FRAME_STYLE|wxTAB_TRAVERSAL );
		
		~historial();
	
};

///////////////////////////////////////////////////////////////////////////////
/// Class acerca_de1
///////////////////////////////////////////////////////////////////////////////
class acerca_de1 : public wxFrame 
{
	private:
	
	protected:
		wxStaticText* acerca_de;
		wxStaticText* m_staticText110;
	
	public:
		
		acerca_de1( wxWindow* parent, wxWindowID id = wxID_ANY, const wxString& title = wxT("Acerca de"), const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxSize( 763,442 ), long style = wxDEFAULT_FRAME_STYLE|wxTAB_TRAVERSAL );
		
		~acerca_de1();
	
};

///////////////////////////////////////////////////////////////////////////////
/// Class calculadora_as
///////////////////////////////////////////////////////////////////////////////
class calculadora_as : public wxFrame 
{
	private:
	
	protected:
		wxStaticText* m_staticText9;
		wxTextCtrl* m_textCtrl11;
		wxStaticText* m_staticText101;
		wxTextCtrl* m_textCtrl21;
		wxStaticText* m_staticText141;
		wxTextCtrl* m_textCtrl111;
		wxStaticText* m_staticText1011;
		wxTextCtrl* m_textCtrl211;
		wxStaticText* m_staticText1411;
		wxTextCtrl* m_textCtrl112;
		wxStaticText* m_staticText1012;
		wxTextCtrl* m_textCtrl212;
		wxStaticText* m_staticText1412;
		wxTextCtrl* m_textCtrl113;
		wxStaticText* m_staticText1013;
		wxTextCtrl* m_textCtrl213;
		wxStaticText* m_staticText1413;
		wxStaticText* m_staticText1014;
		wxTextCtrl* m_textCtrl214;
		wxStaticText* m_staticText1414;
	
	public:
		
		calculadora_as( wxWindow* parent, wxWindowID id = wxID_ANY, const wxString& title = wxT("Calculadora acero necesario"), const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxSize( 560,300 ), long style = wxDEFAULT_FRAME_STYLE|wxTAB_TRAVERSAL );
		
		~calculadora_as();
	
};

#endif //__WXFB_PROJECT_H__
