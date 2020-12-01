#pragma once

namespace FormsPOO {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Description résumée de MyformMontant
	/// </summary>
	public ref class MyformMontant : public System::Windows::Forms::Form
	{
	public:
		MyformMontant(void)
		{
			InitializeComponent();
			//
			//TODO: ajoutez ici le code du constructeur
			//
		}

	protected:
		/// <summary>
		/// Nettoyage des ressources utilisées.
		/// </summary>
		~MyformMontant()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	protected:
	private: System::Windows::Forms::Label^ Nom_client;
	private: System::Windows::Forms::Label^ Prenom_client;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::DataGridView^ dataGridView1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::TextBox^ textBox3;

	private:
		/// <summary>
		/// Variable nécessaire au concepteur.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Méthode requise pour la prise en charge du concepteur - ne modifiez pas
		/// le contenu de cette méthode avec l'éditeur de code.
		/// </summary>
		void InitializeComponent(void)
		{
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->Nom_client = (gcnew System::Windows::Forms::Label());
			this->Prenom_client = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(210, 39);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(280, 32);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Montant des achats";
			// 
			// Nom_client
			// 
			this->Nom_client->AutoSize = true;
			this->Nom_client->Location = System::Drawing::Point(21, 149);
			this->Nom_client->Name = L"Nom_client";
			this->Nom_client->Size = System::Drawing::Size(74, 17);
			this->Nom_client->TabIndex = 1;
			this->Nom_client->Text = L"Nom client";
			// 
			// Prenom_client
			// 
			this->Prenom_client->AutoSize = true;
			this->Prenom_client->Location = System::Drawing::Point(12, 195);
			this->Prenom_client->Name = L"Prenom_client";
			this->Prenom_client->Size = System::Drawing::Size(94, 17);
			this->Prenom_client->TabIndex = 2;
			this->Prenom_client->Text = L"Prénom client";
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(130, 146);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(209, 22);
			this->textBox1->TabIndex = 3;
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(130, 195);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(209, 22);
			this->textBox2->TabIndex = 4;
			// 
			// dataGridView1
			// 
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Location = System::Drawing::Point(362, 146);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->RowHeadersWidth = 51;
			this->dataGridView1->RowTemplate->Height = 24;
			this->dataGridView1->Size = System::Drawing::Size(449, 268);
			this->dataGridView1->TabIndex = 5;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(69, 285);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(171, 17);
			this->label2->TabIndex = 6;
			this->label2->Text = L"Montant total des achats: ";
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(72, 330);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(183, 22);
			this->textBox3->TabIndex = 7;
			this->textBox3->Text = L"\?\?";
			// 
			// MyformMontant
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(823, 524);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->dataGridView1);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->Prenom_client);
			this->Controls->Add(this->Nom_client);
			this->Controls->Add(this->label1);
			this->Name = L"MyformMontant";
			this->Text = L"MyformMontant";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	};
}
