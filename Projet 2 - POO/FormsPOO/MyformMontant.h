#pragma once

namespace FormsPOO {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace MySql::Data::MySqlClient;

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
	private: System::Windows::Forms::BindingSource^ bindingSource1;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::Label^ label2;
	private: System::ComponentModel::IContainer^ components;



	private:
		/// <summary>
		/// Variable nécessaire au concepteur.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Méthode requise pour la prise en charge du concepteur - ne modifiez pas
		/// le contenu de cette méthode avec l'éditeur de code.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->Nom_client = (gcnew System::Windows::Forms::Label());
			this->Prenom_client = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->bindingSource1 = (gcnew System::Windows::Forms::BindingSource(this->components));
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->bindingSource1))->BeginInit();
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
			this->Nom_client->Location = System::Drawing::Point(32, 127);
			this->Nom_client->Name = L"Nom_client";
			this->Nom_client->Size = System::Drawing::Size(74, 17);
			this->Nom_client->TabIndex = 1;
			this->Nom_client->Text = L"Nom client";
			// 
			// Prenom_client
			// 
			this->Prenom_client->AutoSize = true;
			this->Prenom_client->Location = System::Drawing::Point(12, 181);
			this->Prenom_client->Name = L"Prenom_client";
			this->Prenom_client->Size = System::Drawing::Size(94, 17);
			this->Prenom_client->TabIndex = 2;
			this->Prenom_client->Text = L"Prénom client";
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(130, 127);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(209, 22);
			this->textBox1->TabIndex = 3;
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(130, 176);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(209, 22);
			this->textBox2->TabIndex = 4;
			// 
			// dataGridView1
			// 
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Location = System::Drawing::Point(362, 103);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->RowHeadersWidth = 51;
			this->dataGridView1->RowTemplate->Height = 24;
			this->dataGridView1->Size = System::Drawing::Size(449, 268);
			this->dataGridView1->TabIndex = 5;
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(36, 266);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(136, 35);
			this->button1->TabIndex = 6;
			this->button1->Text = L"Rechercher";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyformMontant::button1_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(188, 266);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(142, 34);
			this->button2->TabIndex = 7;
			this->button2->Text = L"Calculer";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyformMontant::button2_Click);
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(130, 225);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(208, 22);
			this->textBox3->TabIndex = 8;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(85, 228);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(21, 17);
			this->label2->TabIndex = 9;
			this->label2->Text = L"ID";
			// 
			// MyformMontant
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(823, 524);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->dataGridView1);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->Prenom_client);
			this->Controls->Add(this->Nom_client);
			this->Controls->Add(this->label1);
			this->Name = L"MyformMontant";
			this->Text = L"MyformMontant";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->bindingSource1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		String^ ID_Client; 
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		String^ NomClient = textBox1->Text;
		String^ constr = "Server=127.0.0.1;Uid=root;Pwd=;Database=projetpoo";
		MySqlConnection^ con = gcnew MySqlConnection(constr);
		MySqlCommand^ cmd = gcnew MySqlCommand("SELECT * FROM `client` WHERE `NOM_CLIENT`='"+NomClient+"'", con);
		con->Open();
		MySqlDataReader^ dr = cmd->ExecuteReader();
		while (dr->Read()){
			textBox2->Text = dr->GetString(2);
			ID_Client = dr->GetString(0);
			textBox3->Text = dr->GetString(0);
		}
		con->Close();
	}
	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
		String^ constr = "Server=127.0.0.1;Uid=root;Pwd=;Database=projetpoo";
		MySqlConnection^ con = gcnew MySqlConnection(constr);

		try {
			MySqlDataAdapter^ sda = gcnew MySqlDataAdapter("SELECT SUM(commande.PRIX_TOTAL_TTC) AS MontantTotalDesAchats FROM commande WHERE commande.NUMERO_CLIENT =" + ID_Client, con);
			DataTable^ dt = gcnew DataTable();
			sda->Fill(dt);
			bindingSource1->DataSource = dt;
			dataGridView1->DataSource = bindingSource1;
		}
		catch (Exception^ ex) {
			MessageBox::Show(ex->Message);
		}
	}
};
}
