#pragma once
using namespace std;
using namespace System;
using namespace System::Data;
using namespace MySql::Data::MySqlClient;


ref class TB
{
private:
	String^ connectionString;
	MySqlConnection^ conn;
public:
	TB();
	DataTable^ getData();
	void AbrirConexion();
	void CerrarConexion();
	void insertar(String^, String^, String^, String^, String^, String^);
	void modificar(String^, String^, String^, String^, String^, String^, String^);
	void eliminar(String^);
};
