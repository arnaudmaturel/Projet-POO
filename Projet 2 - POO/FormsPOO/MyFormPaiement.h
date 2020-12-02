#pragma once

#include "MyFormMoyenPaiement.h"

namespace FormsPOOpaiement {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace MySql::Data::MySqlClient;

	/// <summary>
	/// Description résumée de MyFormPaiement
	/// </summary>
	public ref class MyFormPaiement : public System::Windows::Forms::Form
	{
	public:
		MyFormPaiement(void)
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
		~MyFormPaiement()
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
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::TextBox^ textBox4;
	private: System::Windows::Forms::TextBox^ textBox5;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::BindingSource^ bindingSource1;
	private: System::Windows::Forms::DataGridView^ dataGridView1;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::Button^ button6;
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
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->bindingSource1 = (gcnew System::Windows::Forms::BindingSource(this->components));
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button6 = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->bindingSource1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Montserrat", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(122, 80);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(209, 33);
			this->label1->TabIndex = 0;
			this->label1->Text = L"ID paiement :";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Montserrat", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(96, 119);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(235, 33);
			this->label2->TabIndex = 1;
			this->label2->Text = L"ID commande :";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Montserrat", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(84, 158);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(247, 33);
			this->label3->TabIndex = 2;
			this->label3->Text = L"Date paiement :";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Montserrat", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(29, 197);
			this->label4->Name = L"label4";
			this->label4->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->label4->Size = System::Drawing::Size(302, 33);
			this->label4->TabIndex = 3;
			this->label4->Text = L"Montant paiement :";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Montserrat", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->Location = System::Drawing::Point(15, 236);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(316, 33);
			this->label5->TabIndex = 4;
			this->label5->Text = L"ID moyen paiement :";
			// 
			// textBox1
			// 
			this->textBox1->Font = (gcnew System::Drawing::Font(L"Montserrat", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox1->Location = System::Drawing::Point(337, 80);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(273, 33);
			this->textBox1->TabIndex = 5;
			// 
			// textBox2
			// 
			this->textBox2->Font = (gcnew System::Drawing::Font(L"Montserrat", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox2->Location = System::Drawing::Point(337, 119);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(273, 33);
			this->textBox2->TabIndex = 6;
			// 
			// textBox3
			// 
			this->textBox3->Font = (gcnew System::Drawing::Font(L"Montserrat", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox3->Location = System::Drawing::Point(337, 158);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(273, 33);
			this->textBox3->TabIndex = 7;
			// 
			// textBox4
			// 
			this->textBox4->Font = (gcnew System::Drawing::Font(L"Montserrat", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox4->Location = System::Drawing::Point(337, 197);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(273, 33);
			this->textBox4->TabIndex = 8;
			// 
			// textBox5
			// 
			this->textBox5->Font = (gcnew System::Drawing::Font(L"Montserrat", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox5->Location = System::Drawing::Point(337, 236);
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(273, 33);
			this->textBox5->TabIndex = 9;
			// 
			// button1
			// 
			this->button1->Font = (gcnew System::Drawing::Font(L"Montserrat", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->Location = System::Drawing::Point(12, 396);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(141, 35);
			this->button1->TabIndex = 10;
			this->button1->Text = L"Ajouter";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyFormPaiement::button1_Click);
			// 
			// button2
			// 
			this->button2->Font = (gcnew System::Drawing::Font(L"Montserrat", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button2->Location = System::Drawing::Point(159, 396);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(141, 35);
			this->button2->TabIndex = 11;
			this->button2->Text = L"Modifier";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyFormPaiement::button2_Click);
			// 
			// button3
			// 
			this->button3->Font = (gcnew System::Drawing::Font(L"Montserrat", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button3->Location = System::Drawing::Point(306, 396);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(141, 35);
			this->button3->TabIndex = 12;
			this->button3->Text = L"Supprimer";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &MyFormPaiement::button3_Click);
			// 
			// dataGridView1
			// 
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Location = System::Drawing::Point(659, 80);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->Size = System::Drawing::Size(464, 351);
			this->dataGridView1->TabIndex = 13;
			// 
			// button4
			// 
			this->button4->Font = (gcnew System::Drawing::Font(L"Montserrat", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button4->Location = System::Drawing::Point(659, 28);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(170, 35);
			this->button4->TabIndex = 14;
			this->button4->Text = L"Chercher";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &MyFormPaiement::button4_Click);
			// 
			// button5
			// 
			this->button5->Font = (gcnew System::Drawing::Font(L"Montserrat", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button5->Location = System::Drawing::Point(835, 28);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(170, 35);
			this->button5->TabIndex = 15;
			this->button5->Text = L"Afficher tout";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &MyFormPaiement::button5_Click);
			// 
			// button6
			// 
			this->button6->Font = (gcnew System::Drawing::Font(L"Montserrat", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button6->Location = System::Drawing::Point(337, 304);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(273, 35);
			this->button6->TabIndex = 16;
			this->button6->Text = L"Moyen de paiement";
			this->button6->UseVisualStyleBackColor = true;
			this->button6->Click += gcnew System::EventHandler(this, &MyFormPaiement::button6_Click);
			// 
			// MyFormPaiement
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1135, 443);
			this->Controls->Add(this->button6);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->dataGridView1);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->textBox5);
			this->Controls->Add(this->textBox4);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Name = L"MyFormPaiement";
			this->Text = L"MyFormPaiement";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->bindingSource1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		// Insert
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {

		try
		{
			String^ constr = "Server=127.0.0.1;Uid=root;Pwd=;Database=projetpoo";
			MySqlConnection^ con = gcnew MySqlConnection(constr);

			int id_pay = Int32::Parse(textBox1->Text);
			int id_com = Int32::Parse(textBox2->Text);
			String^ date_pay = textBox3->Text;
			String^ montant_pay = textBox4->Text;
			int id_m_pay = Int32::Parse(textBox5->Text);

			MySqlCommand^ cmd1 = gcnew MySqlCommand("insert into paiement values(" + id_pay + "," + id_com + ",'" + date_pay + "','" + montant_pay + "')", con);
			MySqlDataReader^ dr1;

			con->Open();
			dr1 = cmd1->ExecuteReader();
			con->Close();

			MySqlCommand^ cmd2 = gcnew MySqlCommand("insert into utiliser values(" + id_pay + "," + id_m_pay + ")", con);
			MySqlDataReader^ dr2;

			con->Open();
			dr2 = cmd2->ExecuteReader();
			MessageBox::Show("Le moyen de paiement a été enregistré");
			con->Close();
		}
		catch (Exception^ ex)
		{
			MessageBox::Show(ex->Message);
		}
	}
		   // Update
	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {

		try
		{
			String^ constr = "Server=127.0.0.1;Uid=root;Pwd=;Database=projetpoo";
			MySqlConnection^ con = gcnew MySqlConnection(constr);

			int id_pay = Int32::Parse(textBox1->Text);
			int id_com = Int32::Parse(textBox2->Text);
			String^ date_pay = textBox3->Text;
			String^ montant_pay = textBox4->Text;
			int id_m_pay = Int32::Parse(textBox5->Text);

			MySqlCommand^ cmd1 = gcnew MySqlCommand("update paiement set id_commande=" + id_com + ",date_paiement='" + date_pay + "',montant_paiement='" + montant_pay + "' where id_paiement=" + id_pay + "", con);
			MySqlDataReader^ dr1;

			con->Open();
			dr1 = cmd1->ExecuteReader();
			con->Close();

			MySqlCommand^ cmd2 = gcnew MySqlCommand("update utiliser set id_moyen_paiement=" + id_m_pay + " where id_paiement=" + id_pay + "", con);
			MySqlDataReader^ dr2;

			con->Open();
			dr2 = cmd2->ExecuteReader();
			MessageBox::Show("Le moyen de paiement a été enregistré");
			con->Close();
		}
		catch (Exception^ ex)
		{
			MessageBox::Show(ex->Message);
		}
	}
		   // Delete
	private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {

		try
		{
			String^ constr = "Server=127.0.0.1;Uid=root;Pwd=;Database=projetpoo";
			MySqlConnection^ con = gcnew MySqlConnection(constr);

			int id_pay = Int32::Parse(textBox1->Text);

			MySqlCommand^ cmd = gcnew MySqlCommand("delete from paiement where id_paiement=" + id_pay + "", con);
			MySqlDataReader^ dr;

			con->Open();
			dr = cmd->ExecuteReader();
			con->Close();
		}
		catch (Exception^ ex)
		{
			MessageBox::Show(ex->Message);
		}
	}
		   // Go
	private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {

		try
		{
			String^ constr = "Server=127.0.0.1;Uid=root;Pwd=;Database=projetpoo";
			MySqlConnection^ con = gcnew MySqlConnection(constr);

			int id_pay = Int32::Parse(textBox1->Text);

			MySqlCommand^ cmd1 = gcnew MySqlCommand("select * from paiement where id_paiement=" + id_pay + "", con);
			MySqlDataReader^ dr1;

			con->Open();
			dr1 = cmd1->ExecuteReader();
			while (dr1->Read())
			{
				textBox2->Text = dr1->GetString(1);
				textBox3->Text = dr1->GetString(2);
				textBox4->Text = dr1->GetString(3);
			}
			con->Close();

			MySqlCommand^ cmd2 = gcnew MySqlCommand("select * from utiliser where id_paiement=" + id_pay + "", con);
			MySqlDataReader^ dr2;

			con->Open();
			dr2 = cmd2->ExecuteReader();
			while (dr2->Read())
			{
				textBox5->Text = dr2->GetString(1);
			}
			con->Close();
		}
		catch (Exception^ ex)
		{
			MessageBox::Show(ex->Message);
		}
	}
		   // Fetch
	private: System::Void button5_Click(System::Object^ sender, System::EventArgs^ e) {

		try
		{
			String^ constr = "Server=127.0.0.1;Uid=root;Pwd=;Database=projetpoo";
			MySqlConnection^ con = gcnew MySqlConnection(constr);
			MySqlDataAdapter^ sda = gcnew MySqlDataAdapter("select paiement.id_paiement, paiement.id_commande, paiement.date_paiement, paiement.montant_paiement, utiliser.id_moyen_paiement, moyen_de_paiement.moyen_paiement from paiement inner join utiliser on paiement.id_paiement = utiliser.id_paiement inner join moyen_de_paiement on utiliser.id_moyen_paiement = moyen_de_paiement.id_moyen_paiement", con);
			DataTable^ dt = gcnew DataTable();

			sda->Fill(dt);

			bindingSource1->DataSource = dt;
			dataGridView1->DataSource = bindingSource1;
		}
		catch (Exception^ ex)
		{
			MessageBox::Show(ex->Message);
		}
	}
		   // Moyen de paiement
	private: System::Void button6_Click(System::Object^ sender, System::EventArgs^ e) {

		FormsPOOpaiementM::MyFormMoyenPaiement^ objMpay = gcnew FormsPOOpaiementM::MyFormMoyenPaiement;
		objMpay->ShowDialog();
	}
};
}
