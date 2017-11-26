#ifndef IAPWS_IF97_H_INCLUDED
#define IAPWS_IF97_H_INCLUDED

// ��λ:Mpa,K  =m3/kg
double v_pT(const double& p, const double& T,int region = 0);

// ��λ:Mpa,K   =kJ/kgK
double s_pT(const double& p, const double& T, int region = 0);

// ��λ:Mpa,K   =kJ/kg
double h_pT(const double& p, const double& T, int region = 0);

// ��λ:Mpa,kJ/kg   =K
double T_ph(const double& p, const double& h);

// ��λ:Mpa,kJ/kgK   =K
double T_ps(const double& p, const double& s);

// ��λ:Mpa  =K
double Ts_p(const double& p);

// ��λ:K =Mpa
double ps_T(const double& T);

//dynamic viscosity ��λ: m3/kg, K   =Pa s
double eta_vT(const double& v,const double& T);

//��λ:Mpa
double B23_T_p(const double& p);

// ��λ:kJ/kg   =Mpa
double B34_ps_h_eq(const double& h);

// ��λ:kJ/kgK   =Mpa
double B34_ps_s_eq(const double& s);

//��λ:Mpa
double R2_Bbc_h_p(const double& p);

#endif // IAPWS_IF97_H_INCLUDED
