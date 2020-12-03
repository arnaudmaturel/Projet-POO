#pragma once

#include "MyFormPaiement.h"
#include "MyFormArticleCom.h"

namespace FormsPOOcommande {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace MySql::Data::MySqlClient;

	/// <summary>
	/// Description résumée de MyFormCommande
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
		/// Nettoyage des ressources utilisées.
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

	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label5;




	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::TextBox^ textBox4;





	private: System::Windows::Forms::BindingSource^ bindingSource1;
	private: System::Windows::Forms::DataGridView^ dataGridView1;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::Button^ button6;
	private: System::Windows::Forms::Button^ button7;
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
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->bindingSource1 = (gcnew System::Windows::Forms::BindingSource(this->components));
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->button7 = (gcnew System::Windows::Forms::Button());
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
			this->label2->Text = L"Numéro client :";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Montserrat", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(64, 147);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(321, 33);
			this->label4->TabIndex = 3;
			this->label4->Text = L"Date livraison prévu :";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Montserrat", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->Location = System::Drawing::Point(112, 186);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(273, 33);
			this->label5->TabIndex = 4;
			this->label5->Text = L"Date commande :";
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
			// dataGridView1
			// 
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Location = System::Drawing::Point(721, 69);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->Size = System::Drawing::Size(447, 327);
			this->dataGridView1->TabIndex = 18;
			// 
			// button1
			// 
			this->button1->Font = (gcnew System::Drawing::Font(L"Montserrat", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->Location = System::Drawing::Point(12, 359);
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
			this->button2->Location = System::Drawing::Point(160, 359);
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
			this->button3->Location = System::Drawing::Point(308, 359);
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
			this->button6->Location = System::Drawing::Point(391, 252);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(130, 37);
			this->button6->TabIndex = 24;
			this->button6->Text = L"Paiement";
			this->button6->UseVisualStyleBackColor = true;
			this->button6->Click += gcnew System::EventHandler(this, &MyFormCommande::button6_Click);
			// 
			// button7
			// 
			this->button7->Font = (gcnew System::Drawing::Font(L"Montserrat", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button7->Location = System::Drawing::Point(553, 252);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(130, 37);
			this->button7->TabIndex = 25;
			this->button7->Text = L"Articles";
			this->button7->UseVisualStyleBackColor = true;
			this->button7->Click += gcnew System::EventHandler(this, &MyFormCommande::button7_Click);
			// 
			// MyFormCommande
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1180, 408);
			this->Controls->Add(this->button7);
			this->Controls->Add(this->button6);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->dataGridView1);
			this->Controls->Add(this->textBox4);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
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
			String^ date_prevu = textBox3->Text;
			String^ date_com = textBox4->Text;

				// Commande
			MySqlCommand^ cmd1 = gcnew MySqlCommand("INSERT INTO commande(ID_COMMANDE,NUMERO_CLIENT,DATE_LIVRAISON_PREVU,DATE_COMMANDE) values(" + id_com + "," + id_cli + ",'" + date_prevu + "','" + date_com + "')", con);
			MySqlDataReader^ dr1;

			con->Open();
			dr1 = cmd1->ExecuteReader();
			con->Close();

				// Concatenation
			MySqlCommand^ cmd2 = gcnew MySqlCommand("INSERT INTO concatenation VALUES((SELECT CONCAT(LEFT(client.PRENOM_CLIENT," + 2 + "),LEFT(client.NOM_CLIENT," + 2 + "),RIGHT(commande.DATE_COMMANDE," + 4 + "),LEFT(adresse.VILLE," + 3 + "),LEFT(commande.ID_COMMANDE," + 1 + ")) FROM client INNER JOIN commande ON (client.NUMERO_CLIENT = commande.NUMERO_CLIENT AND commande.ID_COMMANDE = " + id_com + ") INNER JOIN adresse ON (client.NUMERO_CLIENT = adresse.NUMERO_CLIENT_LIVRAISON))," + id_com + ")", con);
			MySqlDataReader^ dr2;

			con->Open();
			dr2 = cmd2->ExecuteReader();
			con->Close();

			// Commande
			MySqlCommand^ cmd3 = gcnew MySqlCommand("UPDATE commande SET commande.REFERENCE_COMMANDE=(SELECT REF_COM FROM concatenation WHERE concatenation.ID_COMMANDE = commande.ID_COMMANDE) WHERE commande.ID_COMMANDE=" + id_com + "", con);
			MySqlDataReader^ dr3;

			con->Open();
			dr3 = cmd3->ExecuteReader();
			MessageBox::Show("La commande a été enregistré");
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
			String^ ref_com = "UPDATE commande SET commande.REFERENCE_COMMANDE = (SELECT REF_COM FROM concatenation WHERE concatenation.ID_COMMANDE = commande.ID_COMMANDE)";
			String^ date_prevu = textBox3->Text;
			String^ date_com = textBox4->Text;

			MySqlCommand^ cmd = gcnew MySqlCommand("update commande set numero_client=" + id_cli + ",date_livraison_prevu='" + date_prevu + "',date_commande='" + date_com + "' where id_commande=" + id_com + "", con);
			MySqlDataReader^ dr;

			con->Open();
			dr = cmd->ExecuteReader();
			con->Close();

			// Concatenation
			MySqlCommand^ cmd2 = gcnew MySqlCommand("UPDATE concatenation SET REF_COM=((SELECT CONCAT(LEFT(client.PRENOM_CLIENT," + 2 + "),LEFT(client.NOM_CLIENT," + 2 + "),RIGHT(commande.DATE_COMMANDE," + 4 + "),LEFT(adresse.VILLE," + 3 + "),LEFT(commande.ID_COMMANDE," + 1 + ")) FROM client INNER JOIN commande ON (client.NUMERO_CLIENT = commande.NUMERO_CLIENT AND commande.ID_COMMANDE = " + id_com + ") INNER JOIN adresse ON (client.NUMERO_CLIENT = adresse.NUMERO_CLIENT_LIVRAISON)), WHERE ID_COMMANDE=" + id_com + ")", con);
			MySqlDataReader^ dr2;

			con->Open();
			dr2 = cmd2->ExecuteReader();
			con->Close();

			// Commande
			MySqlCommand^ cmd3 = gcnew MySqlCommand("UPDATE commande SET commande.REFERENCE_COMMANDE=(SELECT REF_COM FROM concatenation WHERE concatenation.ID_COMMANDE = commande.ID_COMMANDE) WHERE commande.ID_COMMANDE=" + id_com + "", con);
			MySqlDataReader^ dr3;

			con->Open();
			dr3 = cmd3->ExecuteReader();
			MessageBox::Show("La commande a été modifié");
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

			MySqlCommand^ cmd = gcnew MySqlCommand("delete from commande where id_commande=" + id_com + "", con);
			MySqlDataReader^ dr;

			con->Open();
			dr = cmd->ExecuteReader();
			MessageBox::Show("La commande a été supprimé");
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

			MySqlCommand^ cmd = gcnew MySqlCommand("select * from commande where id_commande=" + id_com + "", con);
			MySqlDataReader^ dr;

			con->Open();
			dr = cmd->ExecuteReader();
			while (dr->Read())
			{
				textBox2->Text = dr->GetString(1);
				textBox3->Text = dr->GetString(2);
				textBox4->Text = dr->GetString(3);
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
		   // Articles commande
	private: System::Void button7_Click(System::Object^ sender, System::EventArgs^ e) {

		FormsPOOarticleCom::MyFormArticleCom^ objArtC = gcnew FormsPOOarticleCom::MyFormArticleCom;
		objArtC->ShowDialog();
	}
};
}
