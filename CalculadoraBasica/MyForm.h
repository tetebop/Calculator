#pragma once
#include <string>
#include <iostream>
using namespace std;

namespace CalculadoraBasica {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{

		//Crear variables 
	private:double valor1;
	private:double valor2;
	private:double resultado;
	private:int operacion;


	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TextBox^ tbDisplay;
	private: System::Windows::Forms::Button^ btnSuma;
	private: System::Windows::Forms::Button^ btnResta;
	private: System::Windows::Forms::Button^ btnMultiplicacion;
	private: System::Windows::Forms::Button^ btnDivision;
	private: System::Windows::Forms::Button^ btn7;
	private: System::Windows::Forms::Button^ btn8;
	private: System::Windows::Forms::Button^ btn9;
	private: System::Windows::Forms::Button^ btn4;

	protected:

	protected:








	private: System::Windows::Forms::Button^ btn5;

	private: System::Windows::Forms::Button^ btn6;
	private: System::Windows::Forms::Button^ btn1;


	private: System::Windows::Forms::Button^ btn2;

	private: System::Windows::Forms::Button^ btn3;
	private: System::Windows::Forms::Button^ btnPunto;
	private: System::Windows::Forms::Button^ btn0;
	private: System::Windows::Forms::Button^ btnIgual;
	private: System::Windows::Forms::Button^ btnClear;





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
			this->tbDisplay = (gcnew System::Windows::Forms::TextBox());
			this->btnSuma = (gcnew System::Windows::Forms::Button());
			this->btnResta = (gcnew System::Windows::Forms::Button());
			this->btnMultiplicacion = (gcnew System::Windows::Forms::Button());
			this->btnDivision = (gcnew System::Windows::Forms::Button());
			this->btn7 = (gcnew System::Windows::Forms::Button());
			this->btn8 = (gcnew System::Windows::Forms::Button());
			this->btn9 = (gcnew System::Windows::Forms::Button());
			this->btn4 = (gcnew System::Windows::Forms::Button());
			this->btn5 = (gcnew System::Windows::Forms::Button());
			this->btn6 = (gcnew System::Windows::Forms::Button());
			this->btn1 = (gcnew System::Windows::Forms::Button());
			this->btn2 = (gcnew System::Windows::Forms::Button());
			this->btn3 = (gcnew System::Windows::Forms::Button());
			this->btnPunto = (gcnew System::Windows::Forms::Button());
			this->btn0 = (gcnew System::Windows::Forms::Button());
			this->btnIgual = (gcnew System::Windows::Forms::Button());
			this->btnClear = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// tbDisplay
			// 
			this->tbDisplay->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->tbDisplay->Location = System::Drawing::Point(45, 38);
			this->tbDisplay->Multiline = true;
			this->tbDisplay->Name = L"tbDisplay";
			this->tbDisplay->RightToLeft = System::Windows::Forms::RightToLeft::Yes;
			this->tbDisplay->Size = System::Drawing::Size(315, 56);
			this->tbDisplay->TabIndex = 0;
			// 
			// btnSuma
			// 
			this->btnSuma->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnSuma->Location = System::Drawing::Point(45, 122);
			this->btnSuma->Name = L"btnSuma";
			this->btnSuma->Size = System::Drawing::Size(74, 45);
			this->btnSuma->TabIndex = 1;
			this->btnSuma->Text = L"+";
			this->btnSuma->UseVisualStyleBackColor = true;
			this->btnSuma->Click += gcnew System::EventHandler(this, &MyForm::btnSuma_Click);
			// 
			// btnResta
			// 
			this->btnResta->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnResta->Location = System::Drawing::Point(125, 122);
			this->btnResta->Name = L"btnResta";
			this->btnResta->Size = System::Drawing::Size(74, 45);
			this->btnResta->TabIndex = 2;
			this->btnResta->Text = L"-";
			this->btnResta->UseVisualStyleBackColor = true;
			this->btnResta->Click += gcnew System::EventHandler(this, &MyForm::btnResta_Click);
			// 
			// btnMultiplicacion
			// 
			this->btnMultiplicacion->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnMultiplicacion->Location = System::Drawing::Point(205, 122);
			this->btnMultiplicacion->Name = L"btnMultiplicacion";
			this->btnMultiplicacion->Size = System::Drawing::Size(74, 45);
			this->btnMultiplicacion->TabIndex = 3;
			this->btnMultiplicacion->Text = L"x";
			this->btnMultiplicacion->UseVisualStyleBackColor = true;
			this->btnMultiplicacion->Click += gcnew System::EventHandler(this, &MyForm::btnMultiplicacion_Click);
			// 
			// btnDivision
			// 
			this->btnDivision->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnDivision->Location = System::Drawing::Point(286, 122);
			this->btnDivision->Name = L"btnDivision";
			this->btnDivision->Size = System::Drawing::Size(74, 45);
			this->btnDivision->TabIndex = 4;
			this->btnDivision->Text = L"/";
			this->btnDivision->UseVisualStyleBackColor = true;
			this->btnDivision->Click += gcnew System::EventHandler(this, &MyForm::btnDivision_Click);
			// 
			// btn7
			// 
			this->btn7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn7->Location = System::Drawing::Point(45, 188);
			this->btn7->Name = L"btn7";
			this->btn7->Size = System::Drawing::Size(101, 45);
			this->btn7->TabIndex = 5;
			this->btn7->Text = L"7";
			this->btn7->UseVisualStyleBackColor = true;
			this->btn7->Click += gcnew System::EventHandler(this, &MyForm::btn7_Click);
			// 
			// btn8
			// 
			this->btn8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn8->Location = System::Drawing::Point(152, 188);
			this->btn8->Name = L"btn8";
			this->btn8->Size = System::Drawing::Size(101, 45);
			this->btn8->TabIndex = 6;
			this->btn8->Text = L"8";
			this->btn8->UseVisualStyleBackColor = true;
			this->btn8->Click += gcnew System::EventHandler(this, &MyForm::btn8_Click);
			// 
			// btn9
			// 
			this->btn9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn9->Location = System::Drawing::Point(259, 188);
			this->btn9->Name = L"btn9";
			this->btn9->Size = System::Drawing::Size(101, 45);
			this->btn9->TabIndex = 7;
			this->btn9->Text = L"9";
			this->btn9->UseVisualStyleBackColor = true;
			this->btn9->Click += gcnew System::EventHandler(this, &MyForm::btn9_Click);
			// 
			// btn4
			// 
			this->btn4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn4->Location = System::Drawing::Point(45, 239);
			this->btn4->Name = L"btn4";
			this->btn4->Size = System::Drawing::Size(101, 45);
			this->btn4->TabIndex = 8;
			this->btn4->Text = L"4";
			this->btn4->UseVisualStyleBackColor = true;
			this->btn4->Click += gcnew System::EventHandler(this, &MyForm::btn4_Click);
			// 
			// btn5
			// 
			this->btn5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn5->Location = System::Drawing::Point(152, 239);
			this->btn5->Name = L"btn5";
			this->btn5->Size = System::Drawing::Size(101, 45);
			this->btn5->TabIndex = 9;
			this->btn5->Text = L"5";
			this->btn5->UseVisualStyleBackColor = true;
			this->btn5->Click += gcnew System::EventHandler(this, &MyForm::btn5_Click);
			// 
			// btn6
			// 
			this->btn6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn6->Location = System::Drawing::Point(259, 239);
			this->btn6->Name = L"btn6";
			this->btn6->Size = System::Drawing::Size(101, 45);
			this->btn6->TabIndex = 10;
			this->btn6->Text = L"6";
			this->btn6->UseVisualStyleBackColor = true;
			this->btn6->Click += gcnew System::EventHandler(this, &MyForm::btn6_Click);
			// 
			// btn1
			// 
			this->btn1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn1->Location = System::Drawing::Point(45, 290);
			this->btn1->Name = L"btn1";
			this->btn1->Size = System::Drawing::Size(101, 45);
			this->btn1->TabIndex = 11;
			this->btn1->Text = L"1";
			this->btn1->UseVisualStyleBackColor = true;
			this->btn1->Click += gcnew System::EventHandler(this, &MyForm::btn1_Click);
			// 
			// btn2
			// 
			this->btn2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn2->Location = System::Drawing::Point(152, 290);
			this->btn2->Name = L"btn2";
			this->btn2->Size = System::Drawing::Size(101, 45);
			this->btn2->TabIndex = 12;
			this->btn2->Text = L"2";
			this->btn2->UseVisualStyleBackColor = true;
			this->btn2->Click += gcnew System::EventHandler(this, &MyForm::btn2_Click);
			// 
			// btn3
			// 
			this->btn3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn3->Location = System::Drawing::Point(259, 290);
			this->btn3->Name = L"btn3";
			this->btn3->Size = System::Drawing::Size(101, 45);
			this->btn3->TabIndex = 13;
			this->btn3->Text = L"3";
			this->btn3->UseVisualStyleBackColor = true;
			this->btn3->Click += gcnew System::EventHandler(this, &MyForm::btn3_Click);
			// 
			// btnPunto
			// 
			this->btnPunto->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnPunto->Location = System::Drawing::Point(45, 341);
			this->btnPunto->Name = L"btnPunto";
			this->btnPunto->Size = System::Drawing::Size(101, 45);
			this->btnPunto->TabIndex = 14;
			this->btnPunto->Text = L".";
			this->btnPunto->UseVisualStyleBackColor = true;
			this->btnPunto->Click += gcnew System::EventHandler(this, &MyForm::btnPunto_Click);
			// 
			// btn0
			// 
			this->btn0->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn0->Location = System::Drawing::Point(152, 341);
			this->btn0->Name = L"btn0";
			this->btn0->Size = System::Drawing::Size(101, 45);
			this->btn0->TabIndex = 15;
			this->btn0->Text = L"0";
			this->btn0->UseVisualStyleBackColor = true;
			this->btn0->Click += gcnew System::EventHandler(this, &MyForm::btn0_Click);
			// 
			// btnIgual
			// 
			this->btnIgual->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnIgual->Location = System::Drawing::Point(259, 341);
			this->btnIgual->Name = L"btnIgual";
			this->btnIgual->Size = System::Drawing::Size(101, 45);
			this->btnIgual->TabIndex = 16;
			this->btnIgual->Text = L"=";
			this->btnIgual->UseVisualStyleBackColor = true;
			this->btnIgual->Click += gcnew System::EventHandler(this, &MyForm::btnIgual_Click);
			// 
			// btnClear
			// 
			this->btnClear->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnClear->Location = System::Drawing::Point(152, 403);
			this->btnClear->Name = L"btnClear";
			this->btnClear->Size = System::Drawing::Size(101, 45);
			this->btnClear->TabIndex = 17;
			this->btnClear->Text = L"Clear";
			this->btnClear->UseVisualStyleBackColor = true;
			this->btnClear->Click += gcnew System::EventHandler(this, &MyForm::btnClear_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(9, 20);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(403, 475);
			this->Controls->Add(this->btnClear);
			this->Controls->Add(this->btnIgual);
			this->Controls->Add(this->btn0);
			this->Controls->Add(this->btnPunto);
			this->Controls->Add(this->btn3);
			this->Controls->Add(this->btn2);
			this->Controls->Add(this->btn1);
			this->Controls->Add(this->btn6);
			this->Controls->Add(this->btn5);
			this->Controls->Add(this->btn4);
			this->Controls->Add(this->btn9);
			this->Controls->Add(this->btn8);
			this->Controls->Add(this->btn7);
			this->Controls->Add(this->btnDivision);
			this->Controls->Add(this->btnMultiplicacion);
			this->Controls->Add(this->btnResta);
			this->Controls->Add(this->btnSuma);
			this->Controls->Add(this->tbDisplay);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void btn0_Click(System::Object^ sender, System::EventArgs^ e) {
		//numero 0
		//Al textbox le vamos a agregar un cero  (.Text) -> propiedad de TextBox
		tbDisplay->Text = tbDisplay->Text+"0";
	}
private: System::Void btn1_Click(System::Object^ sender, System::EventArgs^ e) {
	//numero 1
	tbDisplay->Text = tbDisplay->Text + "1";
}
private: System::Void btn2_Click(System::Object^ sender, System::EventArgs^ e) {
	//numero 2
	tbDisplay->Text = tbDisplay->Text + "2";
}
private: System::Void btn3_Click(System::Object^ sender, System::EventArgs^ e) {
	//numero 3
	tbDisplay->Text = tbDisplay->Text + "3";
}
private: System::Void btn4_Click(System::Object^ sender, System::EventArgs^ e) {
	//numero 4
	tbDisplay->Text = tbDisplay->Text + "4";
}
private: System::Void btn5_Click(System::Object^ sender, System::EventArgs^ e) {
	//numero 5
	tbDisplay->Text = tbDisplay->Text + "5";
}
private: System::Void btn6_Click(System::Object^ sender, System::EventArgs^ e) {
	//numero 6
	tbDisplay->Text = tbDisplay->Text + "6";
}
private: System::Void btn7_Click(System::Object^ sender, System::EventArgs^ e) {
	//numero 7
	tbDisplay->Text = tbDisplay->Text + "7";
}
private: System::Void btn8_Click(System::Object^ sender, System::EventArgs^ e) {
	//numero 8
	tbDisplay->Text = tbDisplay->Text + "8";
}
private: System::Void btn9_Click(System::Object^ sender, System::EventArgs^ e) {
	//numero 9
	tbDisplay->Text = tbDisplay->Text + "9";
}
private: System::Void btnClear_Click(System::Object^ sender, System::EventArgs^ e) {
	//boton Clear
	tbDisplay->Text = "";
}

private: System::Void btnIgual_Click(System::Object^ sender, System::EventArgs^ e) {

	//boton igual
	valor2 = Convert::ToDouble(tbDisplay->Text);

	
	switch (operacion) {
	case 1:
		resultado = valor1 + valor2;
		break;
	case 2:
		resultado = valor1 - valor2;
		break;
	case 3:
		resultado = valor1 * valor2;
		break;
	case 4:
		resultado = valor1 / valor2;
		break;
	}
	tbDisplay->Text = resultado.ToString();


}
private: System::Void btnSuma_Click(System::Object^ sender, System::EventArgs^ e) {

	//boton suma
	
	operacion = 1;
	// Almacenar valor
	valor1 = Convert::ToDouble(tbDisplay->Text);
	// Desaparecer valor al dar click en "+"
	tbDisplay->Text = "";

}
private: System::Void btnResta_Click(System::Object^ sender, System::EventArgs^ e) {

	//boton resta
	operacion = 2;
	valor1 = Convert::ToDouble(tbDisplay->Text);
	tbDisplay->Text = "";
}
private: System::Void btnMultiplicacion_Click(System::Object^ sender, System::EventArgs^ e) {

	//boton multiplicacion
	operacion = 3;
	valor1 = Convert::ToDouble(tbDisplay->Text);
	tbDisplay->Text = "";
}
private: System::Void btnDivision_Click(System::Object^ sender, System::EventArgs^ e) {
	//boton division

	operacion = 4;
	valor1 = Convert::ToDouble(tbDisplay->Text);
	tbDisplay->Text = "";
}
private: System::Void btnPunto_Click(System::Object^ sender, System::EventArgs^ e) {
	//boton punto

	tbDisplay->Text = tbDisplay->Text + ".";
}
};
}
