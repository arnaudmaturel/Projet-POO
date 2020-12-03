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
	/// Description r�sum�e de MyFormTopMV
	/// </summary>
	public ref class MyFormTopMV : public System::Windows::Forms::Form
	{
	public:
		MyFormTopMV(void)
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
		~MyFormTopMV()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::DataGridView^ dataGridView1;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::BindingSource^ bindingSource1;
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
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->bindingSource1 = (gcnew System::Windows::Forms::BindingSource(this->components));
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->bindingSource1))->BeginInit();
			this->SuspendLayout();
			// 
			// dataGridView1
			// 
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Location = System::Drawing::Point(144, 72);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->RowHeadersWidth = 51;
			this->dataGridView1->RowTemplate->Height = 24;
			this->dataGridView1->Size = System::Drawing::Size(530, 358);
			this->dataGridView1->TabIndex = 0;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(215, 24);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(413, 32);
			this->label1->TabIndex = 1;
			this->label1->Text = L"Top 10 des meilleures ventes";
			// 
			// button1
			// 
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->Location = System::Drawing::Point(249, 453);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(321, 36);
			this->button1->TabIndex = 2;
			this->button1->Text = L"Afficher";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyFormTopMV::button1_Click);
			// 
			// MyFormTopMV
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(854, 511);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->dataGridView1);
			this->Name = L"MyFormTopMV";
			this->Text = L"MyFormTopMV";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->bindingSource1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		
		try {
			String^ constr = "Server=127.0.0.1;Uid=root;Pwd=;Database=projetpoo";
			MySqlConnection^ con = gcnew MySqlConnection(constr);
			MySqlCommand^ cmd = gcnew MySqlCommand("SELECT article.DESIGNATION AS Top10DesPlusVendus FROM article, integrer WHERE article.REFERENCE_ARTICLE = integrer.REFERENCE_ARTICLE LIMIT 10;", con);
			MySqlDataReader^ dr;

			con->Open();
			dr = cmd->ExecuteReader();
			con->Close();
		}
		catch (Exception^ ex) {
			MessageBox::Show(ex->Message);
		}
	}
	};
}

/*SELECT article.DESIGNATION AS Top10DesPlusVendus FROM article, integrer WHERE article.REFERENCE_ARTICLE = integrer.REFERENCE_ARTICLE LIMIT 10;*/

/*
MySqlCommand^ cmd1 = gcnew MySqlCommand("insert request", con);
			MySqlDataReader^ dr1;

			con->Open();
			dr1 = cmd1->ExecuteReader();
			con->Close()*/