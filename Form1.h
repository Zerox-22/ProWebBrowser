#include <iostream>
#include <cstdlib>
#include <string>

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
				//
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

		private: System::Windows::Forms::MenuStrip^ menuStrip1;
		private: System::Windows::Forms::ToolStripMenuItem^ fichierToolStripMenuItem;
		private: System::Windows::Forms::ToolStripMenuItem^ nouveauToolStripMenuItem;
		private: System::Windows::Forms::ToolStripMenuItem^ quitterToolStripMenuItem;
		private: System::Windows::Forms::ToolStripMenuItem^ aProposToolStripMenuItem;
		private: System::Windows::Forms::ToolStripMenuItem^ toolStripMenuItem1;
		private: System::Windows::Forms::TextBox^ textBox1;
		private: System::Windows::Forms::Button^ button1;
		private: System::Windows::Forms::WebBrowser^ webBrowser1;
		private: System::Windows::Forms::Button^ button2;
		private: System::Windows::Forms::Button^ button3;
		private: System::Windows::Forms::ListBox^ History;
		private: System::Windows::Forms::ListBox^ Favoris;
		private: System::Windows::Forms::Button^ button4;

		private:
			/// <summary>
			/// Required designer variable.
			/// </summary>
			System::ComponentModel::Container^ components;
	
#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->fichierToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->nouveauToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->quitterToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->aProposToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripMenuItem1 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->webBrowser1 = (gcnew System::Windows::Forms::WebBrowser());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->History = (gcnew System::Windows::Forms::ListBox());
			this->Favoris = (gcnew System::Windows::Forms::ListBox());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->menuStrip1->SuspendLayout();
			this->SuspendLayout();
			// 
			// menuStrip1
			// 
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {
				this->fichierToolStripMenuItem,
					this->aProposToolStripMenuItem, this->toolStripMenuItem1
			});
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(1260, 24);
			this->menuStrip1->TabIndex = 0;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// fichierToolStripMenuItem
			// 
			this->fichierToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->nouveauToolStripMenuItem,
					this->quitterToolStripMenuItem
			});
			this->fichierToolStripMenuItem->Name = L"fichierToolStripMenuItem";
			this->fichierToolStripMenuItem->Size = System::Drawing::Size(54, 20);
			this->fichierToolStripMenuItem->Text = L"Fichier";
			// 
			// nouveauToolStripMenuItem
			// 
			this->nouveauToolStripMenuItem->Name = L"nouveauToolStripMenuItem";
			this->nouveauToolStripMenuItem->Size = System::Drawing::Size(122, 22);
			this->nouveauToolStripMenuItem->Text = L"Nouveau";
			// 
			// quitterToolStripMenuItem
			// 
			this->quitterToolStripMenuItem->Name = L"quitterToolStripMenuItem";
			this->quitterToolStripMenuItem->Size = System::Drawing::Size(122, 22);
			this->quitterToolStripMenuItem->Text = L"Quitter";
			this->quitterToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::quitterToolStripMenuItem_Click);
			// 
			// aProposToolStripMenuItem
			// 
			this->aProposToolStripMenuItem->Name = L"aProposToolStripMenuItem";
			this->aProposToolStripMenuItem->Size = System::Drawing::Size(67, 20);
			this->aProposToolStripMenuItem->Text = L"A propos";
			this->aProposToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::aProposToolStripMenuItem_Click);
			// 
			// toolStripMenuItem1
			// 
			this->toolStripMenuItem1->Name = L"toolStripMenuItem1";
			this->toolStripMenuItem1->Size = System::Drawing::Size(24, 20);
			this->toolStripMenuItem1->Text = L"\?";
			this->toolStripMenuItem1->Click += gcnew System::EventHandler(this, &Form1::toolStripMenuItem1_Click);
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(151, 32);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(711, 20);
			this->textBox1->TabIndex = 1;
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(884, 32);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(112, 30);
			this->button1->TabIndex = 2;
			this->button1->Text = L"Chercher";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Form1::button1_Click);
			// 
			// webBrowser1
			// 
			this->webBrowser1->Location = System::Drawing::Point(151, 68);
			this->webBrowser1->MinimumSize = System::Drawing::Size(20, 20);
			this->webBrowser1->Name = L"webBrowser1";
			this->webBrowser1->ScriptErrorsSuppressed = true;
			this->webBrowser1->Size = System::Drawing::Size(964, 491);
			this->webBrowser1->TabIndex = 3;
			this->webBrowser1->Url = (gcnew System::Uri(L"https://www.google.fr", System::UriKind::Absolute));
			this->webBrowser1->DocumentCompleted += gcnew System::Windows::Forms::WebBrowserDocumentCompletedEventHandler(this, &Form1::webBrowser1_DocumentCompleted);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(1011, 32);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(49, 30);
			this->button2->TabIndex = 4;
			this->button2->Text = L"<";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &Form1::button2_Click);
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(1066, 32);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(49, 30);
			this->button3->TabIndex = 4;
			this->button3->Text = L">";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &Form1::button3_Click);
			// 
			// History
			// 
			this->History->FormattingEnabled = true;
			this->History->Location = System::Drawing::Point(12, 35);
			this->History->Name = L"History";
			this->History->Size = System::Drawing::Size(133, 524);
			this->History->TabIndex = 5;
			this->History->SelectedIndexChanged += gcnew System::EventHandler(this, &Form1::History_SelectedIndexChanged);
			// 
			// Favoris
			// 
			this->Favoris->FormattingEnabled = true;
			this->Favoris->Location = System::Drawing::Point(1121, 35);
			this->Favoris->Name = L"Favoris";
			this->Favoris->Size = System::Drawing::Size(127, 524);
			this->Favoris->TabIndex = 6;
			this->Favoris->SelectedIndexChanged += gcnew System::EventHandler(this, &Form1::Favoris_SelectedIndexChanged);
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(1121, 6);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(127, 23);
			this->button4->TabIndex = 7;
			this->button4->Text = L"Add Fav";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &Form1::button4_Click_1);
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1260, 603);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->Favoris);
			this->Controls->Add(this->History);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->webBrowser1);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->menuStrip1);
			this->MainMenuStrip = this->menuStrip1;
			this->Name = L"Form1";
			this->Text = L"WebBrowser";
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}

		// A propos
	private: System::Void aProposToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		System::Windows::Forms::MessageBox::Show("Développé par Jérémy Le Moine", "A propos");
	}
		   // Aide 
	private: System::Void toolStripMenuItem1_Click(System::Object^ sender, System::EventArgs^ e) {
		System::Diagnostics::Process::Start("https://www.google.com");
	}
		   // Quitter
	private: System::Void quitterToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		System::Windows::Forms::Application::Exit();
	}
		   // Naviguer
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		this->webBrowser1->Navigate(this->textBox1->Text);
	}
		   // Retour page
	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
		this->webBrowser1->GoBack();
	}
		   // Page suivante
	private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
		this->webBrowser1->GoForward();
	}

		   // Ajoute aux favoris
	private: System::Void webBrowser1_DocumentCompleted(System::Object^ sender, System::Windows::Forms::WebBrowserDocumentCompletedEventArgs^ e) {
		String^ page = webBrowser1->Url->ToString();
		History->Items->Add(page);
	}
	private: System::Void button4_Click_1(System::Object^ sender, System::EventArgs^ e) {
		Favoris->Items->Add(webBrowser1->Url->ToString());
	}
	private: System::Void Favoris_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
		webBrowser1->Navigate(Favoris->SelectedItem->ToString());
	}
	private: System::Void History_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
		webBrowser1->Navigate(History->SelectedItem->ToString());
	}
	};

};

