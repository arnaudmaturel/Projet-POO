#pragma once

#include "MyFormMain.h"
#include "MyFormPersonnel.h"
#include "MyFormClient.h"

namespace FormsPOO {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Description r�sum�e de MyForm
	/// </summary>
	public ref class MyFormArticle : public System::Windows::Forms::Form
	{
	public:
		MyFormArticle(void)
		{
			InitializeComponent();
			//
			//TODO: ajoutez ici le code du constructeur
			//
		}

	protected:
		/// <summary>
		/// Nettoyage des ressources utilis�es.
		/// </summary>
		~MyFormArticle()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::BindingSource^ bindingSource1;
	private: System::Windows::Forms::DataGridView^ dataGridView1;
	private: System::Windows::Forms::MenuStrip^ menuStrip1;
	private: System::Windows::Forms::ToolStripMenuItem^ acceuilToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ menuToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ gestionDesClientsToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ gestionDesArticlesToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ gestionDuStockToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ gestionDesStatistiquesToolStripMenuItem;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::TextBox^ textBox4;
	private: System::Windows::Forms::TextBox^ textBox5;
	private: System::Windows::Forms::TextBox^ textBox6;
	private: System::Windows::Forms::TextBox^ textBox7;
	private: System::Windows::Forms::TextBox^ textBox8;
	private: System::Windows::Forms::TextBox^ textBox9;
	private: System::ComponentModel::IContainer^ components;
	protected:

	private:
		/// <summary>
		/// Variable n�cessaire au concepteur.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// M�thode requise pour la prise en charge du concepteur - ne modifiez pas
		/// le contenu de cette m�thode avec l'�diteur de code.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->bindingSource1 = (gcnew System::Windows::Forms::BindingSource(this->components));
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->acceuilToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->menuToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->gestionDesClientsToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->gestionDesArticlesToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->gestionDuStockToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->gestionDesStatistiquesToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->textBox6 = (gcnew System::Windows::Forms::TextBox());
			this->textBox7 = (gcnew System::Windows::Forms::TextBox());
			this->textBox8 = (gcnew System::Windows::Forms::TextBox());
			this->textBox9 = (gcnew System::Windows::Forms::TextBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->bindingSource1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->menuStrip1->SuspendLayout();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Montserrat", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(238, 101);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(183, 33);
			this->label1->TabIndex = 0;
			this->label1->Text = L"R�f�rence :";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Montserrat", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(215, 140);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(206, 33);
			this->label2->TabIndex = 1;
			this->label2->Text = L"D�signation :";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Montserrat", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(103, 179);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(318, 33);
			this->label3->TabIndex = 2;
			this->label3->Text = L"Quantit� disponible :";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Montserrat", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(287, 218);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(134, 33);
			this->label4->TabIndex = 3;
			this->label4->Text = L"Prix HT :";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Montserrat", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->Location = System::Drawing::Point(213, 296);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(208, 33);
			this->label5->TabIndex = 4;
			this->label5->Text = L"Taux de TVA :";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Montserrat", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->Location = System::Drawing::Point(21, 335);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(400, 33);
			this->label6->TabIndex = 5;
			this->label6->Text = L"Seuil  approvisionnement :";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Montserrat", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label7->Location = System::Drawing::Point(245, 374);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(176, 33);
			this->label7->TabIndex = 6;
			this->label7->Text = L"Cat�gorie :";
			// 
			// button1
			// 
			this->button1->Font = (gcnew System::Drawing::Font(L"Montserrat", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->Location = System::Drawing::Point(12, 471);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(143, 36);
			this->button1->TabIndex = 7;
			this->button1->Text = L"Ajouter";
			this->button1->UseVisualStyleBackColor = true;
			// 
			// button2
			// 
			this->button2->Font = (gcnew System::Drawing::Font(L"Montserrat", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button2->Location = System::Drawing::Point(161, 471);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(143, 36);
			this->button2->TabIndex = 8;
			this->button2->Text = L"Modifier";
			this->button2->UseVisualStyleBackColor = true;
			// 
			// button3
			// 
			this->button3->Font = (gcnew System::Drawing::Font(L"Montserrat", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button3->Location = System::Drawing::Point(310, 471);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(143, 36);
			this->button3->TabIndex = 9;
			this->button3->Text = L"Supprimer";
			this->button3->UseVisualStyleBackColor = true;
			// 
			// button4
			// 
			this->button4->Font = (gcnew System::Drawing::Font(L"Montserrat", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button4->Location = System::Drawing::Point(790, 53);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(176, 36);
			this->button4->TabIndex = 10;
			this->button4->Text = L"Chercher";
			this->button4->UseVisualStyleBackColor = true;
			// 
			// button5
			// 
			this->button5->Font = (gcnew System::Drawing::Font(L"Montserrat", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button5->Location = System::Drawing::Point(972, 53);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(176, 36);
			this->button5->TabIndex = 11;
			this->button5->Text = L"Afficher tout";
			this->button5->UseVisualStyleBackColor = true;
			// 
			// dataGridView1
			// 
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Location = System::Drawing::Point(790, 101);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->Size = System::Drawing::Size(357, 406);
			this->dataGridView1->TabIndex = 12;
			// 
			// menuStrip1
			// 
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->acceuilToolStripMenuItem,
					this->menuToolStripMenuItem
			});
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(1172, 24);
			this->menuStrip1->TabIndex = 13;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// acceuilToolStripMenuItem
			// 
			this->acceuilToolStripMenuItem->Name = L"acceuilToolStripMenuItem";
			this->acceuilToolStripMenuItem->Size = System::Drawing::Size(58, 20);
			this->acceuilToolStripMenuItem->Text = L"Acceuil";
			this->acceuilToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyFormArticle::acceuilToolStripMenuItem_Click);
			// 
			// menuToolStripMenuItem
			// 
			this->menuToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(4) {
				this->gestionDesClientsToolStripMenuItem,
					this->gestionDesArticlesToolStripMenuItem, this->gestionDuStockToolStripMenuItem, this->gestionDesStatistiquesToolStripMenuItem
			});
			this->menuToolStripMenuItem->Name = L"menuToolStripMenuItem";
			this->menuToolStripMenuItem->Size = System::Drawing::Size(50, 20);
			this->menuToolStripMenuItem->Text = L"Menu";
			// 
			// gestionDesClientsToolStripMenuItem
			// 
			this->gestionDesClientsToolStripMenuItem->Name = L"gestionDesClientsToolStripMenuItem";
			this->gestionDesClientsToolStripMenuItem->Size = System::Drawing::Size(197, 22);
			this->gestionDesClientsToolStripMenuItem->Text = L"Gestion du personnel";
			// 
			// gestionDesArticlesToolStripMenuItem
			// 
			this->gestionDesArticlesToolStripMenuItem->Name = L"gestionDesArticlesToolStripMenuItem";
			this->gestionDesArticlesToolStripMenuItem->Size = System::Drawing::Size(197, 22);
			this->gestionDesArticlesToolStripMenuItem->Text = L"Gestion des clients";
			// 
			// gestionDuStockToolStripMenuItem
			// 
			this->gestionDuStockToolStripMenuItem->Name = L"gestionDuStockToolStripMenuItem";
			this->gestionDuStockToolStripMenuItem->Size = System::Drawing::Size(197, 22);
			this->gestionDuStockToolStripMenuItem->Text = L"Gestion du stock ";
			// 
			// gestionDesStatistiquesToolStripMenuItem
			// 
			this->gestionDesStatistiquesToolStripMenuItem->Name = L"gestionDesStatistiquesToolStripMenuItem";
			this->gestionDesStatistiquesToolStripMenuItem->Size = System::Drawing::Size(197, 22);
			this->gestionDesStatistiquesToolStripMenuItem->Text = L"Gestion des statistiques";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Font = (gcnew System::Drawing::Font(L"Montserrat", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label8->Location = System::Drawing::Point(271, 257);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(150, 33);
			this->label8->TabIndex = 14;
			this->label8->Text = L"Prix TTC :";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Font = (gcnew System::Drawing::Font(L"Montserrat", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label9->Location = System::Drawing::Point(275, 413);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(146, 33);
			this->label9->TabIndex = 15;
			this->label9->Text = L"Couleur :";
			// 
			// textBox1
			// 
			this->textBox1->Font = (gcnew System::Drawing::Font(L"Montserrat", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox1->Location = System::Drawing::Point(427, 140);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(319, 33);
			this->textBox1->TabIndex = 16;
			// 
			// textBox2
			// 
			this->textBox2->Font = (gcnew System::Drawing::Font(L"Montserrat", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox2->Location = System::Drawing::Point(427, 179);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(319, 33);
			this->textBox2->TabIndex = 17;
			// 
			// textBox3
			// 
			this->textBox3->Font = (gcnew System::Drawing::Font(L"Montserrat", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox3->Location = System::Drawing::Point(427, 218);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(319, 33);
			this->textBox3->TabIndex = 18;
			// 
			// textBox4
			// 
			this->textBox4->Font = (gcnew System::Drawing::Font(L"Montserrat", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox4->Location = System::Drawing::Point(427, 257);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(319, 33);
			this->textBox4->TabIndex = 19;
			// 
			// textBox5
			// 
			this->textBox5->Font = (gcnew System::Drawing::Font(L"Montserrat", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox5->Location = System::Drawing::Point(427, 296);
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(319, 33);
			this->textBox5->TabIndex = 20;
			// 
			// textBox6
			// 
			this->textBox6->Font = (gcnew System::Drawing::Font(L"Montserrat", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox6->Location = System::Drawing::Point(427, 335);
			this->textBox6->Name = L"textBox6";
			this->textBox6->Size = System::Drawing::Size(319, 33);
			this->textBox6->TabIndex = 21;
			// 
			// textBox7
			// 
			this->textBox7->Font = (gcnew System::Drawing::Font(L"Montserrat", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox7->Location = System::Drawing::Point(427, 374);
			this->textBox7->Name = L"textBox7";
			this->textBox7->Size = System::Drawing::Size(319, 33);
			this->textBox7->TabIndex = 22;
			// 
			// textBox8
			// 
			this->textBox8->Font = (gcnew System::Drawing::Font(L"Montserrat", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox8->Location = System::Drawing::Point(427, 413);
			this->textBox8->Name = L"textBox8";
			this->textBox8->Size = System::Drawing::Size(319, 33);
			this->textBox8->TabIndex = 23;
			// 
			// textBox9
			// 
			this->textBox9->Font = (gcnew System::Drawing::Font(L"Montserrat", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox9->Location = System::Drawing::Point(427, 101);
			this->textBox9->Name = L"textBox9";
			this->textBox9->Size = System::Drawing::Size(319, 33);
			this->textBox9->TabIndex = 24;
			// 
			// MyFormArticle
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1172, 519);
			this->Controls->Add(this->textBox9);
			this->Controls->Add(this->textBox8);
			this->Controls->Add(this->textBox7);
			this->Controls->Add(this->textBox6);
			this->Controls->Add(this->textBox5);
			this->Controls->Add(this->textBox4);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->dataGridView1);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->menuStrip1);
			this->MainMenuStrip = this->menuStrip1;
			this->Name = L"MyFormArticle";
			this->Text = L"Gestion des Articles";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->bindingSource1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void acceuilToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {

		/*this->Hide();
		FormsPOO::MyFormMain^ objMain3 = gcnew MyFormMain();
		objMain3->ShowDialog();*/
	}
};
}