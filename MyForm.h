#include "University.h"
#include <msclr/marshal_cppstd.h>

namespace $safeprojectname$ {

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
     
        std::vector<Human>* humans;
        std::vector<Student>* students;
        std::vector<Voucher>* vouchers;
        std::vector<TradeUnion>* tradeUnions;
        std::vector<University>* universities;

        MyForm(void)
        {
            InitializeComponent();

            humans = new std::vector<Human>;
            students = new std::vector<Student>;
            vouchers = new std::vector<Voucher>;
            tradeUnions = new std::vector<TradeUnion>;
            universities = new std::vector<University>;
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

    private: System::Windows::Forms::NumericUpDown^ numericUpDown2;
    private: System::Windows::Forms::NumericUpDown^ numericUpDown3;
    private: System::Windows::Forms::NumericUpDown^ numericUpDown4;
    private: System::Windows::Forms::NumericUpDown^ numericUpDown7;
    private: System::Windows::Forms::NumericUpDown^ numericUpDown8;
    private: System::Windows::Forms::Button^ button6;
    private: System::Windows::Forms::RichTextBox^ richTextBox1;
    private: System::Windows::Forms::NumericUpDown^ numericUpDown5;
    private: System::Windows::Forms::NumericUpDown^ numericUpDown6;
    private: System::Windows::Forms::NumericUpDown^ numericUpDown9;

	private: System::Windows::Forms::TabControl^ tabControl1;
	protected:
	private: System::Windows::Forms::TabPage^ tabPage1;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::TabPage^ tabPage2;
	private: System::Windows::Forms::TextBox^ textBox6;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::TextBox^ textBox5;
	private: System::Windows::Forms::Label^ label5;

	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::TextBox^ textBox7;
	private: System::Windows::Forms::Label^ label7;
    private: System::Windows::Forms::Button^ button2;



	private: System::Windows::Forms::Label^ label21;
	private: System::Windows::Forms::TextBox^ textBox20;
	private: System::Windows::Forms::Label^ label20;
	private: System::Windows::Forms::TextBox^ textBox19;
	private: System::Windows::Forms::Label^ label19;

	private: System::Windows::Forms::Label^ label18;
	private: System::Windows::Forms::TextBox^ textBox17;
	private: System::Windows::Forms::Label^ label17;
	private: System::Windows::Forms::TextBox^ textBox16;
	private: System::Windows::Forms::Label^ label16;
	private: System::Windows::Forms::TextBox^ textBox15;
	private: System::Windows::Forms::Label^ label15;
	private: System::Windows::Forms::TextBox^ textBox8;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::TextBox^ textBox9;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::TextBox^ textBox10;
	private: System::Windows::Forms::Label^ label10;

	private: System::Windows::Forms::Label^ label11;
	private: System::Windows::Forms::TextBox^ textBox12;
	private: System::Windows::Forms::Label^ label12;
	private: System::Windows::Forms::TextBox^ textBox13;
	private: System::Windows::Forms::Label^ label13;
	private: System::Windows::Forms::TextBox^ textBox14;
	private: System::Windows::Forms::Label^ label14;
	private: System::Windows::Forms::TabPage^ tabPage3;

	private: System::Windows::Forms::TabPage^ tabPage5;
	private: System::Windows::Forms::TabPage^ tabPage6;


	private: System::Windows::Forms::CheckBox^ checkBox1;
	private: System::Windows::Forms::Label^ label23;
	private: System::Windows::Forms::TextBox^ textBox28;
	private: System::Windows::Forms::Label^ label29;
	private: System::Windows::Forms::TextBox^ textBox27;
	private: System::Windows::Forms::Label^ label28;

	private: System::Windows::Forms::Label^ label27;

	private: System::Windows::Forms::Label^ label24;
	private: System::Windows::Forms::TextBox^ textBox24;
	private: System::Windows::Forms::Label^ label25;
	private: System::Windows::Forms::TextBox^ textBox25;
	private: System::Windows::Forms::Label^ label26;
private: System::Windows::Forms::Button^ button3;







	private: System::Windows::Forms::Label^ label32;
	private: System::Windows::Forms::TextBox^ textBox32;
	private: System::Windows::Forms::Label^ label33;
	private: System::Windows::Forms::TextBox^ textBox33;
	private: System::Windows::Forms::Label^ label34;
	private: System::Windows::Forms::TextBox^ textBox34;
	private: System::Windows::Forms::Label^ label35;
private: System::Windows::Forms::Button^ button4;
private: System::Windows::Forms::CheckBox^ checkBox2;



private: System::Windows::Forms::Label^ label42;
private: System::Windows::Forms::Button^ button5;
private: System::Windows::Forms::CheckBox^ checkBox3;





private: System::Windows::Forms::Label^ label38;


private: System::Windows::Forms::TextBox^ textBox39;
private: System::Windows::Forms::Label^ label40;
private: System::Windows::Forms::TextBox^ textBox40;
private: System::Windows::Forms::Label^ label41;
private: System::Windows::Forms::TabPage^ tabPage4;

private: System::Windows::Forms::NumericUpDown^ numericUpDown1;





	protected:

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
            this->tabControl1 = (gcnew System::Windows::Forms::TabControl());
            this->tabPage1 = (gcnew System::Windows::Forms::TabPage());
            this->numericUpDown1 = (gcnew System::Windows::Forms::NumericUpDown());
            this->textBox7 = (gcnew System::Windows::Forms::TextBox());
            this->label7 = (gcnew System::Windows::Forms::Label());
            this->textBox6 = (gcnew System::Windows::Forms::TextBox());
            this->label6 = (gcnew System::Windows::Forms::Label());
            this->textBox5 = (gcnew System::Windows::Forms::TextBox());
            this->label5 = (gcnew System::Windows::Forms::Label());
            this->label4 = (gcnew System::Windows::Forms::Label());
            this->textBox3 = (gcnew System::Windows::Forms::TextBox());
            this->label3 = (gcnew System::Windows::Forms::Label());
            this->textBox2 = (gcnew System::Windows::Forms::TextBox());
            this->label2 = (gcnew System::Windows::Forms::Label());
            this->textBox1 = (gcnew System::Windows::Forms::TextBox());
            this->label1 = (gcnew System::Windows::Forms::Label());
            this->button1 = (gcnew System::Windows::Forms::Button());
            this->tabPage2 = (gcnew System::Windows::Forms::TabPage());
            this->numericUpDown4 = (gcnew System::Windows::Forms::NumericUpDown());
            this->numericUpDown3 = (gcnew System::Windows::Forms::NumericUpDown());
            this->numericUpDown2 = (gcnew System::Windows::Forms::NumericUpDown());
            this->checkBox1 = (gcnew System::Windows::Forms::CheckBox());
            this->label23 = (gcnew System::Windows::Forms::Label());
            this->button2 = (gcnew System::Windows::Forms::Button());
            this->label21 = (gcnew System::Windows::Forms::Label());
            this->textBox20 = (gcnew System::Windows::Forms::TextBox());
            this->label20 = (gcnew System::Windows::Forms::Label());
            this->textBox19 = (gcnew System::Windows::Forms::TextBox());
            this->label19 = (gcnew System::Windows::Forms::Label());
            this->label18 = (gcnew System::Windows::Forms::Label());
            this->textBox17 = (gcnew System::Windows::Forms::TextBox());
            this->label17 = (gcnew System::Windows::Forms::Label());
            this->textBox16 = (gcnew System::Windows::Forms::TextBox());
            this->label16 = (gcnew System::Windows::Forms::Label());
            this->textBox15 = (gcnew System::Windows::Forms::TextBox());
            this->label15 = (gcnew System::Windows::Forms::Label());
            this->textBox8 = (gcnew System::Windows::Forms::TextBox());
            this->label8 = (gcnew System::Windows::Forms::Label());
            this->textBox9 = (gcnew System::Windows::Forms::TextBox());
            this->label9 = (gcnew System::Windows::Forms::Label());
            this->textBox10 = (gcnew System::Windows::Forms::TextBox());
            this->label10 = (gcnew System::Windows::Forms::Label());
            this->label11 = (gcnew System::Windows::Forms::Label());
            this->textBox12 = (gcnew System::Windows::Forms::TextBox());
            this->label12 = (gcnew System::Windows::Forms::Label());
            this->textBox13 = (gcnew System::Windows::Forms::TextBox());
            this->label13 = (gcnew System::Windows::Forms::Label());
            this->textBox14 = (gcnew System::Windows::Forms::TextBox());
            this->label14 = (gcnew System::Windows::Forms::Label());
            this->tabPage3 = (gcnew System::Windows::Forms::TabPage());
            this->numericUpDown6 = (gcnew System::Windows::Forms::NumericUpDown());
            this->numericUpDown5 = (gcnew System::Windows::Forms::NumericUpDown());
            this->button3 = (gcnew System::Windows::Forms::Button());
            this->textBox28 = (gcnew System::Windows::Forms::TextBox());
            this->label29 = (gcnew System::Windows::Forms::Label());
            this->textBox27 = (gcnew System::Windows::Forms::TextBox());
            this->label28 = (gcnew System::Windows::Forms::Label());
            this->label27 = (gcnew System::Windows::Forms::Label());
            this->label24 = (gcnew System::Windows::Forms::Label());
            this->textBox24 = (gcnew System::Windows::Forms::TextBox());
            this->label25 = (gcnew System::Windows::Forms::Label());
            this->textBox25 = (gcnew System::Windows::Forms::TextBox());
            this->label26 = (gcnew System::Windows::Forms::Label());
            this->tabPage5 = (gcnew System::Windows::Forms::TabPage());
            this->numericUpDown7 = (gcnew System::Windows::Forms::NumericUpDown());
            this->button4 = (gcnew System::Windows::Forms::Button());
            this->checkBox2 = (gcnew System::Windows::Forms::CheckBox());
            this->label32 = (gcnew System::Windows::Forms::Label());
            this->textBox32 = (gcnew System::Windows::Forms::TextBox());
            this->label33 = (gcnew System::Windows::Forms::Label());
            this->textBox33 = (gcnew System::Windows::Forms::TextBox());
            this->label34 = (gcnew System::Windows::Forms::Label());
            this->textBox34 = (gcnew System::Windows::Forms::TextBox());
            this->label35 = (gcnew System::Windows::Forms::Label());
            this->tabPage6 = (gcnew System::Windows::Forms::TabPage());
            this->numericUpDown9 = (gcnew System::Windows::Forms::NumericUpDown());
            this->numericUpDown8 = (gcnew System::Windows::Forms::NumericUpDown());
            this->label42 = (gcnew System::Windows::Forms::Label());
            this->button5 = (gcnew System::Windows::Forms::Button());
            this->checkBox3 = (gcnew System::Windows::Forms::CheckBox());
            this->label38 = (gcnew System::Windows::Forms::Label());
            this->textBox39 = (gcnew System::Windows::Forms::TextBox());
            this->label40 = (gcnew System::Windows::Forms::Label());
            this->textBox40 = (gcnew System::Windows::Forms::TextBox());
            this->label41 = (gcnew System::Windows::Forms::Label());
            this->tabPage4 = (gcnew System::Windows::Forms::TabPage());
            this->button6 = (gcnew System::Windows::Forms::Button());
            this->richTextBox1 = (gcnew System::Windows::Forms::RichTextBox());
            this->tabControl1->SuspendLayout();
            this->tabPage1->SuspendLayout();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown1))->BeginInit();
            this->tabPage2->SuspendLayout();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown4))->BeginInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown3))->BeginInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown2))->BeginInit();
            this->tabPage3->SuspendLayout();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown6))->BeginInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown5))->BeginInit();
            this->tabPage5->SuspendLayout();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown7))->BeginInit();
            this->tabPage6->SuspendLayout();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown9))->BeginInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown8))->BeginInit();
            this->tabPage4->SuspendLayout();
            this->SuspendLayout();
            // 
            // tabControl1
            // 
            this->tabControl1->Controls->Add(this->tabPage1);
            this->tabControl1->Controls->Add(this->tabPage2);
            this->tabControl1->Controls->Add(this->tabPage3);
            this->tabControl1->Controls->Add(this->tabPage5);
            this->tabControl1->Controls->Add(this->tabPage6);
            this->tabControl1->Controls->Add(this->tabPage4);
            this->tabControl1->Location = System::Drawing::Point(0, 0);
            this->tabControl1->Name = L"tabControl1";
            this->tabControl1->SelectedIndex = 0;
            this->tabControl1->Size = System::Drawing::Size(1055, 568);
            this->tabControl1->TabIndex = 0;
            // 
            // tabPage1
            // 
            this->tabPage1->Controls->Add(this->numericUpDown1);
            this->tabPage1->Controls->Add(this->textBox7);
            this->tabPage1->Controls->Add(this->label7);
            this->tabPage1->Controls->Add(this->textBox6);
            this->tabPage1->Controls->Add(this->label6);
            this->tabPage1->Controls->Add(this->textBox5);
            this->tabPage1->Controls->Add(this->label5);
            this->tabPage1->Controls->Add(this->label4);
            this->tabPage1->Controls->Add(this->textBox3);
            this->tabPage1->Controls->Add(this->label3);
            this->tabPage1->Controls->Add(this->textBox2);
            this->tabPage1->Controls->Add(this->label2);
            this->tabPage1->Controls->Add(this->textBox1);
            this->tabPage1->Controls->Add(this->label1);
            this->tabPage1->Controls->Add(this->button1);
            this->tabPage1->Location = System::Drawing::Point(4, 29);
            this->tabPage1->Name = L"tabPage1";
            this->tabPage1->Padding = System::Windows::Forms::Padding(3);
            this->tabPage1->Size = System::Drawing::Size(1047, 535);
            this->tabPage1->TabIndex = 0;
            this->tabPage1->Text = L"Human";
            this->tabPage1->UseVisualStyleBackColor = true;
            // 
            // numericUpDown1
            // 
            this->numericUpDown1->Location = System::Drawing::Point(127, 148);
            this->numericUpDown1->Name = L"numericUpDown1";
            this->numericUpDown1->Size = System::Drawing::Size(167, 26);
            this->numericUpDown1->TabIndex = 15;
            // 
            // textBox7
            // 
            this->textBox7->Location = System::Drawing::Point(127, 286);
            this->textBox7->Name = L"textBox7";
            this->textBox7->Size = System::Drawing::Size(167, 26);
            this->textBox7->TabIndex = 14;
            // 
            // label7
            // 
            this->label7->AutoSize = true;
            this->label7->Location = System::Drawing::Point(8, 292);
            this->label7->Name = L"label7";
            this->label7->Size = System::Drawing::Size(68, 20);
            this->label7->TabIndex = 13;
            this->label7->Text = L"Address";
            // 
            // textBox6
            // 
            this->textBox6->Location = System::Drawing::Point(127, 243);
            this->textBox6->Name = L"textBox6";
            this->textBox6->Size = System::Drawing::Size(167, 26);
            this->textBox6->TabIndex = 12;
            // 
            // label6
            // 
            this->label6->AutoSize = true;
            this->label6->Location = System::Drawing::Point(8, 249);
            this->label6->Name = L"label6";
            this->label6->Size = System::Drawing::Size(113, 20);
            this->label6->TabIndex = 11;
            this->label6->Text = L"Phone number";
            // 
            // textBox5
            // 
            this->textBox5->Location = System::Drawing::Point(127, 194);
            this->textBox5->Name = L"textBox5";
            this->textBox5->Size = System::Drawing::Size(167, 26);
            this->textBox5->TabIndex = 10;
            // 
            // label5
            // 
            this->label5->AutoSize = true;
            this->label5->Location = System::Drawing::Point(8, 197);
            this->label5->Name = L"label5";
            this->label5->Size = System::Drawing::Size(48, 20);
            this->label5->TabIndex = 9;
            this->label5->Text = L"Email";
            // 
            // label4
            // 
            this->label4->AutoSize = true;
            this->label4->Location = System::Drawing::Point(8, 150);
            this->label4->Name = L"label4";
            this->label4->Size = System::Drawing::Size(38, 20);
            this->label4->TabIndex = 7;
            this->label4->Text = L"Age";
            // 
            // textBox3
            // 
            this->textBox3->Location = System::Drawing::Point(127, 101);
            this->textBox3->Name = L"textBox3";
            this->textBox3->Size = System::Drawing::Size(167, 26);
            this->textBox3->TabIndex = 6;
            // 
            // label3
            // 
            this->label3->AutoSize = true;
            this->label3->Location = System::Drawing::Point(8, 107);
            this->label3->Name = L"label3";
            this->label3->Size = System::Drawing::Size(80, 20);
            this->label3->TabIndex = 5;
            this->label3->Text = L"Lastname";
            // 
            // textBox2
            // 
            this->textBox2->Location = System::Drawing::Point(127, 55);
            this->textBox2->Name = L"textBox2";
            this->textBox2->Size = System::Drawing::Size(167, 26);
            this->textBox2->TabIndex = 4;
            // 
            // label2
            // 
            this->label2->AutoSize = true;
            this->label2->Location = System::Drawing::Point(8, 61);
            this->label2->Name = L"label2";
            this->label2->Size = System::Drawing::Size(74, 20);
            this->label2->TabIndex = 3;
            this->label2->Text = L"Surname";
            this->label2->Click += gcnew System::EventHandler(this, &MyForm::label2_Click);
            // 
            // textBox1
            // 
            this->textBox1->Location = System::Drawing::Point(127, 12);
            this->textBox1->Name = L"textBox1";
            this->textBox1->Size = System::Drawing::Size(167, 26);
            this->textBox1->TabIndex = 2;
            // 
            // label1
            // 
            this->label1->AutoSize = true;
            this->label1->Location = System::Drawing::Point(8, 15);
            this->label1->Name = L"label1";
            this->label1->Size = System::Drawing::Size(51, 20);
            this->label1->TabIndex = 1;
            this->label1->Text = L"Name";
            this->label1->Click += gcnew System::EventHandler(this, &MyForm::label1_Click);
            // 
            // button1
            // 
            this->button1->Location = System::Drawing::Point(342, 376);
            this->button1->Name = L"button1";
            this->button1->Size = System::Drawing::Size(172, 37);
            this->button1->TabIndex = 0;
            this->button1->Text = L"Add";
            this->button1->UseVisualStyleBackColor = true;
            this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click_1);
            // 
            // tabPage2
            // 
            this->tabPage2->Controls->Add(this->numericUpDown4);
            this->tabPage2->Controls->Add(this->numericUpDown3);
            this->tabPage2->Controls->Add(this->numericUpDown2);
            this->tabPage2->Controls->Add(this->checkBox1);
            this->tabPage2->Controls->Add(this->label23);
            this->tabPage2->Controls->Add(this->button2);
            this->tabPage2->Controls->Add(this->label21);
            this->tabPage2->Controls->Add(this->textBox20);
            this->tabPage2->Controls->Add(this->label20);
            this->tabPage2->Controls->Add(this->textBox19);
            this->tabPage2->Controls->Add(this->label19);
            this->tabPage2->Controls->Add(this->label18);
            this->tabPage2->Controls->Add(this->textBox17);
            this->tabPage2->Controls->Add(this->label17);
            this->tabPage2->Controls->Add(this->textBox16);
            this->tabPage2->Controls->Add(this->label16);
            this->tabPage2->Controls->Add(this->textBox15);
            this->tabPage2->Controls->Add(this->label15);
            this->tabPage2->Controls->Add(this->textBox8);
            this->tabPage2->Controls->Add(this->label8);
            this->tabPage2->Controls->Add(this->textBox9);
            this->tabPage2->Controls->Add(this->label9);
            this->tabPage2->Controls->Add(this->textBox10);
            this->tabPage2->Controls->Add(this->label10);
            this->tabPage2->Controls->Add(this->label11);
            this->tabPage2->Controls->Add(this->textBox12);
            this->tabPage2->Controls->Add(this->label12);
            this->tabPage2->Controls->Add(this->textBox13);
            this->tabPage2->Controls->Add(this->label13);
            this->tabPage2->Controls->Add(this->textBox14);
            this->tabPage2->Controls->Add(this->label14);
            this->tabPage2->Location = System::Drawing::Point(4, 29);
            this->tabPage2->Name = L"tabPage2";
            this->tabPage2->Padding = System::Windows::Forms::Padding(3);
            this->tabPage2->Size = System::Drawing::Size(1047, 535);
            this->tabPage2->TabIndex = 1;
            this->tabPage2->Text = L"Student";
            this->tabPage2->UseVisualStyleBackColor = true;
            // 
            // numericUpDown4
            // 
            this->numericUpDown4->Location = System::Drawing::Point(516, 282);
            this->numericUpDown4->Name = L"numericUpDown4";
            this->numericUpDown4->Size = System::Drawing::Size(167, 26);
            this->numericUpDown4->TabIndex = 50;
            // 
            // numericUpDown3
            // 
            this->numericUpDown3->Location = System::Drawing::Point(516, 144);
            this->numericUpDown3->Name = L"numericUpDown3";
            this->numericUpDown3->Size = System::Drawing::Size(167, 26);
            this->numericUpDown3->TabIndex = 49;
            // 
            // numericUpDown2
            // 
            this->numericUpDown2->Location = System::Drawing::Point(140, 143);
            this->numericUpDown2->Name = L"numericUpDown2";
            this->numericUpDown2->Size = System::Drawing::Size(167, 26);
            this->numericUpDown2->TabIndex = 48;
            // 
            // checkBox1
            // 
            this->checkBox1->AutoSize = true;
            this->checkBox1->Location = System::Drawing::Point(516, 341);
            this->checkBox1->Name = L"checkBox1";
            this->checkBox1->Size = System::Drawing::Size(129, 24);
            this->checkBox1->TabIndex = 47;
            this->checkBox1->Text = L"Is Graduated";
            this->checkBox1->UseVisualStyleBackColor = true;
            // 
            // label23
            // 
            this->label23->AutoSize = true;
            this->label23->Location = System::Drawing::Point(18, 345);
            this->label23->Name = L"label23";
            this->label23->Size = System::Drawing::Size(0, 20);
            this->label23->TabIndex = 46;
            this->label23->Click += gcnew System::EventHandler(this, &MyForm::label23_Click);
            // 
            // button2
            // 
            this->button2->Location = System::Drawing::Point(277, 409);
            this->button2->Name = L"button2";
            this->button2->Size = System::Drawing::Size(172, 37);
            this->button2->TabIndex = 43;
            this->button2->Text = L"Add";
            this->button2->UseVisualStyleBackColor = true;
            this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
            // 
            // label21
            // 
            this->label21->AutoSize = true;
            this->label21->Location = System::Drawing::Point(339, 288);
            this->label21->Name = L"label21";
            this->label21->Size = System::Drawing::Size(171, 20);
            this->label21->TabIndex = 41;
            this->label21->Text = L"Number of record book";
            // 
            // textBox20
            // 
            this->textBox20->Location = System::Drawing::Point(516, 239);
            this->textBox20->Name = L"textBox20";
            this->textBox20->Size = System::Drawing::Size(167, 26);
            this->textBox20->TabIndex = 40;
            // 
            // label20
            // 
            this->label20->AutoSize = true;
            this->label20->Location = System::Drawing::Point(339, 245);
            this->label20->Name = L"label20";
            this->label20->Size = System::Drawing::Size(61, 20);
            this->label20->TabIndex = 39;
            this->label20->Text = L"Atestat";
            // 
            // textBox19
            // 
            this->textBox19->Location = System::Drawing::Point(516, 187);
            this->textBox19->Name = L"textBox19";
            this->textBox19->Size = System::Drawing::Size(167, 26);
            this->textBox19->TabIndex = 38;
            // 
            // label19
            // 
            this->label19->AutoSize = true;
            this->label19->Location = System::Drawing::Point(339, 193);
            this->label19->Name = L"label19";
            this->label19->Size = System::Drawing::Size(83, 20);
            this->label19->TabIndex = 37;
            this->label19->Text = L"Document";
            // 
            // label18
            // 
            this->label18->AutoSize = true;
            this->label18->Location = System::Drawing::Point(339, 146);
            this->label18->Name = L"label18";
            this->label18->Size = System::Drawing::Size(60, 20);
            this->label18->TabIndex = 35;
            this->label18->Text = L"Course";
            // 
            // textBox17
            // 
            this->textBox17->Location = System::Drawing::Point(516, 100);
            this->textBox17->Name = L"textBox17";
            this->textBox17->Size = System::Drawing::Size(167, 26);
            this->textBox17->TabIndex = 34;
            // 
            // label17
            // 
            this->label17->AutoSize = true;
            this->label17->Location = System::Drawing::Point(339, 103);
            this->label17->Name = L"label17";
            this->label17->Size = System::Drawing::Size(76, 20);
            this->label17->TabIndex = 33;
            this->label17->Text = L"Speciality";
            // 
            // textBox16
            // 
            this->textBox16->Location = System::Drawing::Point(516, 54);
            this->textBox16->Name = L"textBox16";
            this->textBox16->Size = System::Drawing::Size(167, 26);
            this->textBox16->TabIndex = 32;
            // 
            // label16
            // 
            this->label16->AutoSize = true;
            this->label16->Location = System::Drawing::Point(339, 57);
            this->label16->Name = L"label16";
            this->label16->Size = System::Drawing::Size(54, 20);
            this->label16->TabIndex = 31;
            this->label16->Text = L"Group";
            // 
            // textBox15
            // 
            this->textBox15->Location = System::Drawing::Point(516, 14);
            this->textBox15->Name = L"textBox15";
            this->textBox15->Size = System::Drawing::Size(167, 26);
            this->textBox15->TabIndex = 30;
            // 
            // label15
            // 
            this->label15->AutoSize = true;
            this->label15->Location = System::Drawing::Point(339, 17);
            this->label15->Name = L"label15";
            this->label15->Size = System::Drawing::Size(137, 20);
            this->label15->TabIndex = 29;
            this->label15->Text = L"Date of admission";
            // 
            // textBox8
            // 
            this->textBox8->Location = System::Drawing::Point(140, 285);
            this->textBox8->Name = L"textBox8";
            this->textBox8->Size = System::Drawing::Size(167, 26);
            this->textBox8->TabIndex = 28;
            // 
            // label8
            // 
            this->label8->AutoSize = true;
            this->label8->Location = System::Drawing::Point(21, 291);
            this->label8->Name = L"label8";
            this->label8->Size = System::Drawing::Size(68, 20);
            this->label8->TabIndex = 27;
            this->label8->Text = L"Address";
            // 
            // textBox9
            // 
            this->textBox9->Location = System::Drawing::Point(140, 242);
            this->textBox9->Name = L"textBox9";
            this->textBox9->Size = System::Drawing::Size(167, 26);
            this->textBox9->TabIndex = 26;
            // 
            // label9
            // 
            this->label9->AutoSize = true;
            this->label9->Location = System::Drawing::Point(21, 248);
            this->label9->Name = L"label9";
            this->label9->Size = System::Drawing::Size(113, 20);
            this->label9->TabIndex = 25;
            this->label9->Text = L"Phone number";
            // 
            // textBox10
            // 
            this->textBox10->Location = System::Drawing::Point(140, 193);
            this->textBox10->Name = L"textBox10";
            this->textBox10->Size = System::Drawing::Size(167, 26);
            this->textBox10->TabIndex = 24;
            // 
            // label10
            // 
            this->label10->AutoSize = true;
            this->label10->Location = System::Drawing::Point(21, 196);
            this->label10->Name = L"label10";
            this->label10->Size = System::Drawing::Size(48, 20);
            this->label10->TabIndex = 23;
            this->label10->Text = L"Email";
            // 
            // label11
            // 
            this->label11->AutoSize = true;
            this->label11->Location = System::Drawing::Point(21, 149);
            this->label11->Name = L"label11";
            this->label11->Size = System::Drawing::Size(38, 20);
            this->label11->TabIndex = 21;
            this->label11->Text = L"Age";
            // 
            // textBox12
            // 
            this->textBox12->Location = System::Drawing::Point(140, 100);
            this->textBox12->Name = L"textBox12";
            this->textBox12->Size = System::Drawing::Size(167, 26);
            this->textBox12->TabIndex = 20;
            // 
            // label12
            // 
            this->label12->AutoSize = true;
            this->label12->Location = System::Drawing::Point(21, 106);
            this->label12->Name = L"label12";
            this->label12->Size = System::Drawing::Size(80, 20);
            this->label12->TabIndex = 19;
            this->label12->Text = L"Lastname";
            // 
            // textBox13
            // 
            this->textBox13->Location = System::Drawing::Point(140, 54);
            this->textBox13->Name = L"textBox13";
            this->textBox13->Size = System::Drawing::Size(167, 26);
            this->textBox13->TabIndex = 18;
            // 
            // label13
            // 
            this->label13->AutoSize = true;
            this->label13->Location = System::Drawing::Point(21, 60);
            this->label13->Name = L"label13";
            this->label13->Size = System::Drawing::Size(74, 20);
            this->label13->TabIndex = 17;
            this->label13->Text = L"Surname";
            // 
            // textBox14
            // 
            this->textBox14->Location = System::Drawing::Point(140, 11);
            this->textBox14->Name = L"textBox14";
            this->textBox14->Size = System::Drawing::Size(167, 26);
            this->textBox14->TabIndex = 16;
            // 
            // label14
            // 
            this->label14->AutoSize = true;
            this->label14->Location = System::Drawing::Point(21, 14);
            this->label14->Name = L"label14";
            this->label14->Size = System::Drawing::Size(51, 20);
            this->label14->TabIndex = 15;
            this->label14->Text = L"Name";
            // 
            // tabPage3
            // 
            this->tabPage3->Controls->Add(this->numericUpDown6);
            this->tabPage3->Controls->Add(this->numericUpDown5);
            this->tabPage3->Controls->Add(this->button3);
            this->tabPage3->Controls->Add(this->textBox28);
            this->tabPage3->Controls->Add(this->label29);
            this->tabPage3->Controls->Add(this->textBox27);
            this->tabPage3->Controls->Add(this->label28);
            this->tabPage3->Controls->Add(this->label27);
            this->tabPage3->Controls->Add(this->label24);
            this->tabPage3->Controls->Add(this->textBox24);
            this->tabPage3->Controls->Add(this->label25);
            this->tabPage3->Controls->Add(this->textBox25);
            this->tabPage3->Controls->Add(this->label26);
            this->tabPage3->Location = System::Drawing::Point(4, 29);
            this->tabPage3->Name = L"tabPage3";
            this->tabPage3->Size = System::Drawing::Size(1047, 535);
            this->tabPage3->TabIndex = 2;
            this->tabPage3->Text = L"Voucher";
            this->tabPage3->UseVisualStyleBackColor = true;
            // 
            // numericUpDown6
            // 
            this->numericUpDown6->Location = System::Drawing::Point(463, 11);
            this->numericUpDown6->Name = L"numericUpDown6";
            this->numericUpDown6->Size = System::Drawing::Size(167, 26);
            this->numericUpDown6->TabIndex = 46;
            // 
            // numericUpDown5
            // 
            this->numericUpDown5->Location = System::Drawing::Point(141, 107);
            this->numericUpDown5->Name = L"numericUpDown5";
            this->numericUpDown5->Size = System::Drawing::Size(167, 26);
            this->numericUpDown5->TabIndex = 45;
            // 
            // button3
            // 
            this->button3->Location = System::Drawing::Point(267, 161);
            this->button3->Name = L"button3";
            this->button3->Size = System::Drawing::Size(172, 37);
            this->button3->TabIndex = 44;
            this->button3->Text = L"Add";
            this->button3->UseVisualStyleBackColor = true;
            this->button3->Click += gcnew System::EventHandler(this, &MyForm::button3_Click);
            // 
            // textBox28
            // 
            this->textBox28->Location = System::Drawing::Point(463, 106);
            this->textBox28->Name = L"textBox28";
            this->textBox28->Size = System::Drawing::Size(167, 26);
            this->textBox28->TabIndex = 32;
            // 
            // label29
            // 
            this->label29->AutoSize = true;
            this->label29->Location = System::Drawing::Point(344, 112);
            this->label29->Name = L"label29";
            this->label29->Size = System::Drawing::Size(35, 20);
            this->label29->TabIndex = 31;
            this->label29->Text = L"City";
            // 
            // textBox27
            // 
            this->textBox27->Location = System::Drawing::Point(463, 60);
            this->textBox27->Name = L"textBox27";
            this->textBox27->Size = System::Drawing::Size(167, 26);
            this->textBox27->TabIndex = 30;
            // 
            // label28
            // 
            this->label28->AutoSize = true;
            this->label28->Location = System::Drawing::Point(344, 66);
            this->label28->Name = L"label28";
            this->label28->Size = System::Drawing::Size(77, 20);
            this->label28->TabIndex = 29;
            this->label28->Text = L"Transport";
            // 
            // label27
            // 
            this->label27->AutoSize = true;
            this->label27->Location = System::Drawing::Point(344, 17);
            this->label27->Name = L"label27";
            this->label27->Size = System::Drawing::Size(47, 20);
            this->label27->TabIndex = 27;
            this->label27->Text = L"Code";
            // 
            // label24
            // 
            this->label24->AutoSize = true;
            this->label24->Location = System::Drawing::Point(22, 112);
            this->label24->Name = L"label24";
            this->label24->Size = System::Drawing::Size(42, 20);
            this->label24->TabIndex = 25;
            this->label24->Text = L"Cost";
            // 
            // textBox24
            // 
            this->textBox24->Location = System::Drawing::Point(141, 60);
            this->textBox24->Name = L"textBox24";
            this->textBox24->Size = System::Drawing::Size(167, 26);
            this->textBox24->TabIndex = 24;
            // 
            // label25
            // 
            this->label25->AutoSize = true;
            this->label25->Location = System::Drawing::Point(22, 66);
            this->label25->Name = L"label25";
            this->label25->Size = System::Drawing::Size(44, 20);
            this->label25->TabIndex = 23;
            this->label25->Text = L"Date";
            // 
            // textBox25
            // 
            this->textBox25->Location = System::Drawing::Point(141, 17);
            this->textBox25->Name = L"textBox25";
            this->textBox25->Size = System::Drawing::Size(167, 26);
            this->textBox25->TabIndex = 22;
            // 
            // label26
            // 
            this->label26->AutoSize = true;
            this->label26->Location = System::Drawing::Point(22, 20);
            this->label26->Name = L"label26";
            this->label26->Size = System::Drawing::Size(64, 20);
            this->label26->TabIndex = 21;
            this->label26->Text = L"Country";
            this->label26->Click += gcnew System::EventHandler(this, &MyForm::label26_Click);
            // 
            // tabPage5
            // 
            this->tabPage5->Controls->Add(this->numericUpDown7);
            this->tabPage5->Controls->Add(this->button4);
            this->tabPage5->Controls->Add(this->checkBox2);
            this->tabPage5->Controls->Add(this->label32);
            this->tabPage5->Controls->Add(this->textBox32);
            this->tabPage5->Controls->Add(this->label33);
            this->tabPage5->Controls->Add(this->textBox33);
            this->tabPage5->Controls->Add(this->label34);
            this->tabPage5->Controls->Add(this->textBox34);
            this->tabPage5->Controls->Add(this->label35);
            this->tabPage5->Location = System::Drawing::Point(4, 29);
            this->tabPage5->Name = L"tabPage5";
            this->tabPage5->Size = System::Drawing::Size(1047, 535);
            this->tabPage5->TabIndex = 4;
            this->tabPage5->Text = L"TradeUnion";
            this->tabPage5->UseVisualStyleBackColor = true;
            // 
            // numericUpDown7
            // 
            this->numericUpDown7->Location = System::Drawing::Point(468, 18);
            this->numericUpDown7->Name = L"numericUpDown7";
            this->numericUpDown7->Size = System::Drawing::Size(167, 26);
            this->numericUpDown7->TabIndex = 47;
            // 
            // button4
            // 
            this->button4->Location = System::Drawing::Point(260, 173);
            this->button4->Name = L"button4";
            this->button4->Size = System::Drawing::Size(172, 37);
            this->button4->TabIndex = 46;
            this->button4->Text = L"Add";
            this->button4->UseVisualStyleBackColor = true;
            this->button4->Click += gcnew System::EventHandler(this, &MyForm::button4_Click);
            // 
            // checkBox2
            // 
            this->checkBox2->AutoSize = true;
            this->checkBox2->Location = System::Drawing::Point(515, 119);
            this->checkBox2->Name = L"checkBox2";
            this->checkBox2->Size = System::Drawing::Size(120, 24);
            this->checkBox2->TabIndex = 45;
            this->checkBox2->Text = L"Is Approved";
            this->checkBox2->UseVisualStyleBackColor = true;
            // 
            // label32
            // 
            this->label32->AutoSize = true;
            this->label32->Location = System::Drawing::Point(349, 21);
            this->label32->Name = L"label32";
            this->label32->Size = System::Drawing::Size(52, 20);
            this->label32->TabIndex = 39;
            this->label32->Text = L"Count";
            // 
            // textBox32
            // 
            this->textBox32->Location = System::Drawing::Point(468, 64);
            this->textBox32->Name = L"textBox32";
            this->textBox32->Size = System::Drawing::Size(167, 26);
            this->textBox32->TabIndex = 38;
            // 
            // label33
            // 
            this->label33->AutoSize = true;
            this->label33->Location = System::Drawing::Point(349, 70);
            this->label33->Name = L"label33";
            this->label33->Size = System::Drawing::Size(83, 20);
            this->label33->TabIndex = 37;
            this->label33->Text = L"Document";
            // 
            // textBox33
            // 
            this->textBox33->Location = System::Drawing::Point(156, 64);
            this->textBox33->Name = L"textBox33";
            this->textBox33->Size = System::Drawing::Size(167, 26);
            this->textBox33->TabIndex = 36;
            // 
            // label34
            // 
            this->label34->AutoSize = true;
            this->label34->Location = System::Drawing::Point(27, 70);
            this->label34->Name = L"label34";
            this->label34->Size = System::Drawing::Size(123, 20);
            this->label34->TabIndex = 35;
            this->label34->Text = L"Date of creation";
            // 
            // textBox34
            // 
            this->textBox34->Location = System::Drawing::Point(156, 21);
            this->textBox34->Name = L"textBox34";
            this->textBox34->Size = System::Drawing::Size(167, 26);
            this->textBox34->TabIndex = 34;
            // 
            // label35
            // 
            this->label35->AutoSize = true;
            this->label35->Location = System::Drawing::Point(27, 24);
            this->label35->Name = L"label35";
            this->label35->Size = System::Drawing::Size(51, 20);
            this->label35->TabIndex = 33;
            this->label35->Text = L"Name";
            this->label35->Click += gcnew System::EventHandler(this, &MyForm::label35_Click);
            // 
            // tabPage6
            // 
            this->tabPage6->Controls->Add(this->numericUpDown9);
            this->tabPage6->Controls->Add(this->numericUpDown8);
            this->tabPage6->Controls->Add(this->label42);
            this->tabPage6->Controls->Add(this->button5);
            this->tabPage6->Controls->Add(this->checkBox3);
            this->tabPage6->Controls->Add(this->label38);
            this->tabPage6->Controls->Add(this->textBox39);
            this->tabPage6->Controls->Add(this->label40);
            this->tabPage6->Controls->Add(this->textBox40);
            this->tabPage6->Controls->Add(this->label41);
            this->tabPage6->Location = System::Drawing::Point(4, 29);
            this->tabPage6->Name = L"tabPage6";
            this->tabPage6->Size = System::Drawing::Size(1047, 535);
            this->tabPage6->TabIndex = 5;
            this->tabPage6->Text = L"University";
            this->tabPage6->UseVisualStyleBackColor = true;
            // 
            // numericUpDown9
            // 
            this->numericUpDown9->Location = System::Drawing::Point(455, 68);
            this->numericUpDown9->Name = L"numericUpDown9";
            this->numericUpDown9->Size = System::Drawing::Size(167, 26);
            this->numericUpDown9->TabIndex = 64;
            // 
            // numericUpDown8
            // 
            this->numericUpDown8->Location = System::Drawing::Point(455, 19);
            this->numericUpDown8->Name = L"numericUpDown8";
            this->numericUpDown8->Size = System::Drawing::Size(167, 26);
            this->numericUpDown8->TabIndex = 63;
            // 
            // label42
            // 
            this->label42->AutoSize = true;
            this->label42->Location = System::Drawing::Point(336, 74);
            this->label42->Name = L"label42";
            this->label42->Size = System::Drawing::Size(113, 20);
            this->label42->TabIndex = 61;
            this->label42->Text = L"Phone number";
            // 
            // button5
            // 
            this->button5->Location = System::Drawing::Point(245, 140);
            this->button5->Name = L"button5";
            this->button5->Size = System::Drawing::Size(172, 37);
            this->button5->TabIndex = 60;
            this->button5->Text = L"Add";
            this->button5->UseVisualStyleBackColor = true;
            this->button5->Click += gcnew System::EventHandler(this, &MyForm::button5_Click);
            // 
            // checkBox3
            // 
            this->checkBox3->AutoSize = true;
            this->checkBox3->Location = System::Drawing::Point(511, 115);
            this->checkBox3->Name = L"checkBox3";
            this->checkBox3->Size = System::Drawing::Size(111, 24);
            this->checkBox3->TabIndex = 59;
            this->checkBox3->Text = L"Is Certified";
            this->checkBox3->UseVisualStyleBackColor = true;
            // 
            // label38
            // 
            this->label38->AutoSize = true;
            this->label38->Location = System::Drawing::Point(336, 25);
            this->label38->Name = L"label38";
            this->label38->Size = System::Drawing::Size(52, 20);
            this->label38->TabIndex = 53;
            this->label38->Text = L"Count";
            // 
            // textBox39
            // 
            this->textBox39->Location = System::Drawing::Point(133, 68);
            this->textBox39->Name = L"textBox39";
            this->textBox39->Size = System::Drawing::Size(167, 26);
            this->textBox39->TabIndex = 50;
            // 
            // label40
            // 
            this->label40->AutoSize = true;
            this->label40->Location = System::Drawing::Point(14, 74);
            this->label40->Name = L"label40";
            this->label40->Size = System::Drawing::Size(123, 20);
            this->label40->TabIndex = 49;
            this->label40->Text = L"Date of creation";
            // 
            // textBox40
            // 
            this->textBox40->Location = System::Drawing::Point(133, 25);
            this->textBox40->Name = L"textBox40";
            this->textBox40->Size = System::Drawing::Size(167, 26);
            this->textBox40->TabIndex = 48;
            // 
            // label41
            // 
            this->label41->AutoSize = true;
            this->label41->Location = System::Drawing::Point(14, 28);
            this->label41->Name = L"label41";
            this->label41->Size = System::Drawing::Size(51, 20);
            this->label41->TabIndex = 47;
            this->label41->Text = L"Name";
            // 
            // tabPage4
            // 
            this->tabPage4->Controls->Add(this->button6);
            this->tabPage4->Controls->Add(this->richTextBox1);
            this->tabPage4->Location = System::Drawing::Point(4, 29);
            this->tabPage4->Name = L"tabPage4";
            this->tabPage4->Size = System::Drawing::Size(1047, 535);
            this->tabPage4->TabIndex = 6;
            this->tabPage4->Text = L"Output";
            this->tabPage4->UseVisualStyleBackColor = true;
            // 
            // button6
            // 
            this->button6->Location = System::Drawing::Point(462, 13);
            this->button6->Name = L"button6";
            this->button6->Size = System::Drawing::Size(85, 29);
            this->button6->TabIndex = 1;
            this->button6->Text = L"Output";
            this->button6->UseVisualStyleBackColor = true;
            this->button6->Click += gcnew System::EventHandler(this, &MyForm::button6_Click);
            // 
            // richTextBox1
            // 
            this->richTextBox1->Location = System::Drawing::Point(3, 53);
            this->richTextBox1->Name = L"richTextBox1";
            this->richTextBox1->Size = System::Drawing::Size(1032, 468);
            this->richTextBox1->TabIndex = 0;
            this->richTextBox1->Text = L"";
            // 
            // MyForm
            // 
            this->AutoScaleDimensions = System::Drawing::SizeF(9, 20);
            this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
            this->ClientSize = System::Drawing::Size(1056, 562);
            this->Controls->Add(this->tabControl1);
            this->Cursor = System::Windows::Forms::Cursors::No;
            this->Name = L"MyForm";
            this->Text = L"MyForm";
            this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
            this->tabControl1->ResumeLayout(false);
            this->tabPage1->ResumeLayout(false);
            this->tabPage1->PerformLayout();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown1))->EndInit();
            this->tabPage2->ResumeLayout(false);
            this->tabPage2->PerformLayout();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown4))->EndInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown3))->EndInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown2))->EndInit();
            this->tabPage3->ResumeLayout(false);
            this->tabPage3->PerformLayout();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown6))->EndInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown5))->EndInit();
            this->tabPage5->ResumeLayout(false);
            this->tabPage5->PerformLayout();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown7))->EndInit();
            this->tabPage6->ResumeLayout(false);
            this->tabPage6->PerformLayout();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown9))->EndInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown8))->EndInit();
            this->tabPage4->ResumeLayout(false);
            this->ResumeLayout(false);

        }
#pragma endregion
	private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void label2_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label22_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void textBox22_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label23_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label26_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label35_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button1_Click_1(System::Object^ sender, System::EventArgs^ e) {
    std::string name = msclr::interop::marshal_as<std::string>(this->textBox1->Text);
    std::string surname = msclr::interop::marshal_as<std::string>(this->textBox2->Text);
    std::string lastname = msclr::interop::marshal_as<std::string>(this->textBox3->Text);
    std::string phoneNumber = msclr::interop::marshal_as<std::string>(this->textBox5->Text);
    std::string email = msclr::interop::marshal_as<std::string>(this->textBox6->Text);
    std::string address = msclr::interop::marshal_as<std::string>(this->textBox7->Text);

    int age = Decimal::ToInt32(this->numericUpDown1->Value);

    Human human = Human();
    
    human.setName(name);
    human.setSurname(surname);
    human.setLastname(lastname);
    human.setAge(age);
    human.setPhone_number(phoneNumber);
    human.setEmail(email);
    human.setAddress(address);

    humans->push_back(human);


}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
    std::string name = msclr::interop::marshal_as<std::string>(this->textBox14->Text);
    std::string surname = msclr::interop::marshal_as<std::string>(this->textBox13->Text);
    std::string lastname = msclr::interop::marshal_as<std::string>(this->textBox12->Text);
    std::string phoneNumber = msclr::interop::marshal_as<std::string>(this->textBox9->Text);
    std::string email = msclr::interop::marshal_as<std::string>(this->textBox10->Text);
    std::string address = msclr::interop::marshal_as<std::string>(this->textBox8->Text);

    std::string dateOfAddmition = msclr::interop::marshal_as<std::string>(this->textBox15->Text);
    std::string group = msclr::interop::marshal_as<std::string>(this->textBox16->Text);
    std::string speciality = msclr::interop::marshal_as<std::string>(this->textBox17->Text);
    std::string document = msclr::interop::marshal_as<std::string>(this->textBox19->Text);
    std::string atestat = msclr::interop::marshal_as<std::string>(this->textBox20->Text);

    int age = Decimal::ToInt32(this->numericUpDown2->Value);
    int course = Decimal::ToInt32(this->numericUpDown3->Value);
    int numberOfRecordBook = Decimal::ToInt32(this->numericUpDown4->Value);

    boolean isGraduated = this->checkBox1->Checked;

    Student student = Student();

    student.setName(name);
    student.setSurname(surname);
    student.setLastname(lastname);
    student.setAge(age);
    student.setPhone_number(phoneNumber);
    student.setEmail(email);
    student.setAddress(address);

    student.setDate_of_admission(dateOfAddmition);
    student.setGroup(group);
    student.setSpeciality(speciality);
    student.setDocument(document);
    student.setAtestat(atestat);
    student.setNumber_of_record_book(numberOfRecordBook);
    student.setCourse(course);
    student.setIsGraduated(isGraduated);

    students->push_back(student);

}
private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
    
    std::string country = msclr::interop::marshal_as<std::string>(this->textBox25->Text);
    std::string date = msclr::interop::marshal_as<std::string>(this->textBox24->Text);
    std::string transport = msclr::interop::marshal_as<std::string>(this->textBox27->Text);
    std::string city = msclr::interop::marshal_as<std::string>(this->textBox28->Text);

    int cost = Decimal::ToInt32(this->numericUpDown5->Value);
    int code = Decimal::ToInt32(this->numericUpDown6->Value);


    Voucher voucher = Voucher();

    voucher.setCountry(country);
    voucher.setCity(city);
    voucher.setDate(date);
    voucher.setCost(cost);
    voucher.setCode(code);
    voucher.setTransport(transport);

    
    vouchers->push_back(voucher);

}
private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
    std::string name = msclr::interop::marshal_as<std::string>(this->textBox34->Text);
    std::string date = msclr::interop::marshal_as<std::string>(this->textBox33->Text);
    std::string document = msclr::interop::marshal_as<std::string>(this->textBox32->Text);

    int count = Decimal::ToInt32(this->numericUpDown7->Value);

    boolean isApproved = this->checkBox2->Checked;


    TradeUnion tradeUnion = TradeUnion();

    tradeUnion.setName(name);
    tradeUnion.setDateOfCreation(date);
    tradeUnion.setCount(count);
    tradeUnion.setDocument(document);
    tradeUnion.setIsApproved(isApproved);
   
    tradeUnions->push_back(tradeUnion);

}
private: System::Void button5_Click(System::Object^ sender, System::EventArgs^ e) {
    std::string name = msclr::interop::marshal_as<std::string>(this->textBox40->Text);
    std::string date = msclr::interop::marshal_as<std::string>(this->textBox39->Text);

    int count = Decimal::ToInt32(this->numericUpDown8->Value);
    int phone_number = Decimal::ToInt32(this->numericUpDown9->Value);

    boolean isCertified = this->checkBox3->Checked;


    University university = University();

    university.setName(name);
    university.setCount(count);
    university.setPhone_number(phone_number);
    university.dateOfCreation = date;
    university.setIsCertified(isCertified);

    universities->push_back(university);
}

      
private: System::Void button6_Click(System::Object^ sender, System::EventArgs^ e) {
    
    
    this->richTextBox1->Text = "";

    for (auto it = humans->begin(); it != humans->end(); ++it) {
        this->richTextBox1->Text += "Human \n";


        System::String^ name = msclr::interop::marshal_as<System::String^>(it->getName());
        this->richTextBox1->Text += "Name: " + name + "\n";

        System::String^ surname = msclr::interop::marshal_as<System::String^>(it->getSurname());
        this->richTextBox1->Text += "Surname:" + surname + "\n";

        System::String^ lastname = msclr::interop::marshal_as<System::String^>(it->getLastname());
        this->richTextBox1->Text += "Lastname: " + lastname + "\n";

        this->richTextBox1->Text += "Age: " + it->getAge() + "\n";

        System::String^ phone_number = msclr::interop::marshal_as<System::String^>(it->getPhone_number());
        this->richTextBox1->Text += "Phone number: " + phone_number + "\n";

        System::String^ address = msclr::interop::marshal_as<System::String^>(it->getAddress());
        this->richTextBox1->Text += "Address: " + address + "\n";

        System::String^ email = msclr::interop::marshal_as<System::String^>(it->getEmail());
        this->richTextBox1->Text += "Email: " + email + "\n";

        this->richTextBox1->Text += "\n";
    }

    for (auto it = students->begin(); it != students->end(); ++it) {
        this->richTextBox1->Text += "Student \n";

        System::String^ name = msclr::interop::marshal_as<System::String^>(it->getName());
        this->richTextBox1->Text += "Name: " + name + "\n";

        System::String^ surname = msclr::interop::marshal_as<System::String^>(it->getSurname());
        this->richTextBox1->Text += "Surname:" + surname + "\n";

        System::String^ lastname = msclr::interop::marshal_as<System::String^>(it->getLastname());
        this->richTextBox1->Text += "Lastname: " + lastname + "\n";

        this->richTextBox1->Text += "Age: " + it->getAge() + "\n";

        System::String^ phone_number = msclr::interop::marshal_as<System::String^>(it->getPhone_number());
        this->richTextBox1->Text += "Phone number: " + phone_number + "\n";

        System::String^ address = msclr::interop::marshal_as<System::String^>(it->getAddress());
        this->richTextBox1->Text += "Address: " + address + "\n";

        System::String^ email = msclr::interop::marshal_as<System::String^>(it->getEmail());
        this->richTextBox1->Text += "Email: " + email + "\n";

        
        System::String^ dateOfAddmition = msclr::interop::marshal_as<System::String^>(it->getDate_of_admission());
        this->richTextBox1->Text += "Date of admission: " + dateOfAddmition + "\n";
      
        System::String^ group = msclr::interop::marshal_as<System::String^>(it->getGroup());
        this->richTextBox1->Text += "Group: " + group + "\n";
     
        System::String^ speciality = msclr::interop::marshal_as<System::String^>(it->getSpeciality());
        this->richTextBox1->Text += "Speciality: " + speciality + "\n";

        System::String^ document = msclr::interop::marshal_as<System::String^>(it->getDocument());
        this->richTextBox1->Text += "Document: " + document + "\n";

        System::String^ atestat = msclr::interop::marshal_as<System::String^>(it->getAtestat());
        this->richTextBox1->Text += "Atestat: " + atestat + "\n";
      
        this->richTextBox1->Text += "Number of record book: " + it->getNumber_of_record_book() + "\n";
        
        this->richTextBox1->Text += "Course: " + it->getCourse() + "\n";
        this->richTextBox1->Text += "Is graduated: " + it->getIsGraduated() + "\n";
        

        this->richTextBox1->Text += "\n";
    }

   
    for (auto it = vouchers->begin(); it != vouchers->end(); ++it) {
        this->richTextBox1->Text += "Voucher \n";


        System::String^ country = msclr::interop::marshal_as<System::String^>(it->getCountry());
        this->richTextBox1->Text += "Country: " + country + "\n";

        System::String^ city = msclr::interop::marshal_as<System::String^>(it->getCity());
        this->richTextBox1->Text += "City:" + city + "\n";

        System::String^ date = msclr::interop::marshal_as<System::String^>(it->getDate());
        this->richTextBox1->Text += "Date:" + date + "\n";

        this->richTextBox1->Text += "Cost: " + it->getCost() + "\n";

        System::String^ transport = msclr::interop::marshal_as<System::String^>(it->getTransport());
        this->richTextBox1->Text += "Transport: " + transport + "\n";

        this->richTextBox1->Text += "\n";
    }


    for (auto it = tradeUnions->begin(); it != tradeUnions->end(); ++it) {
        this->richTextBox1->Text += "TradeUnion \n";


        System::String^ name = msclr::interop::marshal_as<System::String^>(it->getName());
        this->richTextBox1->Text += "Name: " + name + "\n";

        System::String^ date = msclr::interop::marshal_as<System::String^>(it->getDateOfCreation());
        this->richTextBox1->Text += "Date:" + date + "\n";

        this->richTextBox1->Text += "Count: " + it->getCount() + "\n";
        this->richTextBox1->Text += "Is Approved: " + it->getIsApproved() + "\n";

        System::String^ document = msclr::interop::marshal_as<System::String^>(it->getDocument());
        this->richTextBox1->Text += "Document: " + document + "\n";


        this->richTextBox1->Text += "\n";
    }

   
    for (auto it = universities->begin(); it != universities->end(); ++it) {
        this->richTextBox1->Text += "University \n";


        System::String^ name = msclr::interop::marshal_as<System::String^>(it->getName());
        this->richTextBox1->Text += "Name: " + name + "\n";

        System::String^ date = msclr::interop::marshal_as<System::String^>(it->dateOfCreation);
        this->richTextBox1->Text += "Date:" + date + "\n";

        this->richTextBox1->Text += "Count: " + it->getCount() + "\n";
        this->richTextBox1->Text += "Is Certified: " + it->getIsCertified() + "\n";

        System::String^ phone_number = msclr::interop::marshal_as<System::String^>(it->getPhone_number());
        this->richTextBox1->Text += "Phone number: " + phone_number + "\n";


        this->richTextBox1->Text += "\n";
    }


    
    this->richTextBox1->Refresh();


}

};
}
