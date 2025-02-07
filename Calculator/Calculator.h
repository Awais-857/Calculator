#pragma once
#include "string"
namespace Calculator {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	/// <summary>
	/// Summary for Calculator
	/// </summary>
	public ref class Calculator : public System::Windows::Forms::Form
	{
	public:
		Calculator(void)
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
		~Calculator()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TextBox^ tbInput;
	private: System::Windows::Forms::TableLayoutPanel^ tbLayout;
    private: System::Windows::Forms::Button^ btnMod;


	private: System::Windows::Forms::Button^ btnX;

	private: System::Windows::Forms::Button^ btnC;

	private: System::Windows::Forms::Button^ btnCE;
	private: System::Windows::Forms::Button^ btnDivide;
    private: System::Windows::Forms::Button^ button2X;


    private: System::Windows::Forms::Button^ buttonSQ;
    private: System::Windows::Forms::Button^ btnRecip;



    private: System::Windows::Forms::Button^ btnEqual;

    private: System::Windows::Forms::Button^ btnProduct;

    private: System::Windows::Forms::Button^ btnDiff;

    private: System::Windows::Forms::Button^ btnSum;
    private: System::Windows::Forms::Button^ btnDecimal;
    private: System::Windows::Forms::Button^ btn0;
    private: System::Windows::Forms::Button^ btnInv;





    private: System::Windows::Forms::Button^ btn3;

    private: System::Windows::Forms::Button^ btn2;

    private: System::Windows::Forms::Button^ btn1;
    private: System::Windows::Forms::Button^ btn6;


    private: System::Windows::Forms::Button^ btn5;

    private: System::Windows::Forms::Button^ btn4;
    private: System::Windows::Forms::Button^ btn9;


    private: System::Windows::Forms::Button^ btn8;

    private: System::Windows::Forms::Button^ btn7;
    private: System::Windows::Forms::Label^ label1;
    private: System::Windows::Forms::ContextMenuStrip^ contextMenuStrip1;
    private: System::ComponentModel::IContainer^ components;





	protected:

	protected:

		/// <summary>
		/// Required designer variable.
        private: System::Double num1 = 0;
        private: System::Double num2 = 0;
        private: System::String^ operation = "";
        private: System::Boolean isNewEntry = true;
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
            this->btnSum->Click += gcnew System::EventHandler(this, &Calculator::btnSum_Click);
            this->btnDiff->Click += gcnew System::EventHandler(this, &Calculator::btnDiff_Click);
            this->btnProduct->Click += gcnew System::EventHandler(this, &Calculator::btnProduct_Click);
            this->btnDivide->Click += gcnew System::EventHandler(this, &Calculator::btnDivide_Click);
            this->btnEqual->Click += gcnew System::EventHandler(this, &Calculator::btnEqual_Click);
            this->btnC->Click += gcnew System::EventHandler(this, &Calculator::btnC_Click);
            this->btnCE->Click += gcnew System::EventHandler(this, &Calculator::btnCE_Click);
            this->btnX->Click += gcnew System::EventHandler(this, &Calculator::btnX_Click);

            this->components = (gcnew System::ComponentModel::Container());
            this->tbInput = (gcnew System::Windows::Forms::TextBox());
            this->tbLayout = (gcnew System::Windows::Forms::TableLayoutPanel());
            this->btnDecimal = (gcnew System::Windows::Forms::Button());
            this->btn0 = (gcnew System::Windows::Forms::Button());
            this->btnInv = (gcnew System::Windows::Forms::Button());
            this->btn3 = (gcnew System::Windows::Forms::Button());
            this->btn2 = (gcnew System::Windows::Forms::Button());
            this->btn1 = (gcnew System::Windows::Forms::Button());
            this->btn6 = (gcnew System::Windows::Forms::Button());
            this->btn5 = (gcnew System::Windows::Forms::Button());
            this->btn4 = (gcnew System::Windows::Forms::Button());
            this->btn9 = (gcnew System::Windows::Forms::Button());
            this->btn8 = (gcnew System::Windows::Forms::Button());
            this->btn7 = (gcnew System::Windows::Forms::Button());
            this->btnDivide = (gcnew System::Windows::Forms::Button());
            this->button2X = (gcnew System::Windows::Forms::Button());
            this->buttonSQ = (gcnew System::Windows::Forms::Button());
            this->btnRecip = (gcnew System::Windows::Forms::Button());
            this->btnX = (gcnew System::Windows::Forms::Button());
            this->btnC = (gcnew System::Windows::Forms::Button());
            this->btnCE = (gcnew System::Windows::Forms::Button());
            this->btnMod = (gcnew System::Windows::Forms::Button());
            this->btnProduct = (gcnew System::Windows::Forms::Button());
            this->btnDiff = (gcnew System::Windows::Forms::Button());
            this->btnSum = (gcnew System::Windows::Forms::Button());
            this->btnEqual = (gcnew System::Windows::Forms::Button());
            this->label1 = (gcnew System::Windows::Forms::Label());
            this->contextMenuStrip1 = (gcnew System::Windows::Forms::ContextMenuStrip(this->components));
            this->tbLayout->SuspendLayout();
            this->SuspendLayout();
            // 
            // tbInput
            // 
            this->tbInput->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
                | System::Windows::Forms::AnchorStyles::Right));
            this->tbInput->Font = (gcnew System::Drawing::Font(L"Consolas", 30, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->tbInput->Location = System::Drawing::Point(12, 59);
            this->tbInput->Name = L"tbInput";
            this->tbInput->Size = System::Drawing::Size(302, 54);
            this->tbInput->TabIndex = 0;
            this->tbInput->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
            this->tbInput->TextChanged += gcnew System::EventHandler(this, &Calculator::tbInput_TextChanged);
            // 
            // tbLayout
            // 
            this->tbLayout->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
                | System::Windows::Forms::AnchorStyles::Left)
                | System::Windows::Forms::AnchorStyles::Right));
            this->tbLayout->AutoSize = true;
            this->tbLayout->ColumnCount = 4;
            this->tbLayout->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent, 25.00062F)));
            this->tbLayout->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent, 25.00063F)));
            this->tbLayout->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent, 25.00063F)));
            this->tbLayout->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent, 24.99813F)));
            this->tbLayout->Controls->Add(this->btnDecimal, 2, 5);
            this->tbLayout->Controls->Add(this->btn0, 1, 5);
            this->tbLayout->Controls->Add(this->btnInv, 0, 5);
            this->tbLayout->Controls->Add(this->btn3, 2, 4);
            this->tbLayout->Controls->Add(this->btn2, 1, 4);
            this->tbLayout->Controls->Add(this->btn1, 0, 4);
            this->tbLayout->Controls->Add(this->btn6, 2, 3);
            this->tbLayout->Controls->Add(this->btn5, 1, 3);
            this->tbLayout->Controls->Add(this->btn4, 0, 3);
            this->tbLayout->Controls->Add(this->btn9, 2, 2);
            this->tbLayout->Controls->Add(this->btn8, 1, 2);
            this->tbLayout->Controls->Add(this->btn7, 0, 2);
            this->tbLayout->Controls->Add(this->btnDivide, 3, 1);
            this->tbLayout->Controls->Add(this->button2X, 2, 1);
            this->tbLayout->Controls->Add(this->buttonSQ, 1, 1);
            this->tbLayout->Controls->Add(this->btnRecip, 0, 1);
            this->tbLayout->Controls->Add(this->btnX, 3, 0);
            this->tbLayout->Controls->Add(this->btnC, 2, 0);
            this->tbLayout->Controls->Add(this->btnCE, 1, 0);
            this->tbLayout->Controls->Add(this->btnMod, 0, 0);
            this->tbLayout->Controls->Add(this->btnProduct, 3, 2);
            this->tbLayout->Controls->Add(this->btnDiff, 3, 3);
            this->tbLayout->Controls->Add(this->btnSum, 3, 4);
            this->tbLayout->Controls->Add(this->btnEqual, 3, 5);
            this->tbLayout->Location = System::Drawing::Point(12, 177);
            this->tbLayout->Name = L"tbLayout";
            this->tbLayout->RowCount = 6;
            this->tbLayout->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 16.66667F)));
            this->tbLayout->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 16.66667F)));
            this->tbLayout->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 16.66667F)));
            this->tbLayout->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 16.66667F)));
            this->tbLayout->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 16.66667F)));
            this->tbLayout->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 16.66667F)));
            this->tbLayout->Size = System::Drawing::Size(302, 306);
            this->tbLayout->TabIndex = 1;
            this->tbLayout->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &Calculator::tableLayoutPanel1_Paint);
            // 
            // btnDecimal
            // 
            this->btnDecimal->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
                | System::Windows::Forms::AnchorStyles::Left)
                | System::Windows::Forms::AnchorStyles::Right));
            this->btnDecimal->Font = (gcnew System::Drawing::Font(L"Calibri", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->btnDecimal->Location = System::Drawing::Point(153, 258);
            this->btnDecimal->Name = L"btnDecimal";
            this->btnDecimal->Size = System::Drawing::Size(69, 45);
            this->btnDecimal->TabIndex = 23;
            this->btnDecimal->Text = L".";
            this->btnDecimal->UseVisualStyleBackColor = true;
            this->btnDecimal->Click += gcnew System::EventHandler(this, &Calculator::btnDecimal_Click);
            // 
            // btn0
            // 
            this->btn0->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
                | System::Windows::Forms::AnchorStyles::Left)
                | System::Windows::Forms::AnchorStyles::Right));
            this->btn0->Font = (gcnew System::Drawing::Font(L"Calibri", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->btn0->Location = System::Drawing::Point(78, 258);
            this->btn0->Name = L"btn0";
            this->btn0->Size = System::Drawing::Size(69, 45);
            this->btn0->TabIndex = 22;
            this->btn0->Text = L"0";
            this->btn0->UseVisualStyleBackColor = true;
            this->btn0->Click += gcnew System::EventHandler(this, &Calculator::btn0_Click);
            // 
            // btnInv
            // 
            this->btnInv->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
                | System::Windows::Forms::AnchorStyles::Left)
                | System::Windows::Forms::AnchorStyles::Right));
            this->btnInv->Font = (gcnew System::Drawing::Font(L"Calibri", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->btnInv->Location = System::Drawing::Point(3, 258);
            this->btnInv->Name = L"btnInv";
            this->btnInv->Size = System::Drawing::Size(69, 45);
            this->btnInv->TabIndex = 21;
            this->btnInv->Text = L"+/-";
            this->btnInv->UseVisualStyleBackColor = true;
            this->btnInv->Click += gcnew System::EventHandler(this, &Calculator::btnInverse_Click);
            // 
            // btn3
            // 
            this->btn3->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
                | System::Windows::Forms::AnchorStyles::Left)
                | System::Windows::Forms::AnchorStyles::Right));
            this->btn3->Font = (gcnew System::Drawing::Font(L"Calibri", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->btn3->Location = System::Drawing::Point(153, 207);
            this->btn3->Name = L"btn3";
            this->btn3->Size = System::Drawing::Size(69, 45);
            this->btn3->TabIndex = 20;
            this->btn3->Text = L"3";
            this->btn3->UseVisualStyleBackColor = true;
            this->btn3->Click += gcnew System::EventHandler(this, &Calculator::btn3_Click);
            // 
            // btn2
            // 
            this->btn2->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
                | System::Windows::Forms::AnchorStyles::Left)
                | System::Windows::Forms::AnchorStyles::Right));
            this->btn2->Font = (gcnew System::Drawing::Font(L"Calibri", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->btn2->Location = System::Drawing::Point(78, 207);
            this->btn2->Name = L"btn2";
            this->btn2->Size = System::Drawing::Size(69, 45);
            this->btn2->TabIndex = 19;
            this->btn2->Text = L"2";
            this->btn2->UseVisualStyleBackColor = true;
            this->btn2->Click += gcnew System::EventHandler(this, &Calculator::btn2_Click);
            // 
            // btn1
            // 
            this->btn1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
                | System::Windows::Forms::AnchorStyles::Left)
                | System::Windows::Forms::AnchorStyles::Right));
            this->btn1->Font = (gcnew System::Drawing::Font(L"Calibri", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->btn1->Location = System::Drawing::Point(3, 207);
            this->btn1->Name = L"btn1";
            this->btn1->Size = System::Drawing::Size(69, 45);
            this->btn1->TabIndex = 18;
            this->btn1->Text = L"1";
            this->btn1->UseVisualStyleBackColor = true;
            this->btn1->Click += gcnew System::EventHandler(this, &Calculator::btn1_Click);
            // 
            // btn6
            // 
            this->btn6->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
                | System::Windows::Forms::AnchorStyles::Left)
                | System::Windows::Forms::AnchorStyles::Right));
            this->btn6->Font = (gcnew System::Drawing::Font(L"Calibri", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->btn6->Location = System::Drawing::Point(153, 156);
            this->btn6->Name = L"btn6";
            this->btn6->Size = System::Drawing::Size(69, 45);
            this->btn6->TabIndex = 17;
            this->btn6->Text = L"6";
            this->btn6->UseVisualStyleBackColor = true;
            this->btn6->Click += gcnew System::EventHandler(this, &Calculator::btn6_Click);
            // 
            // btn5
            // 
            this->btn5->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
                | System::Windows::Forms::AnchorStyles::Left)
                | System::Windows::Forms::AnchorStyles::Right));
            this->btn5->Font = (gcnew System::Drawing::Font(L"Calibri", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->btn5->Location = System::Drawing::Point(78, 156);
            this->btn5->Name = L"btn5";
            this->btn5->Size = System::Drawing::Size(69, 45);
            this->btn5->TabIndex = 16;
            this->btn5->Text = L"5";
            this->btn5->UseVisualStyleBackColor = true;
            this->btn5->Click += gcnew System::EventHandler(this, &Calculator::btn5_Click);
            // 
            // btn4
            // 
            this->btn4->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
                | System::Windows::Forms::AnchorStyles::Left)
                | System::Windows::Forms::AnchorStyles::Right));
            this->btn4->Font = (gcnew System::Drawing::Font(L"Calibri", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->btn4->Location = System::Drawing::Point(3, 156);
            this->btn4->Name = L"btn4";
            this->btn4->Size = System::Drawing::Size(69, 45);
            this->btn4->TabIndex = 15;
            this->btn4->Text = L"4";
            this->btn4->UseVisualStyleBackColor = true;
            this->btn4->Click += gcnew System::EventHandler(this, &Calculator::btn4_Click);
            // 
            // btn9
            // 
            this->btn9->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
                | System::Windows::Forms::AnchorStyles::Left)
                | System::Windows::Forms::AnchorStyles::Right));
            this->btn9->Font = (gcnew System::Drawing::Font(L"Calibri", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->btn9->Location = System::Drawing::Point(153, 105);
            this->btn9->Name = L"btn9";
            this->btn9->Size = System::Drawing::Size(69, 45);
            this->btn9->TabIndex = 14;
            this->btn9->Text = L"9";
            this->btn9->UseVisualStyleBackColor = true;
            this->btn9->Click += gcnew System::EventHandler(this, &Calculator::btn9_Click);
            // 
            // btn8
            // 
            this->btn8->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
                | System::Windows::Forms::AnchorStyles::Left)
                | System::Windows::Forms::AnchorStyles::Right));
            this->btn8->Font = (gcnew System::Drawing::Font(L"Calibri", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->btn8->Location = System::Drawing::Point(78, 105);
            this->btn8->Name = L"btn8";
            this->btn8->Size = System::Drawing::Size(69, 45);
            this->btn8->TabIndex = 13;
            this->btn8->Text = L"8";
            this->btn8->UseVisualStyleBackColor = true;
            this->btn8->Click += gcnew System::EventHandler(this, &Calculator::btn8_Click);
            // 
            // btn7
            // 
            this->btn7->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
                | System::Windows::Forms::AnchorStyles::Left)
                | System::Windows::Forms::AnchorStyles::Right));
            this->btn7->Font = (gcnew System::Drawing::Font(L"Calibri", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->btn7->Location = System::Drawing::Point(3, 105);
            this->btn7->Name = L"btn7";
            this->btn7->Size = System::Drawing::Size(69, 45);
            this->btn7->TabIndex = 12;
            this->btn7->Text = L"7";
            this->btn7->UseVisualStyleBackColor = true;
            this->btn7->Click += gcnew System::EventHandler(this, &Calculator::btn7_Click);
            // 
            // btnDivide
            // 
            this->btnDivide->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
                | System::Windows::Forms::AnchorStyles::Left)
                | System::Windows::Forms::AnchorStyles::Right));
            this->btnDivide->Font = (gcnew System::Drawing::Font(L"Calibri", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->btnDivide->Location = System::Drawing::Point(228, 54);
            this->btnDivide->Name = L"btnDivide";
            this->btnDivide->Size = System::Drawing::Size(71, 45);
            this->btnDivide->TabIndex = 7;
            this->btnDivide->Text = L"÷";
            this->btnDivide->UseVisualStyleBackColor = true;
            this->btnDivide->Click += gcnew System::EventHandler(this, &Calculator::btnDivide_Click);
            // 
            // button2X
            // 
            this->button2X->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
                | System::Windows::Forms::AnchorStyles::Left)
                | System::Windows::Forms::AnchorStyles::Right));
            this->button2X->Font = (gcnew System::Drawing::Font(L"Calibri", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->button2X->Location = System::Drawing::Point(153, 54);
            this->button2X->Name = L"button2X";
            this->button2X->Size = System::Drawing::Size(69, 45);
            this->button2X->TabIndex = 6;
            this->button2X->Text = L"2x";
            this->button2X->UseVisualStyleBackColor = true;
            this->button2X->Click += gcnew System::EventHandler(this, &Calculator::button6_Click);
            // 
            // buttonSQ
            // 
            this->buttonSQ->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
                | System::Windows::Forms::AnchorStyles::Left)
                | System::Windows::Forms::AnchorStyles::Right));
            this->buttonSQ->Font = (gcnew System::Drawing::Font(L"Calibri", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->buttonSQ->Location = System::Drawing::Point(78, 54);
            this->buttonSQ->Name = L"buttonSQ";
            this->buttonSQ->Size = System::Drawing::Size(69, 45);
            this->buttonSQ->TabIndex = 5;
            this->buttonSQ->Text = L"sq";
            this->buttonSQ->UseVisualStyleBackColor = true;
            this->buttonSQ->Click += gcnew System::EventHandler(this, &Calculator::button5_Click);
            // 
            // btnRecip
            // 
            this->btnRecip->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
                | System::Windows::Forms::AnchorStyles::Left)
                | System::Windows::Forms::AnchorStyles::Right));
            this->btnRecip->Font = (gcnew System::Drawing::Font(L"Calibri", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->btnRecip->Location = System::Drawing::Point(3, 54);
            this->btnRecip->Name = L"btnRecip";
            this->btnRecip->Size = System::Drawing::Size(69, 45);
            this->btnRecip->TabIndex = 4;
            this->btnRecip->Text = L"1/x";
            this->btnRecip->UseVisualStyleBackColor = true;
            this->btnRecip->Click += gcnew System::EventHandler(this, &Calculator::button4_Click);
            // 
            // btnX
            // 
            this->btnX->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
                | System::Windows::Forms::AnchorStyles::Left)
                | System::Windows::Forms::AnchorStyles::Right));
            this->btnX->Font = (gcnew System::Drawing::Font(L"Calibri", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->btnX->Location = System::Drawing::Point(228, 3);
            this->btnX->Name = L"btnX";
            this->btnX->Size = System::Drawing::Size(71, 45);
            this->btnX->TabIndex = 3;
            this->btnX->Text = L"X";
            this->btnX->UseVisualStyleBackColor = true;
            this->btnX->Click += gcnew System::EventHandler(this, &Calculator::btnX_Click);
            // 
            // btnC
            // 
            this->btnC->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
                | System::Windows::Forms::AnchorStyles::Left)
                | System::Windows::Forms::AnchorStyles::Right));
            this->btnC->Font = (gcnew System::Drawing::Font(L"Calibri", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->btnC->Location = System::Drawing::Point(153, 3);
            this->btnC->Name = L"btnC";
            this->btnC->Size = System::Drawing::Size(69, 45);
            this->btnC->TabIndex = 2;
            this->btnC->Text = L"C";
            this->btnC->UseVisualStyleBackColor = true;
            this->btnC->Click += gcnew System::EventHandler(this, &Calculator::btnC_Click);
            // 
            // btnCE
            // 
            this->btnCE->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
                | System::Windows::Forms::AnchorStyles::Left)
                | System::Windows::Forms::AnchorStyles::Right));
            this->btnCE->Font = (gcnew System::Drawing::Font(L"Calibri", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->btnCE->Location = System::Drawing::Point(78, 3);
            this->btnCE->Name = L"btnCE";
            this->btnCE->Size = System::Drawing::Size(69, 45);
            this->btnCE->TabIndex = 1;
            this->btnCE->Text = L"CE";
            this->btnCE->UseVisualStyleBackColor = true;
            this->btnCE->Click += gcnew System::EventHandler(this, &Calculator::btnCE_Click);
            // 
            // btnMod
            // 
            this->btnMod->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
                | System::Windows::Forms::AnchorStyles::Left)
                | System::Windows::Forms::AnchorStyles::Right));
            this->btnMod->Font = (gcnew System::Drawing::Font(L"Calibri", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->btnMod->Location = System::Drawing::Point(3, 3);
            this->btnMod->Name = L"btnMod";
            this->btnMod->Size = System::Drawing::Size(69, 45);
            this->btnMod->TabIndex = 0;
            this->btnMod->Text = L"%";
            this->btnMod->UseVisualStyleBackColor = true;
            this->btnMod->Click += gcnew System::EventHandler(this, &Calculator::btnmodulus_Click);
            // 
            // btnProduct
            // 
            this->btnProduct->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
                | System::Windows::Forms::AnchorStyles::Left)
                | System::Windows::Forms::AnchorStyles::Right));
            this->btnProduct->Font = (gcnew System::Drawing::Font(L"Calibri", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->btnProduct->Location = System::Drawing::Point(228, 105);
            this->btnProduct->Name = L"btnProduct";
            this->btnProduct->Size = System::Drawing::Size(71, 45);
            this->btnProduct->TabIndex = 10;
            this->btnProduct->Text = L"×";
            this->btnProduct->UseVisualStyleBackColor = true;
            this->btnProduct->Click += gcnew System::EventHandler(this, &Calculator::btnProduct_Click);
            // 
            // btnDiff
            // 
            this->btnDiff->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
                | System::Windows::Forms::AnchorStyles::Left)
                | System::Windows::Forms::AnchorStyles::Right));
            this->btnDiff->Font = (gcnew System::Drawing::Font(L"Calibri", 21.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->btnDiff->Location = System::Drawing::Point(228, 156);
            this->btnDiff->Name = L"btnDiff";
            this->btnDiff->Size = System::Drawing::Size(71, 45);
            this->btnDiff->TabIndex = 9;
            this->btnDiff->Text = L"−";
            this->btnDiff->UseVisualStyleBackColor = true;
            this->btnDiff->Click += gcnew System::EventHandler(this, &Calculator::btnDiff_Click);
            // 
            // btnSum
            // 
            this->btnSum->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
                | System::Windows::Forms::AnchorStyles::Left)
                | System::Windows::Forms::AnchorStyles::Right));
            this->btnSum->Font = (gcnew System::Drawing::Font(L"Calibri", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->btnSum->Location = System::Drawing::Point(228, 207);
            this->btnSum->Name = L"btnSum";
            this->btnSum->Size = System::Drawing::Size(71, 45);
            this->btnSum->TabIndex = 8;
            this->btnSum->Text = L"+";
            this->btnSum->UseVisualStyleBackColor = true;
            this->btnSum->Click += gcnew System::EventHandler(this, &Calculator::btnSum_Click);
            // 
            // btnEqual
            // 
            this->btnEqual->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
                | System::Windows::Forms::AnchorStyles::Left)
                | System::Windows::Forms::AnchorStyles::Right));
            this->btnEqual->BackColor = System::Drawing::Color::DodgerBlue;
            this->btnEqual->Font = (gcnew System::Drawing::Font(L"Calibri", 21.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->btnEqual->ForeColor = System::Drawing::SystemColors::ControlLightLight;
            this->btnEqual->Location = System::Drawing::Point(228, 258);
            this->btnEqual->Name = L"btnEqual";
            this->btnEqual->Size = System::Drawing::Size(71, 45);
            this->btnEqual->TabIndex = 11;
            this->btnEqual->Text = L"=";
            this->btnEqual->UseVisualStyleBackColor = false;
            this->btnEqual->Click += gcnew System::EventHandler(this, &Calculator::btnEqual_Click);
            // 
            // label1
            // 
            this->label1->AutoSize = true;
            this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label1->Location = System::Drawing::Point(232, 27);
            this->label1->Name = L"label1";
            this->label1->Size = System::Drawing::Size(0, 29);
            this->label1->TabIndex = 2;
            // 
            // contextMenuStrip1
            // 
            this->contextMenuStrip1->Name = L"contextMenuStrip1";
            this->contextMenuStrip1->Size = System::Drawing::Size(61, 4);
            this->contextMenuStrip1->Opening += gcnew System::ComponentModel::CancelEventHandler(this, &Calculator::contextMenuStrip1_Opening);
            // 
            // Calculator
            // 
            this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
            this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
            this->ClientSize = System::Drawing::Size(326, 495);
            this->Controls->Add(this->label1);
            this->Controls->Add(this->tbLayout);
            this->Controls->Add(this->tbInput);
            this->MinimumSize = System::Drawing::Size(342, 534);
            this->Name = L"Calculator";
            this->Text = L"Calculator";
            this->Load += gcnew System::EventHandler(this, &Calculator::Calculator_Load);
            this->tbLayout->ResumeLayout(false);
            this->ResumeLayout(false);
            this->PerformLayout();

        }
#pragma endregion
	private: System::Void tableLayoutPanel1_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
	}
private: System::Void btn0_Click(System::Object^ sender, System::EventArgs^ e) {
    Button btn = sender as Button;
    if (isNewEntry)
    {
        tbInput.Text = btn.Text;
        isNewEntry = false;
    }
    else
    {
        tbInput.Text += btn.Text;
    }
}
private: System::Void btn1_Click(System::Object^ sender, System::EventArgs^ e) {
    Button btn = sender as Button;
    if (isNewEntry)
    {
        tbInput.Text = btn.Text;
        isNewEntry = false;
    }
    else
    {
        tbInput.Text += btn.Text;
    }
}
private: System::Void btn2_Click(System::Object^ sender, System::EventArgs^ e) {
    Button btn = sender as Button;
    if (isNewEntry)
    {
        tbInput.Text = btn.Text;
        isNewEntry = false;
    }
    else
    {
        tbInput.Text += btn.Text;
    }
}
private: System::Void btn3_Click(System::Object^ sender, System::EventArgs^ e) {
    Button btn = sender as Button;
    if (isNewEntry)
    {
        tbInput.Text = btn.Text;
        isNewEntry = false;
    }
    else
    {
        tbInput.Text += btn.Text;
    }
}
private: System::Void btn4_Click(System::Object^ sender, System::EventArgs^ e) {
    Button btn = sender as Button;
    if (isNewEntry)
    {
        tbInput.Text = btn.Text;
        isNewEntry = false;
    }
    else
    {
        tbInput.Text += btn.Text;
    }
}
private: System::Void btn5_Click(System::Object^ sender, System::EventArgs^ e) {
    Button btn = sender as Button;
    if (isNewEntry)
    {
        tbInput.Text = btn.Text;
        isNewEntry = false;
    }
    else
    {
        tbInput.Text += btn.Text;
    }
}
private: System::Void btn6_Click(System::Object^ sender, System::EventArgs^ e) {
    Button btn = sender as Button;
    if (isNewEntry)
    {
        tbInput.Text = btn.Text;
        isNewEntry = false;
    }
    else
    {
        tbInput.Text += btn.Text;
    }
}
private: System::Void btn7_Click(System::Object^ sender, System::EventArgs^ e) {
    Button btn = sender as Button;
    if (isNewEntry)
    {
        tbInput.Text = btn.Text;
        isNewEntry = false;
    }
    else
    {
        tbInput.Text += btn.Text;
    }
}
private: System::Void btn8_Click(System::Object^ sender, System::EventArgs^ e) {
    Button btn = sender as Button;
    if (isNewEntry)
    {
        tbInput.Text = btn.Text;
        isNewEntry = false;
    }
    else
    {
        tbInput.Text += btn.Text;
    }
}
private: System::Void btn9_Click(System::Object^ sender, System::EventArgs^ e) {
    Button btn = sender as Button;
    if (isNewEntry)
    {
        tbInput.Text = btn.Text;
        isNewEntry = false;
    }
    else
    {
        tbInput.Text += btn.Text;
    }
}
private: System::Void btnEqual_Click(System::Object^ sender, System::EventArgs^ e) {
    if (operation != "")
    {
        num2 = double::Parse(tbInput->Text);
        num1 = Calculate(num1, num2, operation);
        tbInput->Text = num1.ToString();
        operation = "";
        isNewEntry = true;
    }
    else
    {
        // No operator was clicked before `=`
        tbInput->Text = num1.ToString();
    }

}
// Helper method: Performs the actual calculation
private: System::Double Calculate(System::Double num1, System::Double num2, System::String^ op)
{
    switch (op)
    {
        case "+": return num1 + num2;
        case "-": return num1 - num2;
        case "*": return num1 * num2;
        case "/": return num2 != 0 ? num1 / num2 : 0; // Prevent division by zero
        default: return num2;
    }
}
private: System::Void Calculator_Load(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void tbInput_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void btnmodulus_Click(System::Object^ sender, System::EventArgs^ e) {
    this->label1->Text = this->tbInput->Text + "%";
    this->tbInput->Text = "";
}
private: System::Void btnCE_Click(System::Object^ sender, System::EventArgs^ e) {
    tbInput.Text = "0";
    isNewEntry = true;
}
private: System::Void btnC_Click(System::Object^ sender, System::EventArgs^ e) {
    tbInput.Text = "0";
    label1.Text = "";
    num1 = 0;
    num2 = 0;
    operation = "";
    isNewEntry = true;
}
private: System::Void btnX_Click(System::Object^ sender, System::EventArgs^ e) {
    if (tbInput.Text.Length > 1)
    {
        tbInput.Text = tbInput.Text.Substring(0, tbInput.Text.Length - 1);
    }
    else
    {
        tbInput.Text = "0";
    }
}
private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button5_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button6_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void btnDivide_Click(System::Object^ sender, System::EventArgs^ e) {
    Button btn = sender as Button;
    
    if (!isNewEntry)
    {
        if (operation != "")
        {
            num2 = double::Parse(tbInput->Text);
            num1 = Calculate(num1, num2, operation);
            tbInput->Text = num1.ToString();

        }
        else
        {
            num1 = double.Parse(tbInput.Text);
        }
    }

    operation = btn.Text;
    isNewEntry = true;
}
private: System::Void btnProduct_Click(System::Object^ sender, System::EventArgs^ e) {
    Button btn = sender as Button;
    
    if (!isNewEntry)
    {
        if (operation != "")
        {
            num2 = double::Parse(tbInput->Text);
            num1 = Calculate(num1, num2, operation);
            tbInput->Text = num1.ToString();

        }
        else
        {
            num1 = double.Parse(tbInput.Text);
        }
    }

    operation = btn.Text;
    isNewEntry = true;
}
private: System::Void btnDiff_Click(System::Object^ sender, System::EventArgs^ e) {
    Button btn = sender as Button;
    
    if (!isNewEntry)
    {
        if (operation != "")
        {
            num2 = double.Parse(TextBox.Text);
            num1 = Calculate(num1, num2, operation);
            TextBox.Text = num1.ToString();
        }
        else
        {
            num1 = double.Parse(TextBox.Text);
        }
    }

    operation = btn.Text;
    isNewEntry = true;
}
private: System::Void btnSum_Click(System::Object^ sender, System::EventArgs^ e) {
    Button btn = sender as Button;
    
    if (!isNewEntry)
    {
        if (operation != "")
        {
            num2 = double.Parse(TextBox.Text);
            num1 = Calculate(num1, num2, operation);
            TextBox.Text = num1.ToString();
        }
        else
        {
            num1 = double.Parse(TextBox.Text);
        }
    }

    operation = btn.Text;
    isNewEntry = true;
}
private: System::Void btnDecimal_Click(System::Object^ sender, System::EventArgs^ e) {
    if (!tbInput->Text->Contains(".")) {
        tbInput->Text += ".";
    }    
}
private: System::Void btnInverse_Click(System::Object^ sender, System::EventArgs^ e) {
    if (tbInput->Text->Length > 0)
    {
        double value = double::Parse(tbInput->Text);
        value = -value;
        tbInput->Text = value.ToString();
    }
}
private: System::Void contextMenuStrip1_Opening(System::Object^ sender, System::ComponentModel::CancelEventArgs^ e) {
}
};
}
