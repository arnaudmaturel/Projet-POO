#pragma once

#include "MyFormPaiement.h"

namespace FormsPOOcommande {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace MySql::Data::MySqlClient;

	/// <summary>
	/// Description r�sum�e de MyFormCommande
	/// </summary>
	public ref class MyFormCommande : public System::Windows::Forms::Form
	{
	public:
		MyFormCommande(void)
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
		~MyFormCommande()
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
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label7;
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
	private: System::Windows::Forms::BindingSource^ bindingSource1;
	private: System::Windows::Forms::DataGridView^ dataGridView1;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::Button^ button6;
	private: System::ComponentModel::IContainer^ components;

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
			this->bindingSource1 = (gcnew System::Windows::Forms::BindingSource(this->components));
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
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
			this->label1->Location = System::Drawing::Point(322, 69);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(63, 33);
			this->label1->TabIndex = 0;
			this->label1->Text = L"ID :";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Montserrat", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(145, 108);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(240, 33);
			this->label2->TabIndex = 1;
			this->label2->Text = L"Num�ro client :";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Montserrat", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(30, 147);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(355, 33);
			this->label3->TabIndex = 2;
			this->label3->Text = L"R�f�rence commande :";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Montserrat", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(64, 186);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(321, 33);
			this->label4->TabIndex = 3;
			this->label4->Text = L"Date livraison pr�vu :";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Montserrat", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->Location = System::Drawing::Point(112, 225);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(273, 33);
			this->label5->TabIndex = 4;
			this->label5->Text = L"Date commande :";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Montserrat", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->Location = System::Drawing::Point(245, 264);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(140, 33);
			this->label6->TabIndex = 5;
			this->label6->Text = L"Remise :";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Montserrat", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label7->Location = System::Drawing::Point(175, 303);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(210, 33);
			this->label7->TabIndex = 6;
			this->label7->Text = L"Prix total HT :";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Font = (gcnew System::Drawing::Font(L"Montserrat", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label8->Location = System::Drawing::Point(142, 342);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(243, 33);
			this->label8->TabIndex = 7;
			this->label8->Text = L"Co�t total TVA :";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Font = (gcnew System::Drawing::Font(L"Montserrat", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label9->Location = System::Drawing::Point(159, 381);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(226, 33);
			this->label9->TabIndex = 8;
			this->label9->Text = L"Prix total TTC :";
			// 
			// textBox1
			// 
			this->textBox1->Font = (gcnew System::Drawing::Font(L"Montserrat", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox1->Location = System::Drawing::Point(391, 69);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(292, 33);
			this->textBox1->TabIndex = 9;
			// 
			// textBox2
			// 
			this->textBox2->Font = (gcnew System::Drawing::Font(L"Montserrat", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox2->Location = System::Drawing::Point(391, 108);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(292, 33);
			this->textBox2->TabIndex = 10;
			// 
			// textBox3
			// 
			this->textBox3->Font = (gcnew System::Drawing::Font(L"Montserrat", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox3->Location = System::Drawing::Point(391, 147);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(292, 33);
			this->textBox3->TabIndex = 11;
			// 
			// textBox4
			// 
			this->textBox4->Font = (gcnew System::Drawing::Font(L"Montserrat", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox4->Location = System::Drawing::Point(391, 186);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(292, 33);
			this->textBox4->TabIndex = 12;
			// 
			// textBox5
			// 
			this->textBox5->Font = (gcnew System::Drawing::Font(L"Montserrat", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox5->Location = System::Drawing::Point(391, 225);
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(292, 33);
			this->textBox5->TabIndex = 13;
			// 
			// textBox6
			// 
			this->textBox6->Font = (gcnew System::Drawing::Font(L"Montserrat", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox6->Location = System::Drawing::Point(391, 264);
			this->textBox6->Name = L"textBox6";
			this->textBox6->Size = System::Drawing::Size(292, 33);
			this->textBox6->TabIndex = 14;
			// 
			// textBox7
			// 
			this->textBox7->Font = (gcnew System::Drawing::Font(L"Montserrat", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox7->Location = System::Drawing::Point(391, 303);
			this->textBox7->Name = L"textBox7";
			this->textBox7->Size = System::Drawing::Size(292, 33);
			this->textBox7->TabIndex = 15;
			// 
			// textBox8
			// 
			this->textBox8->Font = (gcnew System::Drawing::Font(L"Montserrat", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox8->Location = System::Drawing::Point(391, 342);
			this->textBox8->Name = L"textBox8";
			this->textBox8->Size = System::Drawing::Size(292, 33);
			this->textBox8->TabIndex = 16;
			// 
			// textBox9
			// 
			this->textBox9->Font = (gcnew System::Drawing::Font(L"Montserrat", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox9->Location = System::Drawing::Point(391, 381);
			this->textBox9->Name = L"textBox9";
			this->textBox9->Size = System::Drawing::Size(292, 33);
			this->textBox9->TabIndex = 17;
			// 
			// dataGridView1
			// 
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Location = System::Drawing::Point(721, 69);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->Size = System::Drawing::Size(447, 489);
			this->dataGridView1->TabIndex = 18;
			// 
			// button1
			// 
			this->button1->Font = (gcnew System::Drawing::Font(L"Montserrat", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->Location = System::Drawing::Point(12, 521);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(142, 37);
			this->button1->TabIndex = 19;
			this->button1->Text = L"Ajouter";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyFormCommande::button1_Click);
			// 
			// button2
			// 
			this->button2->Font = (gcnew System::Drawing::Font(L"Montserrat", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button2->Location = System::Drawing::Point(160, 521);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(142, 37);
			this->button2->TabIndex = 20;
			this->button2->Text = L"Modifier";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyFormCommande::button2_Click);
			// 
			// button3
			// 
			this->button3->Font = (gcnew System::Drawing::Font(L"Montserrat", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button3->Location = System::Drawing::Point(308, 521);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(142, 37);
			this->button3->TabIndex = 21;
			this->button3->Text = L"Supprimer";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &MyFormCommande::button3_Click);
			// 
			// button4
			// 
			this->button4->Font = (gcnew System::Drawing::Font(L"Montserrat", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button4->Location = System::Drawing::Point(721, 26);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(174, 37);
			this->button4->TabIndex = 22;
			this->button4->Text = L"Chercher";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &MyFormCommande::button4_Click);
			// 
			// button5
			// 
			this->button5->Font = (gcnew System::Drawing::Font(L"Montserrat", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button5->Location = System::Drawing::Point(901, 26);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(174, 37);
			this->button5->TabIndex = 23;
			this->button5->Text = L"Tout afficher";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &MyFormCommande::button5_Click);
			// 
			// button6
			// 
			this->button6->Font = (gcnew System::Drawing::Font(L"Montserrat", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button6->Location = System::Drawing::Point(391, 447);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(292, 37);
			this->button6->TabIndex = 24;
			this->button6->Text = L"Paiement";
			this->button6->UseVisualStyleBackColor = true;
			this->button6->Click += gcnew System::EventHandler(this, &MyFormCommande::button6_Click);
			// 
			// MyFormCommande
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1180, 570);
			this->Controls->Add(this->button6);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->dataGridView1);
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
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Name = L"MyFormCommande";
			this->Text = L"MyFormCommande";
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

			int id_com = Int32::Parse(textBox1->Text);
			int id_cli = Int32::Parse(textBox2->Text);
			String^ ref_com = textBox3->Text;
			String^ date_prevu = textBox4->Text;
			String^ date_com = textBox5->Text;
			String^ remise = textBox6->Text;
			String^ prix_ht = textBox7->Text;
			String^ cout_tva = textBox8->Text;
			String^ prix_ttc = textBox9->Text;


			MySqlCommand^ cmd = gcnew MySqlCommand("insert into commande values(" + id_com + "," + id_cli + ",'" + ref_com + "','" + date_prevu + "','" + date_com + "','" + remise + "','" + prix_ht + "','" + cout_tva + "','" + prix_ttc + "')", con);
			MySqlDataReader^ dr;

			con->Open();
			dr = cmd->ExecuteReader();
			MessageBox::Show("La commande a �t� enregistr�");
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

			int id_com = Int32::Parse(textBox1->Text);
			int id_cli = Int32::Parse(textBox2->Text);
			String^ ref_com = textBox3->Text;
			String^ date_prevu = textBox4->Text;
			String^ date_com = textBox5->Text;
			String^ remise = textBox6->Text;
			String^ prix_ht = textBox7->Text;
			String^ cout_tva = textBox8->Text;
			String^ prix_ttc = textBox9->Text;


			MySqlCommand^ cmd = gcnew MySqlCommand("update commande set numero_client=" + id_cli + ",reference_commande='" + ref_com + "',date_livraison_prevu='" + date_prevu + "',date_commande='" + date_com + "',remise_panier='" + remise + "',prix_total_ht='" + prix_ht + "',cout_total_tva='" + cout_tva + "',prix_total_ttc='" + prix_ttc + "' where id_commande=" + id_com + ")", con);
			MySqlDataReader^ dr;

			con->Open();
			dr = cmd->ExecuteReader();
			MessageBox::Show("La commande a �t� modifi�");
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

			int id_com = Int32::Parse(textBox1->Text);

			MySqlCommand^ cmd = gcnew MySqlCommand("delete from commande where id_commande=" + id_com + ")", con);
			MySqlDataReader^ dr;

			con->Open();
			dr = cmd->ExecuteReader();
			MessageBox::Show("La commande a �t� supprim�");
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

			int id_com = Int32::Parse(textBox1->Text);

			MySqlCommand^ cmd = gcnew MySqlCommand("select * from commande where id_commande=" + id_com + ")", con);
			MySqlDataReader^ dr;

			con->Open();
			dr = cmd->ExecuteReader();
			while (dr->Read())
			{
				textBox2->Text = dr->GetString(1);
				textBox3->Text = dr->GetString(2);
				textBox4->Text = dr->GetString(3);
				textBox5->Text = dr->GetString(4);
				textBox6->Text = dr->GetString(5);
				textBox7->Text = dr->GetString(6);
				textBox8->Text = dr->GetString(7);
				textBox9->Text = dr->GetString(8);
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
			MySqlDataAdapter^ sda = gcnew MySqlDataAdapter("select id_commande,reference_commande,date_livraison_prevu,date_commande,remise_panier,prix_total_ht,cout_total_tva,prix_total_ttc,client.numero_client,client.nom_client,client.prenom_client from commande inner join client where commande.numero_client=client.numero_client", con);
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
		   // Paiement
	private: System::Void button6_Click(System::Object^ sender, System::EventArgs^ e) {

		FormsPOOpaiement::MyFormPaiement^ objPai = gcnew FormsPOOpaiement::MyFormPaiement;
		objPai->ShowDialog();
	}
};
}
