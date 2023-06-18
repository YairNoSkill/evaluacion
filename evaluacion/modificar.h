#pragma once

namespace evaluacion {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Resumen de modificar
	/// </summary>
	public ref class modificar : public System::Windows::Forms::Form
	{
	public:
		modificar(void)
		{
			InitializeComponent();
			//
			//TODO: agregar código de constructor aquí
			//
		}

	protected:
		/// <summary>
		/// Limpiar los recursos que se estén usando.
		/// </summary>
		~modificar()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::TextBox^ txt_nombre;
	protected:

	private: System::Windows::Forms::TextBox^ txt_edad;

	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::TextBox^ txt_genero;


	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::TextBox^ txt_calculo;

	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::TextBox^ txt_progra;

	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::TextBox^ txt_fisica;

	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::Button^ btn_guardar;

	private:
		/// <summary>
		/// Variable del diseñador necesaria.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Método necesario para admitir el Diseñador. No se puede modificar
		/// el contenido de este método con el editor de código.
		/// </summary>
		void InitializeComponent(void)
		{
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->txt_nombre = (gcnew System::Windows::Forms::TextBox());
			this->txt_edad = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->txt_genero = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->txt_calculo = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->txt_progra = (gcnew System::Windows::Forms::TextBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->txt_fisica = (gcnew System::Windows::Forms::TextBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->btn_guardar = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(189, 64);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(44, 13);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Nombre";
			// 
			// txt_nombre
			// 
			this->txt_nombre->Location = System::Drawing::Point(121, 98);
			this->txt_nombre->Name = L"txt_nombre";
			this->txt_nombre->Size = System::Drawing::Size(172, 20);
			this->txt_nombre->TabIndex = 1;
			// 
			// txt_edad
			// 
			this->txt_edad->Location = System::Drawing::Point(121, 221);
			this->txt_edad->Name = L"txt_edad";
			this->txt_edad->Size = System::Drawing::Size(172, 20);
			this->txt_edad->TabIndex = 3;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(189, 194);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(32, 13);
			this->label2->TabIndex = 2;
			this->label2->Text = L"Edad";
			// 
			// txt_genero
			// 
			this->txt_genero->Location = System::Drawing::Point(121, 160);
			this->txt_genero->Name = L"txt_genero";
			this->txt_genero->Size = System::Drawing::Size(172, 20);
			this->txt_genero->TabIndex = 5;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(189, 126);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(42, 13);
			this->label3->TabIndex = 4;
			this->label3->Text = L"Genero";
			// 
			// txt_calculo
			// 
			this->txt_calculo->Location = System::Drawing::Point(62, 303);
			this->txt_calculo->Name = L"txt_calculo";
			this->txt_calculo->Size = System::Drawing::Size(68, 20);
			this->txt_calculo->TabIndex = 7;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(80, 278);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(42, 13);
			this->label4->TabIndex = 6;
			this->label4->Text = L"Calculo";
			// 
			// txt_progra
			// 
			this->txt_progra->Location = System::Drawing::Point(166, 303);
			this->txt_progra->Name = L"txt_progra";
			this->txt_progra->Size = System::Drawing::Size(68, 20);
			this->txt_progra->TabIndex = 9;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(163, 278);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(72, 13);
			this->label5->TabIndex = 8;
			this->label5->Text = L"Programacion";
			// 
			// txt_fisica
			// 
			this->txt_fisica->Location = System::Drawing::Point(257, 303);
			this->txt_fisica->Name = L"txt_fisica";
			this->txt_fisica->Size = System::Drawing::Size(68, 20);
			this->txt_fisica->TabIndex = 11;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(271, 278);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(34, 13);
			this->label6->TabIndex = 10;
			this->label6->Text = L"Fisica";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(163, 256);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(72, 13);
			this->label7->TabIndex = 12;
			this->label7->Text = L"Calificaciones";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->label8->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 14.25F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->label8->Location = System::Drawing::Point(145, 22);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(128, 25);
			this->label8->TabIndex = 13;
			this->label8->Text = L"Modificacion";
			// 
			// btn_guardar
			// 
			this->btn_guardar->BackColor = System::Drawing::Color::DarkOrchid;
			this->btn_guardar->Location = System::Drawing::Point(150, 348);
			this->btn_guardar->Name = L"btn_guardar";
			this->btn_guardar->Size = System::Drawing::Size(106, 23);
			this->btn_guardar->TabIndex = 14;
			this->btn_guardar->Text = L"Guardar";
			this->btn_guardar->UseVisualStyleBackColor = false;
			this->btn_guardar->Click += gcnew System::EventHandler(this, &modificar::btn_guardar_Click);
			// 
			// modificar
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::Fuchsia;
			this->ClientSize = System::Drawing::Size(398, 421);
			this->Controls->Add(this->btn_guardar);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->txt_fisica);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->txt_progra);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->txt_calculo);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->txt_genero);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->txt_edad);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->txt_nombre);
			this->Controls->Add(this->label1);
			this->Name = L"modificar";
			this->Text = L"modificar";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void btn_guardar_Click(System::Object^ sender, System::EventArgs^ e) {
		MessageBox::Show(L"Usuario actualizado correctamente");
		this->Close();
	}
};
}
