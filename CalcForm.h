#pragma once

namespace CalculatorCpp {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for CalcForm
	/// </summary>
	public ref class CalcForm : public System::Windows::Forms::Form
	{
	public:
		CalcForm(void)
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
		~CalcForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ btnSpace;
	protected:

	protected:

	private: System::Windows::Forms::TextBox^ txtDisplay;
	private: System::Windows::Forms::Button^ btnC;
	private: System::Windows::Forms::Button^ btnPM;
	protected:



	private: System::Windows::Forms::Button^ btnCE;

	private: System::Windows::Forms::Button^ btn7;
	private: System::Windows::Forms::Button^ btn8;
	private: System::Windows::Forms::Button^ btnP;



	private: System::Windows::Forms::Button^ btn9;
	private: System::Windows::Forms::Button^ btn4;
	private: System::Windows::Forms::Button^ btn5;
	private: System::Windows::Forms::Button^ M;




	private: System::Windows::Forms::Button^ btn6;
	private: System::Windows::Forms::Button^ btn1;
	private: System::Windows::Forms::Button^ btn2;
	private: System::Windows::Forms::Button^ btnMulti;




	private: System::Windows::Forms::Button^ btn3;
	private: System::Windows::Forms::Button^ btn0;
	private: System::Windows::Forms::Button^ btnFloat;



	private: System::Windows::Forms::Button^ btnDiv;
	private: System::Windows::Forms::Button^ btnEquals;



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
			this->btnSpace = (gcnew System::Windows::Forms::Button());
			this->txtDisplay = (gcnew System::Windows::Forms::TextBox());
			this->btnC = (gcnew System::Windows::Forms::Button());
			this->btnPM = (gcnew System::Windows::Forms::Button());
			this->btnCE = (gcnew System::Windows::Forms::Button());
			this->btn7 = (gcnew System::Windows::Forms::Button());
			this->btn8 = (gcnew System::Windows::Forms::Button());
			this->btnP = (gcnew System::Windows::Forms::Button());
			this->btn9 = (gcnew System::Windows::Forms::Button());
			this->btn4 = (gcnew System::Windows::Forms::Button());
			this->btn5 = (gcnew System::Windows::Forms::Button());
			this->M = (gcnew System::Windows::Forms::Button());
			this->btn6 = (gcnew System::Windows::Forms::Button());
			this->btn1 = (gcnew System::Windows::Forms::Button());
			this->btn2 = (gcnew System::Windows::Forms::Button());
			this->btnMulti = (gcnew System::Windows::Forms::Button());
			this->btn3 = (gcnew System::Windows::Forms::Button());
			this->btn0 = (gcnew System::Windows::Forms::Button());
			this->btnFloat = (gcnew System::Windows::Forms::Button());
			this->btnDiv = (gcnew System::Windows::Forms::Button());
			this->btnEquals = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// btnSpace
			// 
			this->btnSpace->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnSpace->Location = System::Drawing::Point(12, 105);
			this->btnSpace->Name = L"btnSpace";
			this->btnSpace->Size = System::Drawing::Size(80, 55);
			this->btnSpace->TabIndex = 0;
			this->btnSpace->Text = L"⌫";
			this->btnSpace->UseVisualStyleBackColor = true;
			this->btnSpace->Click += gcnew System::EventHandler(this, &CalcForm::button1_Click);
			// 
			// txtDisplay
			// 
			this->txtDisplay->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txtDisplay->Location = System::Drawing::Point(12, 12);
			this->txtDisplay->Multiline = true;
			this->txtDisplay->Name = L"txtDisplay";
			this->txtDisplay->Size = System::Drawing::Size(365, 53);
			this->txtDisplay->TabIndex = 1;
			this->txtDisplay->Text = L"0";
			this->txtDisplay->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			// 
			// btnC
			// 
			this->btnC->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnC->Location = System::Drawing::Point(107, 105);
			this->btnC->Name = L"btnC";
			this->btnC->Size = System::Drawing::Size(80, 55);
			this->btnC->TabIndex = 2;
			this->btnC->Text = L"C";
			this->btnC->UseVisualStyleBackColor = true;
			this->btnC->Click += gcnew System::EventHandler(this, &CalcForm::button2_Click);
			// 
			// btnPM
			// 
			this->btnPM->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnPM->Location = System::Drawing::Point(297, 105);
			this->btnPM->Name = L"btnPM";
			this->btnPM->Size = System::Drawing::Size(80, 55);
			this->btnPM->TabIndex = 3;
			this->btnPM->Text = L"±";
			this->btnPM->UseVisualStyleBackColor = true;
			this->btnPM->Click += gcnew System::EventHandler(this, &CalcForm::button3_Click);
			// 
			// btnCE
			// 
			this->btnCE->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnCE->Location = System::Drawing::Point(202, 105);
			this->btnCE->Name = L"btnCE";
			this->btnCE->Size = System::Drawing::Size(80, 55);
			this->btnCE->TabIndex = 4;
			this->btnCE->Text = L"CE";
			this->btnCE->UseVisualStyleBackColor = true;
			this->btnCE->Click += gcnew System::EventHandler(this, &CalcForm::button4_Click);
			// 
			// btn7
			// 
			this->btn7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn7->Location = System::Drawing::Point(12, 166);
			this->btn7->Name = L"btn7";
			this->btn7->Size = System::Drawing::Size(80, 55);
			this->btn7->TabIndex = 0;
			this->btn7->Text = L"7";
			this->btn7->UseVisualStyleBackColor = true;
			this->btn7->Click += gcnew System::EventHandler(this, &CalcForm::EnterNumber);
			// 
			// btn8
			// 
			this->btn8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn8->Location = System::Drawing::Point(107, 166);
			this->btn8->Name = L"btn8";
			this->btn8->Size = System::Drawing::Size(80, 55);
			this->btn8->TabIndex = 2;
			this->btn8->Text = L"8";
			this->btn8->UseVisualStyleBackColor = true;
			this->btn8->Click += gcnew System::EventHandler(this, &CalcForm::EnterNumber);
			// 
			// btnP
			// 
			this->btnP->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnP->Location = System::Drawing::Point(297, 166);
			this->btnP->Name = L"btnP";
			this->btnP->Size = System::Drawing::Size(80, 55);
			this->btnP->TabIndex = 3;
			this->btnP->Text = L"+";
			this->btnP->UseVisualStyleBackColor = true;
			this->btnP->Click += gcnew System::EventHandler(this, &CalcForm::EnterOperator);
			// 
			// btn9
			// 
			this->btn9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn9->Location = System::Drawing::Point(202, 166);
			this->btn9->Name = L"btn9";
			this->btn9->Size = System::Drawing::Size(80, 55);
			this->btn9->TabIndex = 4;
			this->btn9->Text = L"9";
			this->btn9->UseVisualStyleBackColor = true;
			this->btn9->Click += gcnew System::EventHandler(this, &CalcForm::EnterNumber);
			// 
			// btn4
			// 
			this->btn4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn4->Location = System::Drawing::Point(12, 227);
			this->btn4->Name = L"btn4";
			this->btn4->Size = System::Drawing::Size(80, 55);
			this->btn4->TabIndex = 0;
			this->btn4->Text = L"4";
			this->btn4->UseVisualStyleBackColor = true;
			this->btn4->Click += gcnew System::EventHandler(this, &CalcForm::EnterNumber);
			// 
			// btn5
			// 
			this->btn5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn5->Location = System::Drawing::Point(107, 227);
			this->btn5->Name = L"btn5";
			this->btn5->Size = System::Drawing::Size(80, 55);
			this->btn5->TabIndex = 2;
			this->btn5->Text = L"5";
			this->btn5->UseVisualStyleBackColor = true;
			this->btn5->Click += gcnew System::EventHandler(this, &CalcForm::EnterNumber);
			// 
			// M
			// 
			this->M->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->M->Location = System::Drawing::Point(297, 227);
			this->M->Name = L"M";
			this->M->Size = System::Drawing::Size(80, 55);
			this->M->TabIndex = 3;
			this->M->Text = L"-";
			this->M->UseVisualStyleBackColor = true;
			this->M->Click += gcnew System::EventHandler(this, &CalcForm::EnterOperator);
			// 
			// btn6
			// 
			this->btn6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn6->Location = System::Drawing::Point(202, 227);
			this->btn6->Name = L"btn6";
			this->btn6->Size = System::Drawing::Size(80, 55);
			this->btn6->TabIndex = 4;
			this->btn6->Text = L"6";
			this->btn6->UseVisualStyleBackColor = true;
			this->btn6->Click += gcnew System::EventHandler(this, &CalcForm::EnterNumber);
			// 
			// btn1
			// 
			this->btn1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn1->Location = System::Drawing::Point(12, 288);
			this->btn1->Name = L"btn1";
			this->btn1->Size = System::Drawing::Size(80, 55);
			this->btn1->TabIndex = 0;
			this->btn1->Text = L"1";
			this->btn1->UseVisualStyleBackColor = true;
			this->btn1->Click += gcnew System::EventHandler(this, &CalcForm::EnterNumber);
			// 
			// btn2
			// 
			this->btn2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn2->Location = System::Drawing::Point(107, 288);
			this->btn2->Name = L"btn2";
			this->btn2->Size = System::Drawing::Size(80, 55);
			this->btn2->TabIndex = 2;
			this->btn2->Text = L"2";
			this->btn2->UseVisualStyleBackColor = true;
			this->btn2->Click += gcnew System::EventHandler(this, &CalcForm::EnterNumber);
			// 
			// btnMulti
			// 
			this->btnMulti->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnMulti->Location = System::Drawing::Point(297, 288);
			this->btnMulti->Name = L"btnMulti";
			this->btnMulti->Size = System::Drawing::Size(80, 55);
			this->btnMulti->TabIndex = 3;
			this->btnMulti->Text = L"*";
			this->btnMulti->UseVisualStyleBackColor = true;
			this->btnMulti->Click += gcnew System::EventHandler(this, &CalcForm::EnterOperator);
			// 
			// btn3
			// 
			this->btn3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn3->Location = System::Drawing::Point(202, 288);
			this->btn3->Name = L"btn3";
			this->btn3->Size = System::Drawing::Size(80, 55);
			this->btn3->TabIndex = 4;
			this->btn3->Text = L"3";
			this->btn3->UseVisualStyleBackColor = true;
			this->btn3->Click += gcnew System::EventHandler(this, &CalcForm::EnterNumber);
			// 
			// btn0
			// 
			this->btn0->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn0->Location = System::Drawing::Point(12, 349);
			this->btn0->Name = L"btn0";
			this->btn0->Size = System::Drawing::Size(80, 55);
			this->btn0->TabIndex = 0;
			this->btn0->Text = L"0";
			this->btn0->UseVisualStyleBackColor = true;
			this->btn0->Click += gcnew System::EventHandler(this, &CalcForm::EnterNumber);
			// 
			// btnFloat
			// 
			this->btnFloat->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnFloat->Location = System::Drawing::Point(107, 349);
			this->btnFloat->Name = L"btnFloat";
			this->btnFloat->Size = System::Drawing::Size(80, 55);
			this->btnFloat->TabIndex = 2;
			this->btnFloat->Text = L".";
			this->btnFloat->UseVisualStyleBackColor = true;
			this->btnFloat->Click += gcnew System::EventHandler(this, &CalcForm::button2_Click);
			// 
			// btnDiv
			// 
			this->btnDiv->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnDiv->Location = System::Drawing::Point(297, 349);
			this->btnDiv->Name = L"btnDiv";
			this->btnDiv->Size = System::Drawing::Size(80, 55);
			this->btnDiv->TabIndex = 3;
			this->btnDiv->Text = L"/";
			this->btnDiv->UseVisualStyleBackColor = true;
			this->btnDiv->Click += gcnew System::EventHandler(this, &CalcForm::EnterOperator);
			// 
			// btnEquals
			// 
			this->btnEquals->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnEquals->Location = System::Drawing::Point(202, 349);
			this->btnEquals->Name = L"btnEquals";
			this->btnEquals->Size = System::Drawing::Size(80, 55);
			this->btnEquals->TabIndex = 4;
			this->btnEquals->Text = L"=";
			this->btnEquals->UseVisualStyleBackColor = true;
			this->btnEquals->Click += gcnew System::EventHandler(this, &CalcForm::button20_Click);
			// 
			// CalcForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(389, 429);
			this->Controls->Add(this->btnEquals);
			this->Controls->Add(this->btn3);
			this->Controls->Add(this->btn6);
			this->Controls->Add(this->btn9);
			this->Controls->Add(this->btnCE);
			this->Controls->Add(this->btnDiv);
			this->Controls->Add(this->btnMulti);
			this->Controls->Add(this->M);
			this->Controls->Add(this->btnP);
			this->Controls->Add(this->btnPM);
			this->Controls->Add(this->btnFloat);
			this->Controls->Add(this->btn2);
			this->Controls->Add(this->btn5);
			this->Controls->Add(this->btn8);
			this->Controls->Add(this->btnC);
			this->Controls->Add(this->txtDisplay);
			this->Controls->Add(this->btn0);
			this->Controls->Add(this->btn1);
			this->Controls->Add(this->btn4);
			this->Controls->Add(this->btn7);
			this->Controls->Add(this->btnSpace);
			this->Name = L"CalcForm";
			this->Text = L"CalcForm";
			this->Load += gcnew System::EventHandler(this, &CalcForm::CalcForm_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		double firstDigit, secondDigit, result;
		String^ operators;

	
private: System::Void EnterNumber(System::Object^ sender, System::EventArgs^ e) {

	Button^ Numbers = safe_cast<Button^>(sender);

	if (txtDisplay->Text == "0")
	{
		txtDisplay->Text = Numbers->Text;
	}
	else 
	{
		txtDisplay->Text = txtDisplay->Text + Numbers->Text;
	}

}
private: System::Void EnterOperator(System::Object^ sender, System::EventArgs^ e) {

	Button^ NumbersOp = safe_cast<Button^>(sender);

	firstDigit = Double::Parse(txtDisplay->Text);
	txtDisplay->Text = "";
	operators = NumbersOp->Text;

}
};
}
