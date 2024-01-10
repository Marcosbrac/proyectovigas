#ifndef M_CALCULADORA_DE_VIGAS_H
#define M_CALCULADORA_DE_VIGAS_H
#include "wxfb_project.h"

class m_calculadora_de_vigas : public calculadora_de_vigas {
	
private:
	
protected:
	void Click_boton_as( wxCommandEvent& event )  override;
	void Click_boton_acerca_de( wxCommandEvent& event )  override;
	void Click_boton_historial( wxCommandEvent& event )  override;
	void Click_boton_secciones( wxCommandEvent& event )  override;
	void Click_boton_comun( wxCommandEvent& event )  override;
	void Click_boton_intermedia( wxCommandEvent& event )  override;
	void Click_boton_extrema( wxCommandEvent& event )  override;
	
public:
	m_calculadora_de_vigas(wxWindow *parent=NULL);
	~m_calculadora_de_vigas();
};

#endif

