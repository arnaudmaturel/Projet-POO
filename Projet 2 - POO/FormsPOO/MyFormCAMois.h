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
	/// Description résumée de MyFormCAMois
	/// </summary>
	public ref class MyFormCAMois : public System::Windows::Forms::Form
	{
	public:
		MyFormCAMois(void)
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
		~MyFormCAMois()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	protected:
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;

	private: System::Windows::Forms::TextBox^ textBox1;

	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::BindingSource^ bindingSource1;
	private: System::Windows::Forms::ListBox^ listBox1;

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
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->bindingSource1 = (gcnew System::Windows::Forms::BindingSource(this->components));
			this->listBox1 = (gcnew System::Windows::Forms::ListBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->bindingSource1))->BeginInit();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(351, 33);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(338, 32);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Chiffre d\'affaire du mois";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(342, 170);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(96, 32);
			this->label2->TabIndex = 1;
			this->label2->Text = L"Mois: ";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(342, 236);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(120, 32);
			this->label3->TabIndex = 2;
			this->label3->Text = L"Année: ";
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(537, 246);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(199, 22);
			this->textBox1->TabIndex = 4;
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(454, 331);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(163, 32);
			this->button1->TabIndex = 6;
			this->button1->Text = L"Calculer";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyFormCAMois::button1_Click);
			// 
			// listBox1
			// 
			this->listBox1->FormattingEnabled = true;
			this->listBox1->ItemHeight = 16;
			this->listBox1->Items->AddRange(gcnew cli::array< System::Object^  >(12) {
				L"Janvier", L"Février", L"Mars", L"Avril", L"Mai",
					L"Juin", L"Juillet", L"Août", L"Septembre", L"Octobre", L"Novembre", L"Décembre"
			});
			this->listBox1->Location = System::Drawing::Point(533, 170);
			this->listBox1->Name = L"listBox1";
			this->listBox1->Size = System::Drawing::Size(203, 20);
			this->listBox1->TabIndex = 7;
			// 
			// MyFormCAMois
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1034, 557);
			this->Controls->Add(this->listBox1);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Name = L"MyFormCAMois";
			this->Text = L"MyFormCAMois";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->bindingSource1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		try {
			String^ constr = "Server=127.0.0.1;Uid=root;Pwd=;Database=projetpoo";
			MySqlConnection^ con = gcnew MySqlConnection(constr);

			int Year = Int32::Parse(textBox1->/**/);
			int Month =;

			//requête: 
			if (Month == " ")
			{

			}
			MySqlCommand^ cmd = gcnew MySqlCommand("SELECT SUM(paiement.MONTANT_PAIEMENT) AS ChiffeDAffaire FROM paiement WHERE paiement.DATE_PAIEMENT BETWEEN"+/*AAAA+"-"+MM*/+"-"+DayB+"AND"AAAA"+"-"+"MM"-"+ DayE, con);
			MySqlDataReader^ dr;

			con->Open();
			dr = cmd->ExecuteReader();
			//MessageBox::Show(contenu);
			con->Close();
		}
	}
};
}
