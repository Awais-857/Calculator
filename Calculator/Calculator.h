#pragma once
#include "string"
namespace Calculator {

    using namespace System;
    using namespace System::ComponentModel;
    using namespace System::Collections;
    using namespace System::Windows::Forms;
    using namespace System::Data;
    using namespace System::Drawing;

    public ref class Calculator : public System::Windows::Forms::Form
    {
    public:
        Calculator(void)
        {
            InitializeComponent();
        }

    protected:
        ~Calculator()
        {
            if (components)
            {
                delete components;
            }
        }
    private: System::Windows::Forms::TextBox^ tbInput;
    private: System::Windows::Forms::Button^ btnEqual;
    private: System::Windows::Forms::Button^ btnProduct;
    private: System::Windows::Forms::Button^ btnDiff;
    private: System::Windows::Forms::Button^ btnSum;
    private: System::Windows::Forms::Button^ btnDivide;
    private: System::Windows::Forms::Button^ btnC;
    private: System::Windows::Forms::Button^ btnCE;
    private: System::Windows::Forms::Button^ btnX;
    private: System::Windows::Forms::Button^ btnDecimal;
    private: System::Windows::Forms::Button^ btnInv;
    private: System::Windows::Forms::Label^ label1;
    private: System::ComponentModel::IContainer^ components;
    private: System::Double num1 = 0;
    private: System::Double num2 = 0;
    private: System::String^ operation = "";
    private: System::Boolean isNewEntry = true;

#pragma region Windows Form Designer generated code
        void InitializeComponent(void)
        {
            this->tbInput = gcnew System::Windows::Forms::TextBox();
            this->btnEqual = gcnew System::Windows::Forms::Button();
            this->btnProduct = gcnew System::Windows::Forms::Button();
            this->btnDiff = gcnew System::Windows::Forms::Button();
            this->btnSum = gcnew System::Windows::Forms::Button();
            this->btnDivide = gcnew System::Windows::Forms::Button();
            this->btnC = gcnew System::Windows::Forms::Button();
            this->btnCE = gcnew System::Windows::Forms::Button();
            this->btnX = gcnew System::Windows::Forms::Button();
            this->btnDecimal = gcnew System::Windows::Forms::Button();
            this->btnInv = gcnew System::Windows::Forms::Button();
            
            this->btnSum->Click += gcnew System::EventHandler(this, &Calculator::btnSum_Click);
            this->btnDiff->Click += gcnew System::EventHandler(this, &Calculator::btnDiff_Click);
            this->btnProduct->Click += gcnew System::EventHandler(this, &Calculator::btnProduct_Click);
            this->btnDivide->Click += gcnew System::EventHandler(this, &Calculator::btnDivide_Click);
            this->btnEqual->Click += gcnew System::EventHandler(this, &Calculator::btnEqual_Click);
            this->btnC->Click += gcnew System::EventHandler(this, &Calculator::btnC_Click);
            this->btnCE->Click += gcnew System::EventHandler(this, &Calculator::btnCE_Click);
            this->btnX->Click += gcnew System::EventHandler(this, &Calculator::btnX_Click);
        }
#pragma endregion

    private: System::Void btnEqual_Click(System::Object^ sender, System::EventArgs^ e) {
        if (operation != "") {
            num2 = System::Double::Parse(tbInput->Text);
            num1 = Calculate(num1, num2, operation);
            tbInput->Text = num1.ToString();
            operation = "";
            isNewEntry = true;
        }
    }

    private: System::Double Calculate(System::Double num1, System::Double num2, System::String^ op) {
        if (op == "+") return num1 + num2;
        else if (op == "-") return num1 - num2;
        else if (op == "*") return num1 * num2;
        else if (op == "/" && num2 != 0) return num1 / num2;
        return num2;
    }

    private: System::Void btnDecimal_Click(System::Object^ sender, System::EventArgs^ e) {
        if (!tbInput->Text->Contains(".")) {
            tbInput->Text += ".";
        }
    }

    private: System::Void btnInverse_Click(System::Object^ sender, System::EventArgs^ e) {
        if (tbInput->Text->Length > 0) {
            double value = System::Double::Parse(tbInput->Text);
            value = -value;
            tbInput->Text = value.ToString();
        }
    }

    private: System::Void btnC_Click(System::Object^ sender, System::EventArgs^ e) {
        tbInput->Text = "0";
        label1->Text = "";
        num1 = 0;
        num2 = 0;
        operation = "";
        isNewEntry = true;
    }

    private: System::Void btnCE_Click(System::Object^ sender, System::EventArgs^ e) {
        tbInput->Text = "0";
        isNewEntry = true;
    }

    private: System::Void btnX_Click(System::Object^ sender, System::EventArgs^ e) {
        if (tbInput->Text->Length > 1) {
            tbInput->Text = tbInput->Text->Substring(0, tbInput->Text->Length - 1);
        }
        else {
            tbInput->Text = "0";
        }
    }
    };
}
