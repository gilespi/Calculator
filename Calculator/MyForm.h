#pragma once

namespace Calculator {

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
	private: System::Windows::Forms::TextBox^ txtScore;
	private: System::Windows::Forms::Button^ btnDel;
	private: System::Windows::Forms::Button^ btnC;
	private: System::Windows::Forms::Button^ btnCe;
	private: System::Windows::Forms::Button^ btnPm;
	private: System::Windows::Forms::Button^ btnPlus;
	protected:

	protected:





	private: System::Windows::Forms::Button^ btnDigit9;

	private: System::Windows::Forms::Button^ btnDigit8;

	private: System::Windows::Forms::Button^ btnDigit7;
	private: System::Windows::Forms::Button^ btnMinus;



	private: System::Windows::Forms::Button^ btnDigit6;

	private: System::Windows::Forms::Button^ btnDigit5;

	private: System::Windows::Forms::Button^ btnDigit4;
	private: System::Windows::Forms::Button^ btnMult;


	private: System::Windows::Forms::Button^ btnDigit3;

	private: System::Windows::Forms::Button^ btnDigit2;

	private: System::Windows::Forms::Button^ btnDigit1;
	private: System::Windows::Forms::Button^ btnDivid;


	private: System::Windows::Forms::Button^ btnEquals;

	private: System::Windows::Forms::Button^ btnDot;

	private: System::Windows::Forms::Button^ btnDigit0;





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
			this->txtScore = (gcnew System::Windows::Forms::TextBox());
			this->btnDel = (gcnew System::Windows::Forms::Button());
			this->btnC = (gcnew System::Windows::Forms::Button());
			this->btnCe = (gcnew System::Windows::Forms::Button());
			this->btnPm = (gcnew System::Windows::Forms::Button());
			this->btnPlus = (gcnew System::Windows::Forms::Button());
			this->btnDigit9 = (gcnew System::Windows::Forms::Button());
			this->btnDigit8 = (gcnew System::Windows::Forms::Button());
			this->btnDigit7 = (gcnew System::Windows::Forms::Button());
			this->btnMinus = (gcnew System::Windows::Forms::Button());
			this->btnDigit6 = (gcnew System::Windows::Forms::Button());
			this->btnDigit5 = (gcnew System::Windows::Forms::Button());
			this->btnDigit4 = (gcnew System::Windows::Forms::Button());
			this->btnMult = (gcnew System::Windows::Forms::Button());
			this->btnDigit3 = (gcnew System::Windows::Forms::Button());
			this->btnDigit2 = (gcnew System::Windows::Forms::Button());
			this->btnDigit1 = (gcnew System::Windows::Forms::Button());
			this->btnDivid = (gcnew System::Windows::Forms::Button());
			this->btnEquals = (gcnew System::Windows::Forms::Button());
			this->btnDot = (gcnew System::Windows::Forms::Button());
			this->btnDigit0 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// txtScore
			// 
			this->txtScore->Font = (gcnew System::Drawing::Font(L"Montserrat", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txtScore->Location = System::Drawing::Point(12, 12);
			this->txtScore->Multiline = true;
			this->txtScore->Name = L"txtScore";
			this->txtScore->RightToLeft = System::Windows::Forms::RightToLeft::Yes;
			this->txtScore->Size = System::Drawing::Size(330, 54);
			this->txtScore->TabIndex = 0;
			this->txtScore->Text = L"0";
			// 
			// btnDel
			// 
			this->btnDel->BackColor = System::Drawing::Color::DarkGray;
			this->btnDel->Font = (gcnew System::Drawing::Font(L"Montserrat", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnDel->Location = System::Drawing::Point(12, 83);
			this->btnDel->Name = L"btnDel";
			this->btnDel->Size = System::Drawing::Size(75, 68);
			this->btnDel->TabIndex = 1;
			this->btnDel->Text = L"DEL";
			this->btnDel->UseVisualStyleBackColor = false;
			this->btnDel->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// btnC
			// 
			this->btnC->BackColor = System::Drawing::Color::DarkGray;
			this->btnC->Font = (gcnew System::Drawing::Font(L"Montserrat", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnC->Location = System::Drawing::Point(99, 83);
			this->btnC->Name = L"btnC";
			this->btnC->Size = System::Drawing::Size(75, 68);
			this->btnC->TabIndex = 2;
			this->btnC->Text = L"C";
			this->btnC->UseVisualStyleBackColor = false;
			this->btnC->Click += gcnew System::EventHandler(this, &MyForm::btnC_Click);
			// 
			// btnCe
			// 
			this->btnCe->BackColor = System::Drawing::Color::DarkGray;
			this->btnCe->Font = (gcnew System::Drawing::Font(L"Montserrat", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnCe->Location = System::Drawing::Point(183, 83);
			this->btnCe->Name = L"btnCe";
			this->btnCe->Size = System::Drawing::Size(75, 68);
			this->btnCe->TabIndex = 3;
			this->btnCe->Text = L"CE";
			this->btnCe->UseVisualStyleBackColor = false;
			this->btnCe->Click += gcnew System::EventHandler(this, &MyForm::btnCe_Click);
			// 
			// btnPm
			// 
			this->btnPm->BackColor = System::Drawing::Color::DarkGray;
			this->btnPm->Font = (gcnew System::Drawing::Font(L"Montserrat", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnPm->Location = System::Drawing::Point(267, 83);
			this->btnPm->Name = L"btnPm";
			this->btnPm->Size = System::Drawing::Size(75, 68);
			this->btnPm->TabIndex = 4;
			this->btnPm->Text = L"+-";
			this->btnPm->UseVisualStyleBackColor = false;
			this->btnPm->Click += gcnew System::EventHandler(this, &MyForm::btnPm_Click);
			// 
			// btnPlus
			// 
			this->btnPlus->BackColor = System::Drawing::Color::DarkGray;
			this->btnPlus->Font = (gcnew System::Drawing::Font(L"Montserrat", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnPlus->Location = System::Drawing::Point(267, 157);
			this->btnPlus->Name = L"btnPlus";
			this->btnPlus->Size = System::Drawing::Size(75, 68);
			this->btnPlus->TabIndex = 8;
			this->btnPlus->Text = L"+";
			this->btnPlus->UseVisualStyleBackColor = false;
			this->btnPlus->Click += gcnew System::EventHandler(this, &MyForm::OperatorInput);
			// 
			// btnDigit9
			// 
			this->btnDigit9->BackColor = System::Drawing::Color::DarkGray;
			this->btnDigit9->Font = (gcnew System::Drawing::Font(L"Montserrat", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnDigit9->Location = System::Drawing::Point(183, 157);
			this->btnDigit9->Name = L"btnDigit9";
			this->btnDigit9->Size = System::Drawing::Size(75, 68);
			this->btnDigit9->TabIndex = 7;
			this->btnDigit9->Text = L"9";
			this->btnDigit9->UseVisualStyleBackColor = false;
			this->btnDigit9->Click += gcnew System::EventHandler(this, &MyForm::EnterNum);
			// 
			// btnDigit8
			// 
			this->btnDigit8->BackColor = System::Drawing::Color::DarkGray;
			this->btnDigit8->Font = (gcnew System::Drawing::Font(L"Montserrat", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnDigit8->Location = System::Drawing::Point(99, 157);
			this->btnDigit8->Name = L"btnDigit8";
			this->btnDigit8->Size = System::Drawing::Size(75, 68);
			this->btnDigit8->TabIndex = 6;
			this->btnDigit8->Text = L"8";
			this->btnDigit8->UseVisualStyleBackColor = false;
			this->btnDigit8->Click += gcnew System::EventHandler(this, &MyForm::EnterNum);
			// 
			// btnDigit7
			// 
			this->btnDigit7->BackColor = System::Drawing::Color::DarkGray;
			this->btnDigit7->Font = (gcnew System::Drawing::Font(L"Montserrat", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnDigit7->Location = System::Drawing::Point(12, 157);
			this->btnDigit7->Name = L"btnDigit7";
			this->btnDigit7->Size = System::Drawing::Size(75, 68);
			this->btnDigit7->TabIndex = 5;
			this->btnDigit7->Text = L"7";
			this->btnDigit7->UseVisualStyleBackColor = false;
			this->btnDigit7->Click += gcnew System::EventHandler(this, &MyForm::EnterNum);
			// 
			// btnMinus
			// 
			this->btnMinus->BackColor = System::Drawing::Color::DarkGray;
			this->btnMinus->Font = (gcnew System::Drawing::Font(L"Montserrat", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnMinus->Location = System::Drawing::Point(267, 231);
			this->btnMinus->Name = L"btnMinus";
			this->btnMinus->Size = System::Drawing::Size(75, 68);
			this->btnMinus->TabIndex = 12;
			this->btnMinus->Text = L"-";
			this->btnMinus->UseVisualStyleBackColor = false;
			this->btnMinus->Click += gcnew System::EventHandler(this, &MyForm::OperatorInput);
			// 
			// btnDigit6
			// 
			this->btnDigit6->BackColor = System::Drawing::Color::DarkGray;
			this->btnDigit6->Font = (gcnew System::Drawing::Font(L"Montserrat", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnDigit6->Location = System::Drawing::Point(183, 231);
			this->btnDigit6->Name = L"btnDigit6";
			this->btnDigit6->Size = System::Drawing::Size(75, 68);
			this->btnDigit6->TabIndex = 11;
			this->btnDigit6->Text = L"6";
			this->btnDigit6->UseVisualStyleBackColor = false;
			this->btnDigit6->Click += gcnew System::EventHandler(this, &MyForm::EnterNum);
			// 
			// btnDigit5
			// 
			this->btnDigit5->BackColor = System::Drawing::Color::DarkGray;
			this->btnDigit5->Font = (gcnew System::Drawing::Font(L"Montserrat", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnDigit5->Location = System::Drawing::Point(99, 231);
			this->btnDigit5->Name = L"btnDigit5";
			this->btnDigit5->Size = System::Drawing::Size(75, 68);
			this->btnDigit5->TabIndex = 10;
			this->btnDigit5->Text = L"5";
			this->btnDigit5->UseVisualStyleBackColor = false;
			this->btnDigit5->Click += gcnew System::EventHandler(this, &MyForm::EnterNum);
			// 
			// btnDigit4
			// 
			this->btnDigit4->BackColor = System::Drawing::Color::DarkGray;
			this->btnDigit4->Font = (gcnew System::Drawing::Font(L"Montserrat", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnDigit4->Location = System::Drawing::Point(12, 231);
			this->btnDigit4->Name = L"btnDigit4";
			this->btnDigit4->Size = System::Drawing::Size(75, 68);
			this->btnDigit4->TabIndex = 9;
			this->btnDigit4->Text = L"4";
			this->btnDigit4->UseVisualStyleBackColor = false;
			this->btnDigit4->Click += gcnew System::EventHandler(this, &MyForm::EnterNum);
			// 
			// btnMult
			// 
			this->btnMult->BackColor = System::Drawing::Color::DarkGray;
			this->btnMult->Font = (gcnew System::Drawing::Font(L"Montserrat", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnMult->Location = System::Drawing::Point(267, 305);
			this->btnMult->Name = L"btnMult";
			this->btnMult->Size = System::Drawing::Size(75, 68);
			this->btnMult->TabIndex = 16;
			this->btnMult->Text = L"*";
			this->btnMult->UseVisualStyleBackColor = false;
			this->btnMult->Click += gcnew System::EventHandler(this, &MyForm::OperatorInput);
			// 
			// btnDigit3
			// 
			this->btnDigit3->BackColor = System::Drawing::Color::DarkGray;
			this->btnDigit3->Font = (gcnew System::Drawing::Font(L"Montserrat", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnDigit3->Location = System::Drawing::Point(183, 305);
			this->btnDigit3->Name = L"btnDigit3";
			this->btnDigit3->Size = System::Drawing::Size(75, 68);
			this->btnDigit3->TabIndex = 15;
			this->btnDigit3->Text = L"3";
			this->btnDigit3->UseVisualStyleBackColor = false;
			this->btnDigit3->Click += gcnew System::EventHandler(this, &MyForm::EnterNum);
			// 
			// btnDigit2
			// 
			this->btnDigit2->BackColor = System::Drawing::Color::DarkGray;
			this->btnDigit2->Font = (gcnew System::Drawing::Font(L"Montserrat", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnDigit2->Location = System::Drawing::Point(99, 305);
			this->btnDigit2->Name = L"btnDigit2";
			this->btnDigit2->Size = System::Drawing::Size(75, 68);
			this->btnDigit2->TabIndex = 14;
			this->btnDigit2->Text = L"2";
			this->btnDigit2->UseVisualStyleBackColor = false;
			this->btnDigit2->Click += gcnew System::EventHandler(this, &MyForm::EnterNum);
			// 
			// btnDigit1
			// 
			this->btnDigit1->BackColor = System::Drawing::Color::DarkGray;
			this->btnDigit1->Font = (gcnew System::Drawing::Font(L"Montserrat", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnDigit1->Location = System::Drawing::Point(12, 305);
			this->btnDigit1->Name = L"btnDigit1";
			this->btnDigit1->Size = System::Drawing::Size(75, 68);
			this->btnDigit1->TabIndex = 13;
			this->btnDigit1->Text = L"1";
			this->btnDigit1->UseVisualStyleBackColor = false;
			this->btnDigit1->Click += gcnew System::EventHandler(this, &MyForm::EnterNum);
			// 
			// btnDivid
			// 
			this->btnDivid->BackColor = System::Drawing::Color::DarkGray;
			this->btnDivid->Font = (gcnew System::Drawing::Font(L"Montserrat", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnDivid->Location = System::Drawing::Point(267, 379);
			this->btnDivid->Name = L"btnDivid";
			this->btnDivid->Size = System::Drawing::Size(75, 68);
			this->btnDivid->TabIndex = 20;
			this->btnDivid->Text = L"/";
			this->btnDivid->UseVisualStyleBackColor = false;
			this->btnDivid->Click += gcnew System::EventHandler(this, &MyForm::OperatorInput);
			// 
			// btnEquals
			// 
			this->btnEquals->BackColor = System::Drawing::Color::DarkGray;
			this->btnEquals->Font = (gcnew System::Drawing::Font(L"Montserrat", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnEquals->Location = System::Drawing::Point(183, 379);
			this->btnEquals->Name = L"btnEquals";
			this->btnEquals->Size = System::Drawing::Size(75, 68);
			this->btnEquals->TabIndex = 19;
			this->btnEquals->Text = L"=";
			this->btnEquals->UseVisualStyleBackColor = false;
			this->btnEquals->Click += gcnew System::EventHandler(this, &MyForm::btnEquals_Click);
			// 
			// btnDot
			// 
			this->btnDot->BackColor = System::Drawing::Color::DarkGray;
			this->btnDot->Font = (gcnew System::Drawing::Font(L"Montserrat", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnDot->Location = System::Drawing::Point(99, 379);
			this->btnDot->Name = L"btnDot";
			this->btnDot->Size = System::Drawing::Size(75, 68);
			this->btnDot->TabIndex = 18;
			this->btnDot->Text = L".";
			this->btnDot->UseVisualStyleBackColor = false;
			this->btnDot->Click += gcnew System::EventHandler(this, &MyForm::btnDot_Click);
			// 
			// btnDigit0
			// 
			this->btnDigit0->BackColor = System::Drawing::Color::DarkGray;
			this->btnDigit0->Font = (gcnew System::Drawing::Font(L"Montserrat", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnDigit0->Location = System::Drawing::Point(12, 379);
			this->btnDigit0->Name = L"btnDigit0";
			this->btnDigit0->Size = System::Drawing::Size(75, 68);
			this->btnDigit0->TabIndex = 17;
			this->btnDigit0->Text = L"0";
			this->btnDigit0->UseVisualStyleBackColor = false;
			this->btnDigit0->Click += gcnew System::EventHandler(this, &MyForm::EnterNum);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::Silver;
			this->ClientSize = System::Drawing::Size(354, 463);
			this->Controls->Add(this->btnDivid);
			this->Controls->Add(this->btnEquals);
			this->Controls->Add(this->btnDot);
			this->Controls->Add(this->btnDigit0);
			this->Controls->Add(this->btnMult);
			this->Controls->Add(this->btnDigit3);
			this->Controls->Add(this->btnDigit2);
			this->Controls->Add(this->btnDigit1);
			this->Controls->Add(this->btnMinus);
			this->Controls->Add(this->btnDigit6);
			this->Controls->Add(this->btnDigit5);
			this->Controls->Add(this->btnDigit4);
			this->Controls->Add(this->btnPlus);
			this->Controls->Add(this->btnDigit9);
			this->Controls->Add(this->btnDigit8);
			this->Controls->Add(this->btnDigit7);
			this->Controls->Add(this->btnPm);
			this->Controls->Add(this->btnCe);
			this->Controls->Add(this->btnC);
			this->Controls->Add(this->btnDel);
			this->Controls->Add(this->txtScore);
			this->Name = L"MyForm";
			this->Text = L"Calculator";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		double firstNum, secondNum, result;
		String^ operators;

	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		if (txtScore->Text->Length > 0)
		{
			txtScore->Text = txtScore->Text->Remove(txtScore->Text->Length - 1, 1);
		}
	}
private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void EnterNum(System::Object^ sender, System::EventArgs^ e) {
	Button^ Numbers = safe_cast<Button^>(sender);

	if (txtScore->Text == "0")
	{
		txtScore->Text = Numbers->Text;
	}
	else
	{
		txtScore->Text += Numbers->Text;
	}
}
private: System::Void OperatorInput(System::Object^ sender, System::EventArgs^ e) {
	Button^ NumOps = safe_cast<Button^>(sender);

	firstNum = Double::Parse(txtScore->Text);

	txtScore->Text = "";
	operators = NumOps->Text;


}
private: System::Void btnDot_Click(System::Object^ sender, System::EventArgs^ e) {
	
	if (!txtScore->Text->Contains("."))
	{
		txtScore->Text += ".";
	}


}
private: System::Void btnEquals_Click(System::Object^ sender, System::EventArgs^ e) {

	secondNum = Double::Parse(txtScore->Text);

	if (operators == "+")
	{
		result = firstNum + secondNum;
		txtScore->Text = System::Convert::ToString(result);
	}
	else if (operators == "-")
	{
		result = firstNum - secondNum;
		txtScore->Text = System::Convert::ToString(result);
	}
	else if (operators == "*")
	{
		result = firstNum * secondNum;
		txtScore->Text = System::Convert::ToString(result);
	}
	else if (operators == "/")
	{
		result = firstNum / secondNum;
		txtScore->Text = System::Convert::ToString(result);
	}


}
private: System::Void btnC_Click(System::Object^ sender, System::EventArgs^ e) {

	txtScore->Text = "0";

}
private: System::Void btnCe_Click(System::Object^ sender, System::EventArgs^ e) {
	
	txtScore->Text = "0";

}
private: System::Void btnPm_Click(System::Object^ sender, System::EventArgs^ e) {

	if (txtScore->Text->Contains("-"))
	{
		txtScore->Text = txtScore->Text->Remove(0, 1);
	}
	else
	{
		txtScore->Text = "-" + txtScore->Text;
	}
}
};
}
