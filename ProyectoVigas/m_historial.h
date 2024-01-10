#ifndef M_HISTORIAL_H
#define M_HISTORIAL_H
#include "wxfb_project.h"

class m_historial : public historial {
	
private:
	
protected:
	void Click_boton_exportar( wxCommandEvent& event )  override;
	
public:
	m_historial(wxWindow *parent=NULL);
	~m_historial();
};

#endif

