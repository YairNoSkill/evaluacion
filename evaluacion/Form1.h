#pragma once
#include "DB.h"
#include "modificar.h"


namespace CppCLRWinFormsProject {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Form1
	/// </summary>
	public ref class Form1 : public System::Windows::Forms::Form
	{
	public:
		Form1(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			this->data = gcnew TB();
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~Form1()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TextBox^ txt_nombre;
	private: System::Windows::Forms::TextBox^ txt_edad;
	private: System::Windows::Forms::TextBox^ txt_genero;
	private: System::Windows::Forms::TextBox^ txt_calculo;
	protected:

	protected:



	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::TextBox^ txt_progra;
	private: System::Windows::Forms::TextBox^ txt_fisica;


	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Button^ btn_guardar;

	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::DataGridView^ data_grid;


	private: TB^ data;
	private: System::Windows::Forms::Button^ btn_eliminar;


	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->txt_nombre = (gcnew System::Windows::Forms::TextBox());
			this->txt_edad = (gcnew System::Windows::Forms::TextBox());
			this->txt_genero = (gcnew System::Windows::Forms::TextBox());
			this->txt_calculo = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->txt_progra = (gcnew System::Windows::Forms::TextBox());
			this->txt_fisica = (gcnew System::Windows::Forms::TextBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->btn_guardar = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->data_grid = (gcnew System::Windows::Forms::DataGridView());
			this->btn_eliminar = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->data_grid))->BeginInit();
			this->SuspendLayout();
			// 
			// txt_nombre
			// 
			this->txt_nombre->Location = System::Drawing::Point(12, 150);
			this->txt_nombre->Name = L"txt_nombre";
			this->txt_nombre->Size = System::Drawing::Size(201, 20);
			this->txt_nombre->TabIndex = 0;
			// 
			// txt_edad
			// 
			this->txt_edad->Location = System::Drawing::Point(12, 221);
			this->txt_edad->Name = L"txt_edad";
			this->txt_edad->Size = System::Drawing::Size(201, 20);
			this->txt_edad->TabIndex = 1;
			// 
			// txt_genero
			// 
			this->txt_genero->Location = System::Drawing::Point(14, 273);
			this->txt_genero->Name = L"txt_genero";
			this->txt_genero->Size = System::Drawing::Size(201, 20);
			this->txt_genero->TabIndex = 2;
			// 
			// txt_calculo
			// 
			this->txt_calculo->Location = System::Drawing::Point(14, 370);
			this->txt_calculo->Name = L"txt_calculo";
			this->txt_calculo->Size = System::Drawing::Size(55, 20);
			this->txt_calculo->TabIndex = 3;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(92, 134);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(44, 13);
			this->label1->TabIndex = 4;
			this->label1->Text = L"Nombre";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(104, 205);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(32, 13);
			this->label2->TabIndex = 5;
			this->label2->Text = L"Edad";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(94, 257);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(42, 13);
			this->label3->TabIndex = 6;
			this->label3->Text = L"Genero";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(78, 332);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(72, 13);
			this->label4->TabIndex = 7;
			this->label4->Text = L"Calificaciones";
			// 
			// txt_progra
			// 
			this->txt_progra->Location = System::Drawing::Point(95, 370);
			this->txt_progra->Name = L"txt_progra";
			this->txt_progra->Size = System::Drawing::Size(55, 20);
			this->txt_progra->TabIndex = 8;
			// 
			// txt_fisica
			// 
			this->txt_fisica->Location = System::Drawing::Point(174, 370);
			this->txt_fisica->Name = L"txt_fisica";
			this->txt_fisica->Size = System::Drawing::Size(55, 20);
			this->txt_fisica->TabIndex = 9;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(11, 354);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(47, 13);
			this->label5->TabIndex = 10;
			this->label5->Text = L"Calculo l";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(92, 354);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(72, 13);
			this->label6->TabIndex = 11;
			this->label6->Text = L"Programacion";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(171, 354);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(39, 13);
			this->label7->TabIndex = 12;
			this->label7->Text = L"Fisica l";
			// 
			// btn_guardar
			// 
			this->btn_guardar->BackColor = System::Drawing::Color::Chartreuse;
			this->btn_guardar->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->btn_guardar->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->btn_guardar->Location = System::Drawing::Point(14, 396);
			this->btn_guardar->Name = L"btn_guardar";
			this->btn_guardar->Size = System::Drawing::Size(75, 23);
			this->btn_guardar->TabIndex = 13;
			this->btn_guardar->Text = L"Aceptar";
			this->btn_guardar->UseVisualStyleBackColor = false;
			this->btn_guardar->Click += gcnew System::EventHandler(this, &Form1::btn_guardar);
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::Color::Red;
			this->button2->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button2->Location = System::Drawing::Point(135, 396);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(75, 23);
			this->button2->TabIndex = 14;
			this->button2->Text = L"Cancelar";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &Form1::button2_Click);
			// 
			// data_grid
			// 
			this->data_grid->BackgroundColor = System::Drawing::Color::LightCoral;
			this->data_grid->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->data_grid->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->data_grid->Location = System::Drawing::Point(262, 118);
			this->data_grid->Name = L"data_grid";
			this->data_grid->Size = System::Drawing::Size(396, 272);
			this->data_grid->TabIndex = 15;
			this->data_grid->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &Form1::data_grid_CellContentClick);
			// 
			// btn_eliminar
			// 
			this->btn_eliminar->Location = System::Drawing::Point(426, 401);
			this->btn_eliminar->Name = L"btn_eliminar";
			this->btn_eliminar->Size = System::Drawing::Size(99, 24);
			this->btn_eliminar->TabIndex = 16;
			this->btn_eliminar->Text = L"Eliminar";
			this->btn_eliminar->UseVisualStyleBackColor = true;
			this->btn_eliminar->Click += gcnew System::EventHandler(this, &Form1::btn_eliminar);
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::Tomato;
			this->ClientSize = System::Drawing::Size(695, 437);
			this->Controls->Add(this->btn_eliminar);
			this->Controls->Add(this->data_grid);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->btn_guardar);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->txt_fisica);
			this->Controls->Add(this->txt_progra);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->txt_calculo);
			this->Controls->Add(this->txt_genero);
			this->Controls->Add(this->txt_edad);
			this->Controls->Add(this->txt_nombre);
			this->Name = L"Form1";
			this->Text = L"Form1";
			this->Load += gcnew System::EventHandler(this, &Form1::Form1_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->data_grid))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void Form1_Load(System::Object^ sender, System::EventArgs^ e) {
	}
	public: void Consulta() {
		this->data->AbrirConexion();
		this->data_grid->DataSource = this->data->getData();
		this->data->CerrarConexion();
	}

private: System::Void data_grid_CellContentClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
	String^ id = Convert::ToString(data_grid->SelectedRows[0]->Cells[0]->Value);
	String^ nombre = Convert::ToString(data_grid->SelectedRows[0]->Cells[1]->Value);
	String^ genero = Convert::ToString(data_grid->SelectedRows[0]->Cells[2]->Value);
	String^ edad = Convert::ToString(data_grid->SelectedRows[0]->Cells[3]->Value);
	String^ calculo = Convert::ToString(data_grid->SelectedRows[0]->Cells[4]->Value);
	String^ progra = Convert::ToString(data_grid->SelectedRows[0]->Cells[3]->Value);
	String^ fisica = Convert::ToString(data_grid->SelectedRows[0]->Cells[4]->Value);
	CppCLR_WinFormsProject::modificar^ form = gcnew CppCLR_WinFormsProject::modificar();
	form->txt_nombre->Text = nombre;
	form->txt_genero->Text = genero;
	form->txt_edad->Text = edad;
	form->txt_calculo->Text = calculo;
	form->txt_progra->Text = progra;
	form->txt_fisica->Text = fisica;
	form->ShowDialog();

	TB^ data = gcnew TB();
	data->AbrirConexion();
	this->data->modificar(from->txt_nombre->Text, from->txt_genero->Text, from->txt_edad->Text, from->txt_calculo->Text, from->txt_progra->Text, from->txt_fisica->Text, nombre);
	data->CerrarConexion();
	this->Consulta();


}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Close();
}
private: System::Void btn_eliminar(System::Object^ sender, System::EventArgs^ e) {
	String^ id = Convert::ToString(data_grid->SelectedRows[0]->Cells[0]->Value);
	TB^ data = gcnew TB();
	data->AbrirConexion();
	data->eliminar(id);
	data->CerrarConexion();
	this->Consulta();

}
private: System::Void btn_guardar(System::Object^ sender, System::EventArgs^ e) {
	this->data->AbrirConexion();
	this->data->insertar(this->txt_nombre->Text, this->txt_genero->Text, this->txt_edad->Text, this->txt_calculo->Text, this->txt_progra->Text, this->txt_fisica->Text);
	this->data->CerrarConexion();
	this->Consulta();
	MessageBox::Show(L"Estudiante agregado a la lista correctamente!");
}
};
}

