#pragma once

namespace FormsPOOpersonnel {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace MySql::Data::MySqlClient;

	/// <summary>
	/// Description résumée de MyForm1
	/// </summary>
	public ref class MyFormPersonnel : public System::Windows::Forms::Form
	{

	public: String^ serv;
	public: String^ ident;
	public: String^ mdp;

	public:



	public: String^ bdd;

	public:
		MyFormPersonnel(void)
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
		~MyFormPersonnel()
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
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::TextBox^ textBox4;
	private: System::Windows::Forms::TextBox^ textBox5;
	private: System::Windows::Forms::TextBox^ textBox6;
	private: System::Windows::Forms::TextBox^ textBox7;
	private: System::Windows::Forms::TextBox^ textBox8;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::TextBox^ textBox9;
	private: System::Windows::Forms::Label^ label9;
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
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->textBox6 = (gcnew System::Windows::Forms::TextBox());
			this->textBox7 = (gcnew System::Windows::Forms::TextBox());
			this->textBox8 = (gcnew System::Windows::Forms::TextBox());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->textBox9 = (gcnew System::Windows::Forms::TextBox());
			this->label9 = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->bindingSource1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Montserrat", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(167, 120);
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
			this->label2->Location = System::Drawing::Point(127, 160);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(103, 33);
			this->label2->TabIndex = 1;
			this->label2->Text = L"Nom :";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Montserrat", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(84, 199);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(146, 33);
			this->label3->TabIndex = 2;
			this->label3->Text = L"Prenom :";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Montserrat", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(25, 279);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(205, 33);
			this->label4->TabIndex = 3;
			this->label4->Text = L"Date entrée :";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Montserrat", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->Location = System::Drawing::Point(136, 357);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(94, 33);
			this->label5->TabIndex = 4;
			this->label5->Text = L"Ville :";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Montserrat", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->Location = System::Drawing::Point(80, 395);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(150, 33);
			this->label6->TabIndex = 5;
			this->label6->Text = L"Adresse :";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Montserrat", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label7->Location = System::Drawing::Point(23, 434);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(207, 33);
			this->label7->TabIndex = 6;
			this->label7->Text = L"Code postal :";
			// 
			// button1
			// 
			this->button1->Font = (gcnew System::Drawing::Font(L"Montserrat", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->Location = System::Drawing::Point(12, 490);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(143, 36);
			this->button1->TabIndex = 7;
			this->button1->Text = L"Ajouter";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyFormPersonnel::button1_Click);
			// 
			// button2
			// 
			this->button2->Font = (gcnew System::Drawing::Font(L"Montserrat", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button2->Location = System::Drawing::Point(161, 490);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(143, 36);
			this->button2->TabIndex = 8;
			this->button2->Text = L"Modifier";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyFormPersonnel::button2_Click);
			// 
			// button3
			// 
			this->button3->Font = (gcnew System::Drawing::Font(L"Montserrat", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button3->Location = System::Drawing::Point(310, 490);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(143, 36);
			this->button3->TabIndex = 9;
			this->button3->Text = L"Supprimer";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &MyFormPersonnel::button3_Click);
			// 
			// button4
			// 
			this->button4->Font = (gcnew System::Drawing::Font(L"Montserrat", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button4->Location = System::Drawing::Point(619, 57);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(176, 36);
			this->button4->TabIndex = 10;
			this->button4->Text = L"Chercher";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &MyFormPersonnel::button4_Click);
			// 
			// button5
			// 
			this->button5->Font = (gcnew System::Drawing::Font(L"Montserrat", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button5->Location = System::Drawing::Point(801, 57);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(176, 36);
			this->button5->TabIndex = 11;
			this->button5->Text = L"Afficher tout";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &MyFormPersonnel::button5_Click);
			// 
			// dataGridView1
			// 
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Location = System::Drawing::Point(619, 120);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->Size = System::Drawing::Size(651, 406);
			this->dataGridView1->TabIndex = 12;
			// 
			// textBox1
			// 
			this->textBox1->Font = (gcnew System::Drawing::Font(L"Montserrat", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox1->Location = System::Drawing::Point(236, 120);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(346, 33);
			this->textBox1->TabIndex = 14;
			// 
			// textBox2
			// 
			this->textBox2->Font = (gcnew System::Drawing::Font(L"Montserrat", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox2->Location = System::Drawing::Point(236, 160);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(346, 33);
			this->textBox2->TabIndex = 15;
			// 
			// textBox3
			// 
			this->textBox3->Font = (gcnew System::Drawing::Font(L"Montserrat", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox3->Location = System::Drawing::Point(236, 199);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(346, 33);
			this->textBox3->TabIndex = 16;
			// 
			// textBox4
			// 
			this->textBox4->Font = (gcnew System::Drawing::Font(L"Montserrat", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox4->Location = System::Drawing::Point(236, 240);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(346, 33);
			this->textBox4->TabIndex = 17;
			// 
			// textBox5
			// 
			this->textBox5->Font = (gcnew System::Drawing::Font(L"Montserrat", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox5->Location = System::Drawing::Point(236, 279);
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(346, 33);
			this->textBox5->TabIndex = 18;
			// 
			// textBox6
			// 
			this->textBox6->Font = (gcnew System::Drawing::Font(L"Montserrat", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox6->Location = System::Drawing::Point(236, 318);
			this->textBox6->Name = L"textBox6";
			this->textBox6->Size = System::Drawing::Size(346, 33);
			this->textBox6->TabIndex = 19;
			// 
			// textBox7
			// 
			this->textBox7->Font = (gcnew System::Drawing::Font(L"Montserrat", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox7->Location = System::Drawing::Point(236, 357);
			this->textBox7->Name = L"textBox7";
			this->textBox7->Size = System::Drawing::Size(346, 33);
			this->textBox7->TabIndex = 20;
			// 
			// textBox8
			// 
			this->textBox8->Font = (gcnew System::Drawing::Font(L"Montserrat", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox8->Location = System::Drawing::Point(236, 395);
			this->textBox8->Name = L"textBox8";
			this->textBox8->Size = System::Drawing::Size(346, 33);
			this->textBox8->TabIndex = 21;
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Font = (gcnew System::Drawing::Font(L"Montserrat", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label8->Location = System::Drawing::Point(21, 240);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(209, 33);
			this->label8->TabIndex = 22;
			this->label8->Text = L"ID supérieur :";
			// 
			// textBox9
			// 
			this->textBox9->Font = (gcnew System::Drawing::Font(L"Montserrat", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox9->Location = System::Drawing::Point(236, 434);
			this->textBox9->Name = L"textBox9";
			this->textBox9->Size = System::Drawing::Size(346, 33);
			this->textBox9->TabIndex = 23;
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Font = (gcnew System::Drawing::Font(L"Montserrat", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label9->Location = System::Drawing::Point(45, 318);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(185, 33);
			this->label9->TabIndex = 24;
			this->label9->Text = L"ID adresse :";
			// 
			// MyFormPersonnel
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1282, 538);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->textBox9);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->textBox8);
			this->Controls->Add(this->textBox7);
			this->Controls->Add(this->textBox6);
			this->Controls->Add(this->textBox5);
			this->Controls->Add(this->textBox4);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox1);
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
			this->Name = L"MyFormPersonnel";
			this->Text = L"Gestion du personnel";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->bindingSource1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

	private: System::Void acceuilToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {

		/*this->Hide();
		FormsPOO::MyFormMain^ objMain1 = gcnew MyFormMain();
		objMain1->ShowDialog();*/
		this->Hide();
	}
		   // Insert
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {

		try
		{
			String^ constr = "Server=127.0.0.1;Uid=root;Pwd=;Database=projetpoo";
			MySqlConnection^ con = gcnew MySqlConnection(constr);

			int id_emp = Int32::Parse(textBox1->Text);	
			String^ nom_emp = textBox2->Text;
			String^ prenom_emp = textBox3->Text;
			int id_sup = Int32::Parse(textBox4->Text);
			String^ date_entree = textBox5->Text;
			int id_adresse = Int32::Parse(textBox6->Text);
			String^ ville_emp = textBox7->Text;
			String^ adresse_emp = textBox8->Text;
			String^ cp_emp = textBox9->Text;

			const char num_cl = 0;
			const char cl_num_cl = 0;

			MySqlCommand^ cmd1 = gcnew MySqlCommand("insert into employe values(" + id_emp + "," + id_adresse + "," + id_sup + ",'" + nom_emp + "','" + prenom_emp + "','" + date_entree + "')", con);
			MySqlDataReader^ dr1;
			
			con->Open();
			dr1 = cmd1->ExecuteReader();
			con->Close();
			
			MySqlCommand^ cmd2 = gcnew MySqlCommand("insert into adresse values(" + id_adresse + "," + num_cl + "," + cl_num_cl + ",'" + ville_emp + "','" + adresse_emp + "','" + cp_emp + "')", con);
			MySqlDataReader^ dr2;

			con->Open();
			dr2 = cmd2->ExecuteReader();
			MessageBox::Show("Les informations de l'employé ont été sauvegardé : " + id_emp);
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

			int id_emp = Int32::Parse(textBox1->Text);
			String^ nom_emp = textBox2->Text;
			String^ prenom_emp = textBox3->Text;
			int id_sup = Int32::Parse(textBox4->Text);
			String^ date_entree = textBox5->Text;
			int id_adresse = Int32::Parse(textBox6->Text);
			String^ ville_emp = textBox7->Text;
			String^ adresse_emp = textBox8->Text;
			String^ cp_emp = textBox9->Text;

			const char* num_cl = 0;
			const char* cl_num_cl = 0;

			MySqlCommand^ cmdU = gcnew MySqlCommand("select * from employe WHERE ID_EMPLOYE=" + id_emp + "", con);
			MySqlDataReader^ drU;

			con->Open();
			drU = cmdU->ExecuteReader();
			while (drU->Read())
			{
				textBox5->Text = drU->GetString(5);
			}
			con->Close();

			MySqlCommand^ cmd1 = gcnew MySqlCommand("update employe set ID_ADRESSE=" + id_adresse + ",ID_EMPLOYE_SUPERIEUR=" + id_sup + ",NOM_EMPLOYE='" + nom_emp + "',PRENOM_EMPLOYE='" + prenom_emp + "',DATE_RECRUTEMENT='" + date_entree + "' WHERE ID_EMPLOYE=" + id_emp + "", con);
			MySqlDataReader^ dr1;

			con->Open();
			dr1 = cmd1->ExecuteReader();
			con->Close();

			MySqlCommand^ cmd2 = gcnew MySqlCommand("update adresse, employe set VILLE='" + ville_emp + "',ADRESSE='" + adresse_emp + "',CP='" + cp_emp + "' where ADRESSE.ID_ADRESSE=EMPLOYE.ID_ADRESSE and ID_EMPLOYE=" + id_emp + "", con);
			MySqlDataReader^ dr2;

			con->Open();
			dr2 = cmd2->ExecuteReader();
			MessageBox::Show("Les informations de l'employé ont été modifié : " + id_emp);
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

			int id_emp = Int32::Parse(textBox1->Text);

			MySqlCommand^ cmd = gcnew MySqlCommand("delete from employe where ID_EMPLOYE=" + id_emp + "", con);
			MySqlDataReader^ dr;

			con->Open();
			dr = cmd->ExecuteReader();
			MessageBox::Show("Les informations de l'employé ont été supprimé : " + id_emp);
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

			int id_emp = Int32::Parse(textBox1->Text);

			MySqlCommand^ cmd2 = gcnew MySqlCommand("select * from employe inner join adresse on EMPLOYE.ID_ADRESSE = ADRESSE.ID_ADRESSE WHERE ID_EMPLOYE=" + id_emp + "", con);
			MySqlDataReader^ dr2;

			con->Open();
			dr2 = cmd2->ExecuteReader();
			while (dr2->Read())
			{
				textBox2->Text = dr2->GetString(3);
				textBox3->Text = dr2->GetString(4);
				textBox4->Text = dr2->GetString(2);
				textBox5->Text = dr2->GetString(5);
				textBox6->Text = dr2->GetString(1);
				textBox7->Text = dr2->GetString(9);
				textBox8->Text = dr2->GetString(10);
				textBox9->Text = dr2->GetString(11);
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
			MySqlDataAdapter^ sda = gcnew MySqlDataAdapter("select * from employe inner join adresse on EMPLOYE.ID_ADRESSE = ADRESSE.ID_ADRESSE", con);
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
};
}
