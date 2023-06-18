#include "pch.h"
#include "DB.h"

TB::TB()
{
	this->connectionString = "datasource=localhost; username=root; password=""; database=estudiantes;";
	this->conn = gcnew MySqlConnection(this->connectionString);

}

void TB::AbrirConexion()
{
	this->conn->Open();
}

void TB::CerrarConexion()
{
	this->conn->Close();
}

DataTable^ TB::getData()
{
	String^ sql = "select * from calificaciones";
	MySqlCommand^ cursor = gcnew MySqlCommand(sql, this->conn);
	MySqlDataAdapter^ data = gcnew MySqlDataAdapter(cursor);
	DataTable^ tabla = gcnew DataTable();
	data->Fill(tabla);
	return tabla;
}
void TB::insertar(String^ name, String^ gen, String^ eda, String^ c, String^ p, String^ f)
{
	String^ sql = "insert into calificaciones(Nombre, Genero, Edad, Calculo, Programacion, Fisica Serie) values ('" + name + "', " + gen + ", '" + eda + "', '" + c + "', '" + p + "', '" + f + "')";
	MySqlCommand^ cursor = gcnew MySqlCommand(sql, this->conn);
	try
	{
		cursor->ExecuteNonQuery();
	}
	catch (Exception^ e)
	{
		using namespace System::Windows::Forms;
		using namespace System::Data;
		using namespace System::Drawing;
		MessageBox::Show(e->Message);
	}
}
void TB::modificar(String^ name, String^ gen, String^ eda, String^ c, String^ p, String^ f, String^ ref)
{
	String^ sql = "update calificaciones set Nombre = '" + name + "', Genero = '" + gen + "', Edad = '" + eda + "', Calculo = '" + c + "', Programacion = '" + p + "', Fisica = '" + f + "' where id = '" + ref + "'";
	MySqlCommand^ cursor = gcnew MySqlCommand(sql, this->conn);
	try
	{
		using namespace System::Windows::Forms;
		using namespace System::Data;
		using namespace System::Drawing;
		cursor->ExecuteNonQuery();
	}
	catch (Exception^ e)
	{
		using namespace System::Windows::Forms;
		using namespace System::Data;
		using namespace System::Drawing;
		MessageBox::Show(e->Message);
	}

}
void TB::eliminar(String^ id)
{
	String^ sql = "delete from calificaciones where id = '" + id + "'";
	MySqlCommand^ cursor = gcnew MySqlCommand(sql, this->conn);
	try
	{
		using namespace System::Windows::Forms;
		using namespace System::Data;
		using namespace System::Drawing;
		cursor->ExecuteNonQuery();
		using namespace System::Windows::Forms;
		using namespace System::Data;
		using namespace System::Drawing;
		MessageBox::Show(L"Eliminado correctamente!");
	}
	catch (Exception^ e)
	{
		using namespace System::Windows::Forms;
		using namespace System::Data;
		using namespace System::Drawing;
		MessageBox::Show(e->Message);
	}

}