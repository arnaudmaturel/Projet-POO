#pragma once

namespace FormsPOOadresse {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace MySql::Data::MySqlClient;


	/// <summary>
	/// Description résumée de MyFormAdresse
	/// </summary>
	public ref class MyFormAdresse : public System::Windows::Forms::Form
	{
	public:
		MyFormAdresse(void)
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
		~MyFormAdresse()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::Button^ button6;
	private: System::Windows::Forms::BindingSource^ bindingSource1;
	private: System::Windows::Forms::DataGridView^ dataGridView1;
	private: System::Windows::Forms::TextBox^ textBox4;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Button^ button7;
	private: System::Windows::Forms::Button^ button8;
	private: System::Windows::Forms::TextBox^ textBox5;
	private: System::Windows::Forms::Label^ label5;


	private: System::ComponentModel::IContainer^ components;
	protected:

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
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->bindingSource1 = (gcnew System::Windows::Forms::BindingSource(this->components));
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->button8 = (gcnew System::Windows::Forms::Button());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->bindingSource1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->Font = (gcnew System::Drawing::Font(L"Montserrat", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->Location = System::Drawing::Point(12, 330);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(281, 61);
			this->button1->TabIndex = 0;
			this->button1->Text = L"Ajouter une adresse de livraison";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyFormAdresse::button1_Click);
			// 
			// button2
			// 
			this->button2->Font = (gcnew System::Drawing::Font(L"Montserrat", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button2->Location = System::Drawing::Point(299, 330);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(281, 61);
			this->button2->TabIndex = 1;
			this->button2->Text = L"Ajouter une adresse de facturation";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyFormAdresse::button2_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Montserrat", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(135, 153);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(94, 33);
			this->label1->TabIndex = 2;
			this->label1->Text = L"Ville :";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Montserrat", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(79, 195);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(150, 33);
			this->label2->TabIndex = 3;
			this->label2->Text = L"Adresse :";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Montserrat", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(157, 234);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(72, 33);
			this->label3->TabIndex = 4;
			this->label3->Text = L"CP :";
			// 
			// textBox1
			// 
			this->textBox1->Font = (gcnew System::Drawing::Font(L"Montserrat", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox1->Location = System::Drawing::Point(235, 75);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(281, 33);
			this->textBox1->TabIndex = 5;
			// 
			// textBox2
			// 
			this->textBox2->Font = (gcnew System::Drawing::Font(L"Montserrat", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox2->Location = System::Drawing::Point(235, 114);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(281, 33);
			this->textBox2->TabIndex = 6;
			// 
			// textBox3
			// 
			this->textBox3->Font = (gcnew System::Drawing::Font(L"Montserrat", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox3->Location = System::Drawing::Point(235, 153);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(281, 33);
			this->textBox3->TabIndex = 7;
			// 
			// button3
			// 
			this->button3->Font = (gcnew System::Drawing::Font(L"Montserrat", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button3->Location = System::Drawing::Point(12, 397);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(281, 61);
			this->button3->TabIndex = 8;
			this->button3->Text = L"Modifier une adresse de livraison";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &MyFormAdresse::button3_Click);
			// 
			// button4
			// 
			this->button4->Font = (gcnew System::Drawing::Font(L"Montserrat", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button4->Location = System::Drawing::Point(299, 397);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(281, 61);
			this->button4->TabIndex = 9;
			this->button4->Text = L"Modifier une adresse de facturation";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &MyFormAdresse::button4_Click);
			// 
			// button5
			// 
			this->button5->Font = (gcnew System::Drawing::Font(L"Montserrat", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button5->Location = System::Drawing::Point(12, 464);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(281, 61);
			this->button5->TabIndex = 10;
			this->button5->Text = L"Supprimer une adresse de livraison";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &MyFormAdresse::button5_Click);
			// 
			// button6
			// 
			this->button6->Font = (gcnew System::Drawing::Font(L"Montserrat", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button6->Location = System::Drawing::Point(299, 464);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(281, 61);
			this->button6->TabIndex = 11;
			this->button6->Text = L"Supprimer une adresse de facturation";
			this->button6->UseVisualStyleBackColor = true;
			this->button6->Click += gcnew System::EventHandler(this, &MyFormAdresse::button6_Click);
			// 
			// dataGridView1
			// 
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Location = System::Drawing::Point(609, 78);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->Size = System::Drawing::Size(376, 447);
			this->dataGridView1->TabIndex = 12;
			// 
			// textBox4
			// 
			this->textBox4->Font = (gcnew System::Drawing::Font(L"Montserrat", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox4->Location = System::Drawing::Point(235, 195);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(281, 33);
			this->textBox4->TabIndex = 13;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Montserrat", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(77, 114);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(152, 33);
			this->label4->TabIndex = 14;
			this->label4->Text = L"ID client :";
			// 
			// button7
			// 
			this->button7->Font = (gcnew System::Drawing::Font(L"Montserrat", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button7->Location = System::Drawing::Point(609, 37);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(179, 35);
			this->button7->TabIndex = 15;
			this->button7->Text = L"Chercher";
			this->button7->UseVisualStyleBackColor = true;
			this->button7->Click += gcnew System::EventHandler(this, &MyFormAdresse::button7_Click);
			// 
			// button8
			// 
			this->button8->Font = (gcnew System::Drawing::Font(L"Montserrat", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button8->Location = System::Drawing::Point(806, 37);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(179, 35);
			this->button8->TabIndex = 16;
			this->button8->Text = L"Tout afficher";
			this->button8->UseVisualStyleBackColor = true;
			this->button8->Click += gcnew System::EventHandler(this, &MyFormAdresse::button8_Click);
			// 
			// textBox5
			// 
			this->textBox5->Font = (gcnew System::Drawing::Font(L"Montserrat", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox5->Location = System::Drawing::Point(235, 234);
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(281, 33);
			this->textBox5->TabIndex = 17;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Montserrat", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->Location = System::Drawing::Point(44, 75);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(185, 33);
			this->label5->TabIndex = 18;
			this->label5->Text = L"ID adresse :";
			// 
			// MyFormAdresse
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1004, 537);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->textBox5);
			this->Controls->Add(this->button8);
			this->Controls->Add(this->button7);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->textBox4);
			this->Controls->Add(this->dataGridView1);
			this->Controls->Add(this->button6);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Name = L"MyFormAdresse";
			this->Text = L"MyFormAdresse";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->bindingSource1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		// Go
	private: System::Void button7_Click(System::Object^ sender, System::EventArgs^ e) {

		try
		{
			String^ constr = "Server=127.0.0.1;Uid=root;Pwd=;Database=projetpoo";
			MySqlConnection^ con = gcnew MySqlConnection(constr);

			int id_cli = Int32::Parse(textBox1->Text);

			MySqlCommand^ cmd1 = gcnew MySqlCommand("select * from adresse WHERE ID_ADRESSE=" + id_cli + "", con);
			MySqlDataReader^ dr1;

			con->Open();
			dr1 = cmd1->ExecuteReader();
			while (dr1->Read())
			{
				//textBox2->Text = dr1->GetString(1);
				textBox3->Text = dr1->GetString(3);
				textBox4->Text = dr1->GetString(4);
				textBox5->Text = dr1->GetString(5);
			}
			con->Close();

			MySqlCommand^ cmd2 = gcnew MySqlCommand("select NUMERO_CLIENT from client inner join adresse WHERE CLIENT.NUMERO_CLIENT=ADRESSE.NUMERO_CLIENT_LIVRAISON or CLIENT.NUMERO_CLIENT=ADRESSE.NUMERO_CLIENT_FACTURATION", con);
			MySqlDataReader^ dr2;

			con->Open();
			dr2 = cmd2->ExecuteReader();
			while (dr2->Read())
			{
				textBox2->Text = dr2->GetString(0);
			}
			con->Close();

		}
		catch (Exception^ ex)
		{
			MessageBox::Show(ex->Message);
		}
	}
		// Fetch
	private: System::Void button8_Click(System::Object^ sender, System::EventArgs^ e) {

		try
		{
			String^ constr = "Server=127.0.0.1;Uid=root;Pwd=;Database=projetpoo";
			MySqlConnection^ con = gcnew MySqlConnection(constr);
			MySqlDataAdapter^ sda = gcnew MySqlDataAdapter("select * from adresse where NUMERO_CLIENT_FACTURATION > 0 or NUMERO_CLIENT_LIVRAISON > 0", con);
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
		   // Insert liv
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {

		try
		{
			String^ constr = "Server=127.0.0.1;Uid=root;Pwd=;Database=projetpoo";
			MySqlConnection^ con = gcnew MySqlConnection(constr);

			int id_adresse = Int32::Parse(textBox1->Text);
			int id_cli = Int32::Parse(textBox2->Text);
			String^ ville_cli = textBox3->Text;
			String^ adresse_cli = textBox4->Text;
			String^ cp_cli = textBox5->Text;

			int fac = 0;

			MySqlCommand^ cmd = gcnew MySqlCommand("insert into adresse values(" + id_adresse + "," + id_cli + "," + fac + ",'" + ville_cli + "','" + adresse_cli + "','" + cp_cli + "')", con);
			MySqlDataReader^ dr;

			con->Open();
			dr = cmd->ExecuteReader();
			MessageBox::Show("L'adresse de livraison du client ont été sauvegardé");
			con->Close();

		}
		catch (Exception^ ex)
		{
			MessageBox::Show(ex->Message);
		}
	}
		   // Insert fac
	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {

		try
		{
			String^ constr = "Server=127.0.0.1;Uid=root;Pwd=;Database=projetpoo";
			MySqlConnection^ con = gcnew MySqlConnection(constr);

			int id_adresse = Int32::Parse(textBox1->Text);
			int id_cli = Int32::Parse(textBox2->Text);
			String^ ville_cli = textBox3->Text;
			String^ adresse_cli = textBox4->Text;
			String^ cp_cli = textBox5->Text;

			int liv = 0;

			MySqlCommand^ cmd = gcnew MySqlCommand("insert into adresse values(" + id_adresse + "," + liv + "," + id_cli + ",'" + ville_cli + "','" + adresse_cli + "','" + cp_cli + "')", con);
			MySqlDataReader^ dr;

			con->Open();
			dr = cmd->ExecuteReader();
			MessageBox::Show("L'adresse de facturation du client ont été sauvegardé");
			con->Close();

		}
		catch (Exception^ ex)
		{
			MessageBox::Show(ex->Message);
		}
	}
		   // Update liv
	private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {

		try
		{
			String^ constr = "Server=127.0.0.1;Uid=root;Pwd=;Database=projetpoo";
			MySqlConnection^ con = gcnew MySqlConnection(constr);

			int id_adresse = Int32::Parse(textBox1->Text);
			int id_cli = Int32::Parse(textBox2->Text);
			String^ ville_cli = textBox3->Text;
			String^ adresse_cli = textBox4->Text;
			String^ cp_cli = textBox5->Text;

			MySqlCommand^ cmd = gcnew MySqlCommand("update adresse set numero_client_livraison=" + id_cli + ",ville='" + ville_cli + "',adresse='" + adresse_cli + "',cp='" + cp_cli + "' where id_adresse=" + id_adresse + "", con);
			MySqlDataReader^ dr;

			con->Open();
			dr = cmd->ExecuteReader();
			MessageBox::Show("L'adresse de livraison du client a été modifié");
			con->Close();

		}
		catch (Exception^ ex)
		{
			MessageBox::Show(ex->Message);
		}
	}
		   // Update fac
	private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {

		try
		{
			String^ constr = "Server=127.0.0.1;Uid=root;Pwd=;Database=projetpoo";
			MySqlConnection^ con = gcnew MySqlConnection(constr);

			int id_adresse = Int32::Parse(textBox1->Text);
			int id_cli = Int32::Parse(textBox2->Text);
			String^ ville_cli = textBox3->Text;
			String^ adresse_cli = textBox4->Text;
			String^ cp_cli = textBox5->Text;

			MySqlCommand^ cmd = gcnew MySqlCommand("update adresse set numero_client_facturation=" + id_cli + ",ville='" + ville_cli + "',adresse='" + adresse_cli + "',cp='" + cp_cli + "' where id_adresse=" + id_adresse + "", con);
			MySqlDataReader^ dr;

			con->Open();
			dr = cmd->ExecuteReader();
			MessageBox::Show("L'adresse de facturation du client a été modifié");
			con->Close();

		}
		catch (Exception^ ex)
		{
			MessageBox::Show(ex->Message);
		}
	}
		   // Delete liv
	private: System::Void button5_Click(System::Object^ sender, System::EventArgs^ e) {

		try
		{
			String^ constr = "Server=127.0.0.1;Uid=root;Pwd=;Database=projetpoo";
			MySqlConnection^ con = gcnew MySqlConnection(constr);

			int id_adresse = Int32::Parse(textBox1->Text);
			int id_cli = Int32::Parse(textBox2->Text);

			MySqlCommand^ cmd = gcnew MySqlCommand("delete from adresse where id_adresse=" + id_adresse + " and numero_client_livraison > 0", con);
			MySqlDataReader^ dr;

			con->Open();
			dr = cmd->ExecuteReader();
			MessageBox::Show("L'adresse de livraison du client a été supprimé");
			con->Close();

		}
		catch (Exception^ ex)
		{
			MessageBox::Show(ex->Message);
		}
	}
		   // Delete fac
	private: System::Void button6_Click(System::Object^ sender, System::EventArgs^ e) {

		try
		{
			String^ constr = "Server=127.0.0.1;Uid=root;Pwd=;Database=projetpoo";
			MySqlConnection^ con = gcnew MySqlConnection(constr);

			int id_adresse = Int32::Parse(textBox1->Text);
			int id_cli = Int32::Parse(textBox2->Text);
			String^ ville_cli = textBox3->Text;
			String^ adresse_cli = textBox4->Text;
			String^ cp_cli = textBox5->Text;

			MySqlCommand^ cmd = gcnew MySqlCommand("delete from adresse where id_adresse=" + id_adresse + " and numero_client_facturation > 0", con);
			MySqlDataReader^ dr;

			con->Open();
			dr = cmd->ExecuteReader();
			MessageBox::Show("L'adresse de facturation du client a été supprimé");
			con->Close();

		}
		catch (Exception^ ex)
		{
			MessageBox::Show(ex->Message);
		}
	}  
};
}
