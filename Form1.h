#pragma once
#include "TBlackJackGame.h"
#include "Form2.h"

TBlackJackGame BJG;

namespace BlackJack {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для Form1
	/// </summary>
	public ref class Form1 : public System::Windows::Forms::Form
	{
	public:
		Form1(void)
		{
			InitializeComponent();
			//
			//TODO: добавьте код конструктора
			//
		}

	protected:
		/// <summary>
		/// Освободить все используемые ресурсы.
		/// </summary>
		~Form1()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::PictureBox^  pictureBox1;
	protected: 
	private: System::Windows::Forms::PictureBox^  pictureBox2;
	private: System::Windows::Forms::PictureBox^  pictureBox3;
	private: System::Windows::Forms::PictureBox^  pictureBox4;
	private: System::Windows::Forms::PictureBox^  pictureBox5;
	private: System::Windows::Forms::PictureBox^  pictureBox6;
	private: System::Windows::Forms::PictureBox^  pictureBox7;
	private: System::Windows::Forms::PictureBox^  pictureBox8;
	private: System::Windows::Forms::PictureBox^  pictureBox9;
	private: System::Windows::Forms::Label^  labGamer1;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  labScore1;
	private: System::Windows::Forms::PictureBox^  pictureBox10;
	private: System::Windows::Forms::PictureBox^  pictureBox11;
	private: System::Windows::Forms::PictureBox^  pictureBox12;
	private: System::Windows::Forms::PictureBox^  pictureBox13;
	private: System::Windows::Forms::PictureBox^  pictureBox14;
	private: System::Windows::Forms::PictureBox^  pictureBox15;
	private: System::Windows::Forms::PictureBox^  pictureBox16;
	private: System::Windows::Forms::PictureBox^  pictureBox17;
	private: System::Windows::Forms::PictureBox^  pictureBox18;
	private: System::Windows::Forms::Label^  labGamer2;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Label^  labScore2;
	private: System::Windows::Forms::Button^  gamer1_NextCard;
	private: System::Windows::Forms::Button^  gamer1_Stop;


	private: System::Windows::Forms::Button^  gamer2_NextCard;
	private: System::Windows::Forms::Button^  gamer2_Stop;


	private: System::Windows::Forms::ToolStrip^  toolStrip1;
	private: System::Windows::Forms::ToolStripDropDownButton^  toolStripButton1;
	private: System::Windows::Forms::ToolStripMenuItem^  Human_Human_Game;
	private: System::Windows::Forms::ToolStripMenuItem^  Human_Computer_Game;
	private: System::Windows::Forms::ToolStripButton^  newButton;



	private: System::Windows::Forms::ToolStripButton^  exitButton;
	private: System::Windows::Forms::ImageList^  imageList1;
	private: System::Windows::Forms::Label^  labWins2;

	private: System::Windows::Forms::Label^  labWins1;

	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::MenuStrip^  menuStrip1;
	private: System::Windows::Forms::ToolStripMenuItem^  файлToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  выходToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  справкаToolStripMenuItem;
	private: System::Windows::Forms::ToolTip^  toolTip1;
	private: System::ComponentModel::IContainer^  components;


	private:
		/// <summary>
		/// Требуется переменная конструктора.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Обязательный метод для поддержки конструктора - не изменяйте
		/// содержимое данного метода при помощи редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(Form1::typeid));
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox3 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox4 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox5 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox6 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox7 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox8 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox9 = (gcnew System::Windows::Forms::PictureBox());
			this->labGamer1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->labScore1 = (gcnew System::Windows::Forms::Label());
			this->pictureBox10 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox11 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox12 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox13 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox14 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox15 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox16 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox17 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox18 = (gcnew System::Windows::Forms::PictureBox());
			this->labGamer2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->labScore2 = (gcnew System::Windows::Forms::Label());
			this->gamer1_NextCard = (gcnew System::Windows::Forms::Button());
			this->gamer1_Stop = (gcnew System::Windows::Forms::Button());
			this->gamer2_NextCard = (gcnew System::Windows::Forms::Button());
			this->gamer2_Stop = (gcnew System::Windows::Forms::Button());
			this->toolStrip1 = (gcnew System::Windows::Forms::ToolStrip());
			this->toolStripButton1 = (gcnew System::Windows::Forms::ToolStripDropDownButton());
			this->Human_Human_Game = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->Human_Computer_Game = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->newButton = (gcnew System::Windows::Forms::ToolStripButton());
			this->exitButton = (gcnew System::Windows::Forms::ToolStripButton());
			this->imageList1 = (gcnew System::Windows::Forms::ImageList(this->components));
			this->labWins2 = (gcnew System::Windows::Forms::Label());
			this->labWins1 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->файлToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->выходToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->справкаToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolTip1 = (gcnew System::Windows::Forms::ToolTip(this->components));
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox3))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox4))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox5))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox6))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox7))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox8))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox9))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox10))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox11))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox12))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox13))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox14))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox15))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox16))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox17))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox18))->BeginInit();
			this->toolStrip1->SuspendLayout();
			this->menuStrip1->SuspendLayout();
			this->SuspendLayout();
			// 
			// pictureBox1
			// 
			this->pictureBox1->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->pictureBox1->Location = System::Drawing::Point(16, 67);
			this->pictureBox1->Margin = System::Windows::Forms::Padding(4);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(71, 96);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureBox1->TabIndex = 0;
			this->pictureBox1->TabStop = false;
			this->pictureBox1->Tag = L"100";
			this->toolTip1->SetToolTip(this->pictureBox1, L"Карта первого игрока");
			// 
			// pictureBox2
			// 
			this->pictureBox2->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->pictureBox2->Location = System::Drawing::Point(95, 67);
			this->pictureBox2->Margin = System::Windows::Forms::Padding(4);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(71, 96);
			this->pictureBox2->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureBox2->TabIndex = 0;
			this->pictureBox2->TabStop = false;
			this->pictureBox2->Tag = L"100";
			this->toolTip1->SetToolTip(this->pictureBox2, L"Карта первого игрока");
			// 
			// pictureBox3
			// 
			this->pictureBox3->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->pictureBox3->Location = System::Drawing::Point(174, 67);
			this->pictureBox3->Margin = System::Windows::Forms::Padding(4);
			this->pictureBox3->Name = L"pictureBox3";
			this->pictureBox3->Size = System::Drawing::Size(71, 96);
			this->pictureBox3->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureBox3->TabIndex = 0;
			this->pictureBox3->TabStop = false;
			this->pictureBox3->Tag = L"100";
			this->toolTip1->SetToolTip(this->pictureBox3, L"Карта первого игрока");
			// 
			// pictureBox4
			// 
			this->pictureBox4->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->pictureBox4->Location = System::Drawing::Point(253, 67);
			this->pictureBox4->Margin = System::Windows::Forms::Padding(4);
			this->pictureBox4->Name = L"pictureBox4";
			this->pictureBox4->Size = System::Drawing::Size(71, 96);
			this->pictureBox4->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureBox4->TabIndex = 0;
			this->pictureBox4->TabStop = false;
			this->pictureBox4->Tag = L"100";
			this->toolTip1->SetToolTip(this->pictureBox4, L"Карта первого игрока");
			// 
			// pictureBox5
			// 
			this->pictureBox5->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->pictureBox5->Location = System::Drawing::Point(332, 67);
			this->pictureBox5->Margin = System::Windows::Forms::Padding(4);
			this->pictureBox5->Name = L"pictureBox5";
			this->pictureBox5->Size = System::Drawing::Size(71, 96);
			this->pictureBox5->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureBox5->TabIndex = 0;
			this->pictureBox5->TabStop = false;
			this->pictureBox5->Tag = L"100";
			this->toolTip1->SetToolTip(this->pictureBox5, L"Карта первого игрока");
			// 
			// pictureBox6
			// 
			this->pictureBox6->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->pictureBox6->Location = System::Drawing::Point(411, 67);
			this->pictureBox6->Margin = System::Windows::Forms::Padding(4);
			this->pictureBox6->Name = L"pictureBox6";
			this->pictureBox6->Size = System::Drawing::Size(71, 96);
			this->pictureBox6->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureBox6->TabIndex = 0;
			this->pictureBox6->TabStop = false;
			this->pictureBox6->Tag = L"100";
			this->toolTip1->SetToolTip(this->pictureBox6, L"Карта первого игрока");
			// 
			// pictureBox7
			// 
			this->pictureBox7->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->pictureBox7->Location = System::Drawing::Point(490, 67);
			this->pictureBox7->Margin = System::Windows::Forms::Padding(4);
			this->pictureBox7->Name = L"pictureBox7";
			this->pictureBox7->Size = System::Drawing::Size(71, 96);
			this->pictureBox7->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureBox7->TabIndex = 0;
			this->pictureBox7->TabStop = false;
			this->pictureBox7->Tag = L"100";
			this->toolTip1->SetToolTip(this->pictureBox7, L"Карта первого игрока");
			// 
			// pictureBox8
			// 
			this->pictureBox8->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->pictureBox8->Location = System::Drawing::Point(569, 67);
			this->pictureBox8->Margin = System::Windows::Forms::Padding(4);
			this->pictureBox8->Name = L"pictureBox8";
			this->pictureBox8->Size = System::Drawing::Size(71, 96);
			this->pictureBox8->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureBox8->TabIndex = 0;
			this->pictureBox8->TabStop = false;
			this->pictureBox8->Tag = L"100";
			this->toolTip1->SetToolTip(this->pictureBox8, L"Карта первого игрока");
			// 
			// pictureBox9
			// 
			this->pictureBox9->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->pictureBox9->Location = System::Drawing::Point(648, 67);
			this->pictureBox9->Margin = System::Windows::Forms::Padding(4);
			this->pictureBox9->Name = L"pictureBox9";
			this->pictureBox9->Size = System::Drawing::Size(71, 96);
			this->pictureBox9->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureBox9->TabIndex = 0;
			this->pictureBox9->TabStop = false;
			this->pictureBox9->Tag = L"100";
			this->toolTip1->SetToolTip(this->pictureBox9, L"Карта первого игрока");
			// 
			// labGamer1
			// 
			this->labGamer1->AutoSize = true;
			this->labGamer1->Font = (gcnew System::Drawing::Font(L"Calibri", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->labGamer1->ForeColor = System::Drawing::Color::Yellow;
			this->labGamer1->Location = System::Drawing::Point(12, 35);
			this->labGamer1->Name = L"labGamer1";
			this->labGamer1->Size = System::Drawing::Size(63, 19);
			this->labGamer1->TabIndex = 1;
			this->labGamer1->Text = L"Игрок 1";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Calibri", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->label2->ForeColor = System::Drawing::Color::Yellow;
			this->label2->Location = System::Drawing::Point(115, 35);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(43, 19);
			this->label2->TabIndex = 1;
			this->label2->Text = L"Счет:";
			// 
			// labScore1
			// 
			this->labScore1->AutoSize = true;
			this->labScore1->Font = (gcnew System::Drawing::Font(L"Calibri", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->labScore1->ForeColor = System::Drawing::Color::Yellow;
			this->labScore1->Location = System::Drawing::Point(164, 35);
			this->labScore1->Name = L"labScore1";
			this->labScore1->Size = System::Drawing::Size(17, 19);
			this->labScore1->TabIndex = 1;
			this->labScore1->Text = L"0";
			this->toolTip1->SetToolTip(this->labScore1, L"Сумма очков сданных карт");
			// 
			// pictureBox10
			// 
			this->pictureBox10->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->pictureBox10->Location = System::Drawing::Point(16, 248);
			this->pictureBox10->Margin = System::Windows::Forms::Padding(4);
			this->pictureBox10->Name = L"pictureBox10";
			this->pictureBox10->Size = System::Drawing::Size(71, 96);
			this->pictureBox10->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureBox10->TabIndex = 0;
			this->pictureBox10->TabStop = false;
			this->pictureBox10->Tag = L"100";
			this->toolTip1->SetToolTip(this->pictureBox10, L"Карта второго игрока");
			// 
			// pictureBox11
			// 
			this->pictureBox11->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->pictureBox11->Location = System::Drawing::Point(95, 248);
			this->pictureBox11->Margin = System::Windows::Forms::Padding(4);
			this->pictureBox11->Name = L"pictureBox11";
			this->pictureBox11->Size = System::Drawing::Size(71, 96);
			this->pictureBox11->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureBox11->TabIndex = 0;
			this->pictureBox11->TabStop = false;
			this->pictureBox11->Tag = L"100";
			this->toolTip1->SetToolTip(this->pictureBox11, L"Карта второго игрока");
			// 
			// pictureBox12
			// 
			this->pictureBox12->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->pictureBox12->Location = System::Drawing::Point(174, 248);
			this->pictureBox12->Margin = System::Windows::Forms::Padding(4);
			this->pictureBox12->Name = L"pictureBox12";
			this->pictureBox12->Size = System::Drawing::Size(71, 96);
			this->pictureBox12->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureBox12->TabIndex = 0;
			this->pictureBox12->TabStop = false;
			this->pictureBox12->Tag = L"100";
			this->toolTip1->SetToolTip(this->pictureBox12, L"Карта второго игрока");
			// 
			// pictureBox13
			// 
			this->pictureBox13->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->pictureBox13->Location = System::Drawing::Point(253, 248);
			this->pictureBox13->Margin = System::Windows::Forms::Padding(4);
			this->pictureBox13->Name = L"pictureBox13";
			this->pictureBox13->Size = System::Drawing::Size(71, 96);
			this->pictureBox13->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureBox13->TabIndex = 0;
			this->pictureBox13->TabStop = false;
			this->pictureBox13->Tag = L"100";
			this->toolTip1->SetToolTip(this->pictureBox13, L"Карта второго игрока");
			// 
			// pictureBox14
			// 
			this->pictureBox14->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->pictureBox14->Location = System::Drawing::Point(332, 248);
			this->pictureBox14->Margin = System::Windows::Forms::Padding(4);
			this->pictureBox14->Name = L"pictureBox14";
			this->pictureBox14->Size = System::Drawing::Size(71, 96);
			this->pictureBox14->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureBox14->TabIndex = 0;
			this->pictureBox14->TabStop = false;
			this->pictureBox14->Tag = L"100";
			this->toolTip1->SetToolTip(this->pictureBox14, L"Карта второго игрока");
			// 
			// pictureBox15
			// 
			this->pictureBox15->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->pictureBox15->Location = System::Drawing::Point(411, 248);
			this->pictureBox15->Margin = System::Windows::Forms::Padding(4);
			this->pictureBox15->Name = L"pictureBox15";
			this->pictureBox15->Size = System::Drawing::Size(71, 96);
			this->pictureBox15->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureBox15->TabIndex = 0;
			this->pictureBox15->TabStop = false;
			this->pictureBox15->Tag = L"100";
			this->toolTip1->SetToolTip(this->pictureBox15, L"Карта второго игрока");
			// 
			// pictureBox16
			// 
			this->pictureBox16->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->pictureBox16->Location = System::Drawing::Point(490, 248);
			this->pictureBox16->Margin = System::Windows::Forms::Padding(4);
			this->pictureBox16->Name = L"pictureBox16";
			this->pictureBox16->Size = System::Drawing::Size(71, 96);
			this->pictureBox16->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureBox16->TabIndex = 0;
			this->pictureBox16->TabStop = false;
			this->pictureBox16->Tag = L"100";
			this->toolTip1->SetToolTip(this->pictureBox16, L"Карта второго игрока");
			// 
			// pictureBox17
			// 
			this->pictureBox17->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->pictureBox17->Location = System::Drawing::Point(569, 248);
			this->pictureBox17->Margin = System::Windows::Forms::Padding(4);
			this->pictureBox17->Name = L"pictureBox17";
			this->pictureBox17->Size = System::Drawing::Size(71, 96);
			this->pictureBox17->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureBox17->TabIndex = 0;
			this->pictureBox17->TabStop = false;
			this->pictureBox17->Tag = L"100";
			this->toolTip1->SetToolTip(this->pictureBox17, L"Карта второго игрока");
			// 
			// pictureBox18
			// 
			this->pictureBox18->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->pictureBox18->Location = System::Drawing::Point(648, 248);
			this->pictureBox18->Margin = System::Windows::Forms::Padding(4);
			this->pictureBox18->Name = L"pictureBox18";
			this->pictureBox18->Size = System::Drawing::Size(71, 96);
			this->pictureBox18->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureBox18->TabIndex = 0;
			this->pictureBox18->TabStop = false;
			this->pictureBox18->Tag = L"100";
			this->toolTip1->SetToolTip(this->pictureBox18, L"Карта второго игрока");
			// 
			// labGamer2
			// 
			this->labGamer2->AutoSize = true;
			this->labGamer2->Font = (gcnew System::Drawing::Font(L"Calibri", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->labGamer2->ForeColor = System::Drawing::Color::Red;
			this->labGamer2->Location = System::Drawing::Point(12, 216);
			this->labGamer2->Name = L"labGamer2";
			this->labGamer2->Size = System::Drawing::Size(63, 19);
			this->labGamer2->TabIndex = 1;
			this->labGamer2->Text = L"Игрок 2";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Calibri", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->label3->ForeColor = System::Drawing::Color::Red;
			this->label3->Location = System::Drawing::Point(115, 216);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(43, 19);
			this->label3->TabIndex = 1;
			this->label3->Text = L"Счет:";
			// 
			// labScore2
			// 
			this->labScore2->AutoSize = true;
			this->labScore2->Font = (gcnew System::Drawing::Font(L"Calibri", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->labScore2->ForeColor = System::Drawing::Color::Red;
			this->labScore2->Location = System::Drawing::Point(164, 216);
			this->labScore2->Name = L"labScore2";
			this->labScore2->Size = System::Drawing::Size(17, 19);
			this->labScore2->TabIndex = 1;
			this->labScore2->Text = L"0";
			this->toolTip1->SetToolTip(this->labScore2, L"Сумма очков сданных карт");
			// 
			// gamer1_NextCard
			// 
			this->gamer1_NextCard->Enabled = false;
			this->gamer1_NextCard->Location = System::Drawing::Point(16, 170);
			this->gamer1_NextCard->Name = L"gamer1_NextCard";
			this->gamer1_NextCard->Size = System::Drawing::Size(75, 34);
			this->gamer1_NextCard->TabIndex = 2;
			this->gamer1_NextCard->Text = L"Ещё";
			this->toolTip1->SetToolTip(this->gamer1_NextCard, L"Сдать карту первого игрока");
			this->gamer1_NextCard->UseVisualStyleBackColor = true;
			this->gamer1_NextCard->Click += gcnew System::EventHandler(this, &Form1::gamer1_NextCard_Click);
			// 
			// gamer1_Stop
			// 
			this->gamer1_Stop->Enabled = false;
			this->gamer1_Stop->Location = System::Drawing::Point(95, 170);
			this->gamer1_Stop->Name = L"gamer1_Stop";
			this->gamer1_Stop->Size = System::Drawing::Size(75, 34);
			this->gamer1_Stop->TabIndex = 2;
			this->gamer1_Stop->Text = L"Хватит";
			this->toolTip1->SetToolTip(this->gamer1_Stop, L"Завершить сдачу карт первому игроку");
			this->gamer1_Stop->UseVisualStyleBackColor = true;
			this->gamer1_Stop->Click += gcnew System::EventHandler(this, &Form1::gamer1_Stop_Click);
			// 
			// gamer2_NextCard
			// 
			this->gamer2_NextCard->Enabled = false;
			this->gamer2_NextCard->Location = System::Drawing::Point(16, 351);
			this->gamer2_NextCard->Name = L"gamer2_NextCard";
			this->gamer2_NextCard->Size = System::Drawing::Size(75, 34);
			this->gamer2_NextCard->TabIndex = 2;
			this->gamer2_NextCard->Text = L"Ещё";
			this->toolTip1->SetToolTip(this->gamer2_NextCard, L"Сдать карту второго игрока");
			this->gamer2_NextCard->UseVisualStyleBackColor = true;
			this->gamer2_NextCard->Visible = false;
			this->gamer2_NextCard->Click += gcnew System::EventHandler(this, &Form1::gamer2_NextCard_Click);
			// 
			// gamer2_Stop
			// 
			this->gamer2_Stop->Enabled = false;
			this->gamer2_Stop->Location = System::Drawing::Point(95, 351);
			this->gamer2_Stop->Name = L"gamer2_Stop";
			this->gamer2_Stop->Size = System::Drawing::Size(75, 34);
			this->gamer2_Stop->TabIndex = 2;
			this->gamer2_Stop->Text = L"Хватит";
			this->toolTip1->SetToolTip(this->gamer2_Stop, L"Завершить сдачу карт второму игроку");
			this->gamer2_Stop->UseVisualStyleBackColor = true;
			this->gamer2_Stop->Visible = false;
			this->gamer2_Stop->Click += gcnew System::EventHandler(this, &Form1::gamer2_Stop_Click);
			// 
			// toolStrip1
			// 
			this->toolStrip1->Dock = System::Windows::Forms::DockStyle::Bottom;
			this->toolStrip1->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->toolStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {this->toolStripButton1, 
				this->newButton, this->exitButton});
			this->toolStrip1->Location = System::Drawing::Point(0, 402);
			this->toolStrip1->Name = L"toolStrip1";
			this->toolStrip1->Size = System::Drawing::Size(734, 39);
			this->toolStrip1->TabIndex = 3;
			this->toolStrip1->Text = L"toolStrip1";
			// 
			// toolStripButton1
			// 
			this->toolStripButton1->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {this->Human_Human_Game, 
				this->Human_Computer_Game});
			this->toolStripButton1->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"toolStripButton1.Image")));
			this->toolStripButton1->ImageScaling = System::Windows::Forms::ToolStripItemImageScaling::None;
			this->toolStripButton1->ImageTransparentColor = System::Drawing::Color::Magenta;
			this->toolStripButton1->Name = L"toolStripButton1";
			this->toolStripButton1->Size = System::Drawing::Size(86, 36);
			this->toolStripButton1->Text = L"Игра";
			this->toolStripButton1->ToolTipText = L"Выбор типа игры";
			// 
			// Human_Human_Game
			// 
			this->Human_Human_Game->Checked = true;
			this->Human_Human_Game->CheckOnClick = true;
			this->Human_Human_Game->CheckState = System::Windows::Forms::CheckState::Checked;
			this->Human_Human_Game->DisplayStyle = System::Windows::Forms::ToolStripItemDisplayStyle::Text;
			this->Human_Human_Game->Name = L"Human_Human_Game";
			this->Human_Human_Game->Size = System::Drawing::Size(221, 24);
			this->Human_Human_Game->Text = L"Человек - человек";
			this->Human_Human_Game->Click += gcnew System::EventHandler(this, &Form1::Human_Human_Game_Click);
			// 
			// Human_Computer_Game
			// 
			this->Human_Computer_Game->CheckOnClick = true;
			this->Human_Computer_Game->DisplayStyle = System::Windows::Forms::ToolStripItemDisplayStyle::Text;
			this->Human_Computer_Game->Name = L"Human_Computer_Game";
			this->Human_Computer_Game->Size = System::Drawing::Size(221, 24);
			this->Human_Computer_Game->Text = L"Человек - компьютер";
			this->Human_Computer_Game->Click += gcnew System::EventHandler(this, &Form1::Human_Computer_Game_Click);
			// 
			// newButton
			// 
			this->newButton->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"newButton.Image")));
			this->newButton->ImageScaling = System::Windows::Forms::ToolStripItemImageScaling::None;
			this->newButton->ImageTransparentColor = System::Drawing::Color::Magenta;
			this->newButton->Name = L"newButton";
			this->newButton->Size = System::Drawing::Size(86, 36);
			this->newButton->Text = L"Новая";
			this->newButton->ToolTipText = L"Начать новую игру";
			this->newButton->Click += gcnew System::EventHandler(this, &Form1::newButton_Click);
			// 
			// exitButton
			// 
			this->exitButton->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"exitButton.Image")));
			this->exitButton->ImageScaling = System::Windows::Forms::ToolStripItemImageScaling::None;
			this->exitButton->ImageTransparentColor = System::Drawing::Color::Magenta;
			this->exitButton->Name = L"exitButton";
			this->exitButton->Size = System::Drawing::Size(88, 36);
			this->exitButton->Text = L"Выход";
			this->exitButton->ToolTipText = L"Завершение работы с программой";
			this->exitButton->Click += gcnew System::EventHandler(this, &Form1::exitButton_Click);
			// 
			// imageList1
			// 
			this->imageList1->ImageStream = (cli::safe_cast<System::Windows::Forms::ImageListStreamer^  >(resources->GetObject(L"imageList1.ImageStream")));
			this->imageList1->TransparentColor = System::Drawing::Color::Transparent;
			this->imageList1->Images->SetKeyName(0, L"1.bmp");
			this->imageList1->Images->SetKeyName(1, L"2.bmp");
			this->imageList1->Images->SetKeyName(2, L"3.bmp");
			this->imageList1->Images->SetKeyName(3, L"4.bmp");
			this->imageList1->Images->SetKeyName(4, L"5.bmp");
			this->imageList1->Images->SetKeyName(5, L"6.bmp");
			this->imageList1->Images->SetKeyName(6, L"7.bmp");
			this->imageList1->Images->SetKeyName(7, L"8.bmp");
			this->imageList1->Images->SetKeyName(8, L"9.bmp");
			this->imageList1->Images->SetKeyName(9, L"10.bmp");
			this->imageList1->Images->SetKeyName(10, L"11.bmp");
			this->imageList1->Images->SetKeyName(11, L"12.bmp");
			this->imageList1->Images->SetKeyName(12, L"13.bmp");
			this->imageList1->Images->SetKeyName(13, L"14.bmp");
			this->imageList1->Images->SetKeyName(14, L"15.bmp");
			this->imageList1->Images->SetKeyName(15, L"16.bmp");
			this->imageList1->Images->SetKeyName(16, L"17.bmp");
			this->imageList1->Images->SetKeyName(17, L"18.bmp");
			this->imageList1->Images->SetKeyName(18, L"19.bmp");
			this->imageList1->Images->SetKeyName(19, L"20.bmp");
			this->imageList1->Images->SetKeyName(20, L"21.bmp");
			this->imageList1->Images->SetKeyName(21, L"22.bmp");
			this->imageList1->Images->SetKeyName(22, L"23.bmp");
			this->imageList1->Images->SetKeyName(23, L"24.bmp");
			this->imageList1->Images->SetKeyName(24, L"25.bmp");
			this->imageList1->Images->SetKeyName(25, L"26.bmp");
			this->imageList1->Images->SetKeyName(26, L"27.bmp");
			this->imageList1->Images->SetKeyName(27, L"28.bmp");
			this->imageList1->Images->SetKeyName(28, L"29.bmp");
			this->imageList1->Images->SetKeyName(29, L"30.bmp");
			this->imageList1->Images->SetKeyName(30, L"31.bmp");
			this->imageList1->Images->SetKeyName(31, L"32.bmp");
			this->imageList1->Images->SetKeyName(32, L"33.bmp");
			this->imageList1->Images->SetKeyName(33, L"34.bmp");
			this->imageList1->Images->SetKeyName(34, L"35.bmp");
			this->imageList1->Images->SetKeyName(35, L"36.bmp");
			this->imageList1->Images->SetKeyName(36, L"37.bmp");
			this->imageList1->Images->SetKeyName(37, L"38.bmp");
			this->imageList1->Images->SetKeyName(38, L"39.bmp");
			this->imageList1->Images->SetKeyName(39, L"40.bmp");
			this->imageList1->Images->SetKeyName(40, L"41.bmp");
			this->imageList1->Images->SetKeyName(41, L"42.bmp");
			this->imageList1->Images->SetKeyName(42, L"43.bmp");
			this->imageList1->Images->SetKeyName(43, L"44.bmp");
			this->imageList1->Images->SetKeyName(44, L"45.bmp");
			this->imageList1->Images->SetKeyName(45, L"46.bmp");
			this->imageList1->Images->SetKeyName(46, L"47.bmp");
			this->imageList1->Images->SetKeyName(47, L"48.bmp");
			this->imageList1->Images->SetKeyName(48, L"49.bmp");
			this->imageList1->Images->SetKeyName(49, L"50.bmp");
			this->imageList1->Images->SetKeyName(50, L"51.bmp");
			this->imageList1->Images->SetKeyName(51, L"52.bmp");
			// 
			// labWins2
			// 
			this->labWins2->AutoSize = true;
			this->labWins2->Font = (gcnew System::Drawing::Font(L"Calibri", 21.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->labWins2->ForeColor = System::Drawing::Color::Red;
			this->labWins2->Location = System::Drawing::Point(385, 185);
			this->labWins2->Name = L"labWins2";
			this->labWins2->Size = System::Drawing::Size(30, 36);
			this->labWins2->TabIndex = 1;
			this->labWins2->Text = L"0";
			this->labWins2->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->toolTip1->SetToolTip(this->labWins2, L"Количество выигранных партий вторым игроком");
			// 
			// labWins1
			// 
			this->labWins1->AutoSize = true;
			this->labWins1->Font = (gcnew System::Drawing::Font(L"Calibri", 21.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->labWins1->ForeColor = System::Drawing::Color::Yellow;
			this->labWins1->Location = System::Drawing::Point(320, 185);
			this->labWins1->Name = L"labWins1";
			this->labWins1->Size = System::Drawing::Size(30, 36);
			this->labWins1->TabIndex = 1;
			this->labWins1->Text = L"0";
			this->labWins1->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->toolTip1->SetToolTip(this->labWins1, L"Количество выигранных партий первым игроком");
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Calibri", 21.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->label5->ForeColor = System::Drawing::Color::White;
			this->label5->Location = System::Drawing::Point(356, 185);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(23, 36);
			this->label5->TabIndex = 1;
			this->label5->Text = L":";
			// 
			// menuStrip1
			// 
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {this->файлToolStripMenuItem, 
				this->справкаToolStripMenuItem});
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(734, 24);
			this->menuStrip1->TabIndex = 4;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// файлToolStripMenuItem
			// 
			this->файлToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) {this->выходToolStripMenuItem});
			this->файлToolStripMenuItem->Name = L"файлToolStripMenuItem";
			this->файлToolStripMenuItem->Size = System::Drawing::Size(48, 20);
			this->файлToolStripMenuItem->Text = L"Файл";
			// 
			// выходToolStripMenuItem
			// 
			this->выходToolStripMenuItem->Name = L"выходToolStripMenuItem";
			this->выходToolStripMenuItem->Size = System::Drawing::Size(108, 22);
			this->выходToolStripMenuItem->Text = L"Выход";
			this->выходToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::exitButton_Click);
			// 
			// справкаToolStripMenuItem
			// 
			this->справкаToolStripMenuItem->Name = L"справкаToolStripMenuItem";
			this->справкаToolStripMenuItem->Size = System::Drawing::Size(65, 20);
			this->справкаToolStripMenuItem->Text = L"Справка";
			this->справкаToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::справкаToolStripMenuItem_Click);
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 19);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(64)), 
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->ClientSize = System::Drawing::Size(734, 441);
			this->Controls->Add(this->toolStrip1);
			this->Controls->Add(this->menuStrip1);
			this->Controls->Add(this->gamer2_Stop);
			this->Controls->Add(this->gamer2_NextCard);
			this->Controls->Add(this->gamer1_Stop);
			this->Controls->Add(this->gamer1_NextCard);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->labWins2);
			this->Controls->Add(this->labScore2);
			this->Controls->Add(this->labWins1);
			this->Controls->Add(this->labScore1);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->labGamer2);
			this->Controls->Add(this->labGamer1);
			this->Controls->Add(this->pictureBox18);
			this->Controls->Add(this->pictureBox9);
			this->Controls->Add(this->pictureBox17);
			this->Controls->Add(this->pictureBox8);
			this->Controls->Add(this->pictureBox16);
			this->Controls->Add(this->pictureBox7);
			this->Controls->Add(this->pictureBox15);
			this->Controls->Add(this->pictureBox6);
			this->Controls->Add(this->pictureBox14);
			this->Controls->Add(this->pictureBox5);
			this->Controls->Add(this->pictureBox13);
			this->Controls->Add(this->pictureBox12);
			this->Controls->Add(this->pictureBox4);
			this->Controls->Add(this->pictureBox11);
			this->Controls->Add(this->pictureBox3);
			this->Controls->Add(this->pictureBox10);
			this->Controls->Add(this->pictureBox2);
			this->Controls->Add(this->pictureBox1);
			this->Font = (gcnew System::Drawing::Font(L"Calibri", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^  >(resources->GetObject(L"$this.Icon")));
			this->MainMenuStrip = this->menuStrip1;
			this->Margin = System::Windows::Forms::Padding(4);
			this->MaximizeBox = false;
			this->Name = L"Form1";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"BlackJack";
			this->Load += gcnew System::EventHandler(this, &Form1::Form1_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox3))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox4))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox5))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox6))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox7))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox8))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox9))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox10))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox11))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox12))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox13))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox14))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox15))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox16))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox17))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox18))->EndInit();
			this->toolStrip1->ResumeLayout(false);
			this->toolStrip1->PerformLayout();
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

void TakeComputer(void)
//ход компьютера
{
	int k;//номер карты
	k = BJG.GetOpponentCard();
	labScore2->Text = BJG.ScoreE().ToString();//вывод в метку
	switch (BJG.CardsE() - 1)//вывод картинки
	{
	case 0:
		pictureBox10->Image = imageList1->Images[k];
		break;
	case 1:
		pictureBox11->Image = imageList1->Images[k];
		break;
	case 2:
		pictureBox12->Image = imageList1->Images[k];
		break;
	case 3:
		pictureBox13->Image = imageList1->Images[k];
		break;
	case 4:
		pictureBox14->Image = imageList1->Images[k];
		break;
	case 5:
		pictureBox15->Image = imageList1->Images[k];
		break;
	case 6:
		pictureBox16->Image = imageList1->Images[k];
		break;
	case 7:
		pictureBox17->Image = imageList1->Images[k];
		break;
	case 8:
		pictureBox18->Image = imageList1->Images[k];
		break;
	}
}
private: System::Void Human_Human_Game_Click(System::Object^  sender, System::EventArgs^  e)
		 //выбор типа игры: человек - человек
		 {
			 Human_Human_Game->Checked = true;
			 Human_Computer_Game->Checked = false;
			 labGamer1->Text = "Игрок 1";
			 labGamer2->Text = "Игрок 2";
		 }
private: System::Void Human_Computer_Game_Click(System::Object^  sender, System::EventArgs^  e) 
		 //выбор типа игры: человек - компьютер
		 {
			 Human_Human_Game->Checked = false;
			 Human_Computer_Game->Checked = true;
			 labGamer1->Text = "Игрок";
			 labGamer2->Text = "Компьютер";
		 }
private: System::Void Form1_Load(System::Object^  sender, System::EventArgs^  e) 
		 //загрузка формы
		 {
			 BJG = TBlackJackGame();
		 }
private: System::Void exitButton_Click(System::Object^  sender, System::EventArgs^  e) 
		 //выход из программы
		 {
			 Close();
		 }
private: System::Void gamer1_NextCard_Click(System::Object^  sender, System::EventArgs^  e)
		 //ход первого игрока
		 {
			 int k;//номер карты
			 k = BJG.GetGamerCard();
			 labScore1->Text = BJG.Score().ToString();//вывод в метку
			 switch (BJG.Cards() - 1)//вывод картинки
			 {
			 case 0:
				 pictureBox1->Image = imageList1->Images[k];
				 break;
			 case 1:
				 pictureBox2->Image = imageList1->Images[k];
				 break;
			 case 2:
				 pictureBox3->Image = imageList1->Images[k];
				 break;
			 case 3:
				 pictureBox4->Image = imageList1->Images[k];
				 break;
			 case 4:
				 pictureBox5->Image = imageList1->Images[k];
				 break;
			 case 5:
				 pictureBox6->Image = imageList1->Images[k];
				 break;
			 case 6:
				 pictureBox7->Image = imageList1->Images[k];
				 break;
			 case 7:
				 pictureBox8->Image = imageList1->Images[k];
				 break;
			 case 8:
				 pictureBox9->Image = imageList1->Images[k];
				 break;
			 }
			 if (BJG.Cards() == 9)//выведено предельное число карт
				 gamer1_NextCard->Enabled = false;//запрет дальнейших ходов
			 if (BJG.Score() > 21)//перебор
			 {
				 labScore1->Text = "перебор";
				 gamer1_Stop_Click(sender, e);
			 }
		 }

private: System::Void newButton_Click(System::Object^  sender, System::EventArgs^  e) 
		 //начать новую игру
		 {
			 if (Human_Human_Game->Checked)
				 BJG.NewGame(2);
			 else
				 BJG.NewGame(1);
			 gamer1_Stop->Enabled = true;//инициализация кнопок в зависимости от типа игры
			 gamer1_NextCard->Enabled = true;
			 gamer2_Stop->Enabled = false;
			 gamer2_NextCard->Enabled = false;
			 gamer2_Stop->Visible = false;
			 gamer2_NextCard->Visible = false;
			 if (BJG.GameType() == 2)
			 {
				 gamer2_Stop->Visible = true;
				 gamer2_NextCard->Visible = true;
			 }
			 labScore1->Text = "0";
			 labScore2->Text = "0";
			 toolStrip1->Enabled = false;
			 //очистка изображений для новой игры
			 for each (Control ^control in Controls)
			 {
				 if (Convert::ToInt32(control->Tag) == 100)
				 {
					 PictureBox ^pb = (PictureBox^)control;
					 pb->Image = nullptr;
				 }
			 }
		 }
private: System::Void gamer1_Stop_Click(System::Object^  sender, System::EventArgs^  e) 
		 //завершить игру первого игрока - человека
		 {
			 gamer1_NextCard->Enabled = false;
			 gamer1_Stop->Enabled = false;
			 if (BJG.Score() > 21)//если перебор, второй игрок не ходит
			 {
				  MessageBox::Show("Вы проиграли!","Информация",
						 MessageBoxButtons::OK,MessageBoxIcon::Information);
				  BJG.IncWins2();
				  labWins2->Text = BJG.Wins2().ToString();
				  toolStrip1->Enabled = true;
				  return;
			 }
			 if (BJG.GameType() == 2)//человек - человек
			 {
				 gamer2_Stop->Enabled = true;
				 gamer2_NextCard->Enabled = true;
			 }
			 else//человек - компьютер
			 {
				 do//добавляем карты пока не сравняемся или превысим очки соперника
				 {
					 TakeComputer();
				 }
				 while (BJG.ScoreE() <= BJG.Score());
				 if (BJG.ScoreE() <= 21)//перебора нет, сравниваем очки и выводим результат игры
				 {
					 if (BJG.ScoreE() > BJG.Score())
					 {
						 MessageBox::Show("Вы проиграли!","Информация",
						 MessageBoxButtons::OK,MessageBoxIcon::Information);
						 BJG.IncWins2();
						 labWins2->Text = BJG.Wins2().ToString();
					 }
					 else
						 if (BJG.ScoreE() < BJG.Score())
						 {
							 MessageBox::Show("Вы выиграли!","Информация",
							 MessageBoxButtons::OK,MessageBoxIcon::Information);
							 BJG.IncWins1();
							 labWins1->Text = BJG.Wins1().ToString();
						 }
						 else
							 MessageBox::Show("Ничья.","Информация",
							 MessageBoxButtons::OK,MessageBoxIcon::Information);
				 }
				 else//перебор, проигрыш
				 {
					 labScore2->Text = "перебор";
					 MessageBox::Show("Вы выиграли!","Информация",
						 MessageBoxButtons::OK,MessageBoxIcon::Information);
					 BJG.IncWins1();
					 labWins1->Text = BJG.Wins1().ToString();
				 }
				 toolStrip1->Enabled = true;
				 return;
			 }
		 }
private: System::Void gamer2_NextCard_Click(System::Object^  sender, System::EventArgs^  e) 
		 //ход второго игрока - человека
		 {
			 int k;//номер карты
			 k = BJG.GetOpponentCard();
			 labScore2->Text = BJG.ScoreE().ToString();//вывод в метку
			 switch (BJG.CardsE() - 1)//вывод картинки
			 {
			 case 0:
				 pictureBox10->Image = imageList1->Images[k];
				 break;
			 case 1:
				 pictureBox11->Image = imageList1->Images[k];
				 break;
			 case 2:
				 pictureBox12->Image = imageList1->Images[k];
				 break;
			 case 3:
				 pictureBox13->Image = imageList1->Images[k];
				 break;
			 case 4:
				 pictureBox14->Image = imageList1->Images[k];
				 break;
			 case 5:
				 pictureBox15->Image = imageList1->Images[k];
				 break;
			 case 6:
				 pictureBox16->Image = imageList1->Images[k];
				 break;
			 case 7:
				 pictureBox17->Image = imageList1->Images[k];
				 break;
			 case 8:
				 pictureBox18->Image = imageList1->Images[k];
				 break;
			 }
			 if (BJG.CardsE() == 9)//выведено предельное число карт
			 {
				 gamer2_NextCard->Enabled = false;//запрет дальнейших ходов
				 gamer2_Stop->Enabled = false;
				 gamer2_Stop_Click(sender, e);
			 }
			 if (BJG.ScoreE() > 21)//перебор
			 {
				 labScore2->Text = "перебор";
				 gamer2_Stop_Click(sender, e);
			 }
		 }
private: System::Void gamer2_Stop_Click(System::Object^  sender, System::EventArgs^  e) 
		 //завершить игру второго игрока - человека
		 {
			 toolStrip1->Enabled = true;
			 gamer2_Stop->Enabled = false;
			 gamer2_NextCard->Enabled = false;
			 if (BJG.ScoreE() <= 21)//перебора нет, сравниваем очки и выводим результат игры
				 {
					 if (BJG.ScoreE() > BJG.Score())
					 {
						 MessageBox::Show("Вы проиграли!","Информация",
						 MessageBoxButtons::OK,MessageBoxIcon::Information);
						 BJG.IncWins2();
						 labWins2->Text = BJG.Wins2().ToString();
					 }
					 else
						 if (BJG.ScoreE() < BJG.Score())
						 {
							 MessageBox::Show("Вы выиграли!","Информация",
							 MessageBoxButtons::OK,MessageBoxIcon::Information);
							 BJG.IncWins1();
							 labWins1->Text = BJG.Wins1().ToString();
						 }
						 else
							 MessageBox::Show("Ничья.","Информация",
							 MessageBoxButtons::OK,MessageBoxIcon::Information);
				 }
				 else//перебор второго игрока
				 {
					 MessageBox::Show("Вы выиграли!","Информация",
						 MessageBoxButtons::OK,MessageBoxIcon::Information);
					 BJG.IncWins1();
					 labWins1->Text = BJG.Wins1().ToString();
			 }
		 }
private: System::Void справкаToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) 
		 //вывод окна справки
		 {
			 Form2 ^f2 = gcnew Form2();
			 f2->ShowDialog();
		 }
};
}

