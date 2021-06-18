namespace Biblioteca.View
{
    partial class frmCadastro
    {
        /// <summary>
        /// Required designer variable.
        /// </summary>
        private System.ComponentModel.IContainer components = null;

        /// <summary>
        /// Clean up any resources being used.
        /// </summary>
        /// <param name="disposing">true if managed resources should be disposed; otherwise, false.</param>
        protected override void Dispose(bool disposing)
        {
            if (disposing && (components != null))
            {
                components.Dispose();
            }
            base.Dispose(disposing);
        }

        #region Windows Form Designer generated code

        /// <summary>
        /// Required method for Designer support - do not modify
        /// the contents of this method with the code editor.
        /// </summary>
        private void InitializeComponent()
        {
            this.label1 = new System.Windows.Forms.Label();
            this.label2 = new System.Windows.Forms.Label();
            this.label3 = new System.Windows.Forms.Label();
            this.label4 = new System.Windows.Forms.Label();
            this.label5 = new System.Windows.Forms.Label();
            this.label6 = new System.Windows.Forms.Label();
            this.txtnome = new System.Windows.Forms.TextBox();
            this.txteditora = new System.Windows.Forms.TextBox();
            this.txtdatapublica = new System.Windows.Forms.TextBox();
            this.txtcodtema = new System.Windows.Forms.TextBox();
            this.txtcodbarra = new System.Windows.Forms.TextBox();
            this.btncadastrar = new System.Windows.Forms.Button();
            this.txtcodautor = new System.Windows.Forms.TextBox();
            this.txtstatus = new System.Windows.Forms.TextBox();
            this.label8 = new System.Windows.Forms.Label();
            this.label7 = new System.Windows.Forms.Label();
            this.SuspendLayout();
            // 
            // label1
            // 
            this.label1.AutoSize = true;
            this.label1.Font = new System.Drawing.Font("Microsoft Sans Serif", 14.25F, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, ((byte)(0)));
            this.label1.ImageAlign = System.Drawing.ContentAlignment.MiddleRight;
            this.label1.Location = new System.Drawing.Point(256, 26);
            this.label1.Name = "label1";
            this.label1.Size = new System.Drawing.Size(174, 24);
            this.label1.TabIndex = 0;
            this.label1.Text = "CADASTRO LIVRO";
            this.label1.Click += new System.EventHandler(this.label1_Click);
            // 
            // label2
            // 
            this.label2.AutoSize = true;
            this.label2.Location = new System.Drawing.Point(30, 114);
            this.label2.Name = "label2";
            this.label2.Size = new System.Drawing.Size(39, 13);
            this.label2.TabIndex = 1;
            this.label2.Text = "NOME";
            this.label2.Click += new System.EventHandler(this.label2_Click);
            // 
            // label3
            // 
            this.label3.AutoSize = true;
            this.label3.Location = new System.Drawing.Point(30, 158);
            this.label3.Name = "label3";
            this.label3.Size = new System.Drawing.Size(55, 13);
            this.label3.TabIndex = 2;
            this.label3.Text = "EDITORA";
            this.label3.Click += new System.EventHandler(this.label3_Click);
            // 
            // label4
            // 
            this.label4.AutoSize = true;
            this.label4.Location = new System.Drawing.Point(30, 197);
            this.label4.Name = "label4";
            this.label4.Size = new System.Drawing.Size(124, 13);
            this.label4.TabIndex = 3;
            this.label4.Text = "DATA DE PUBLICAÇÃO";
            // 
            // label5
            // 
            this.label5.AutoSize = true;
            this.label5.Location = new System.Drawing.Point(30, 238);
            this.label5.Name = "label5";
            this.label5.Size = new System.Drawing.Size(101, 13);
            this.label5.TabIndex = 4;
            this.label5.Text = "CODIGO DO TEMA";
            // 
            // label6
            // 
            this.label6.AutoSize = true;
            this.label6.Location = new System.Drawing.Point(30, 285);
            this.label6.Name = "label6";
            this.label6.Size = new System.Drawing.Size(107, 13);
            this.label6.TabIndex = 5;
            this.label6.Text = "CODIGO DE BARRA";
            // 
            // txtnome
            // 
            this.txtnome.Location = new System.Drawing.Point(181, 107);
            this.txtnome.Name = "txtnome";
            this.txtnome.Size = new System.Drawing.Size(229, 20);
            this.txtnome.TabIndex = 8;
            this.txtnome.TextChanged += new System.EventHandler(this.txtnome_TextChanged);
            // 
            // txteditora
            // 
            this.txteditora.Location = new System.Drawing.Point(181, 151);
            this.txteditora.Name = "txteditora";
            this.txteditora.Size = new System.Drawing.Size(186, 20);
            this.txteditora.TabIndex = 9;
            // 
            // txtdatapublica
            // 
            this.txtdatapublica.Location = new System.Drawing.Point(181, 190);
            this.txtdatapublica.Multiline = true;
            this.txtdatapublica.Name = "txtdatapublica";
            this.txtdatapublica.Size = new System.Drawing.Size(100, 20);
            this.txtdatapublica.TabIndex = 10;
            this.txtdatapublica.Text = "9999-99-99";
            this.txtdatapublica.TextChanged += new System.EventHandler(this.txtdatapublica_TextChanged);
            // 
            // txtcodtema
            // 
            this.txtcodtema.Location = new System.Drawing.Point(181, 231);
            this.txtcodtema.Name = "txtcodtema";
            this.txtcodtema.Size = new System.Drawing.Size(34, 20);
            this.txtcodtema.TabIndex = 11;
            // 
            // txtcodbarra
            // 
            this.txtcodbarra.Location = new System.Drawing.Point(181, 278);
            this.txtcodbarra.Name = "txtcodbarra";
            this.txtcodbarra.Size = new System.Drawing.Size(229, 20);
            this.txtcodbarra.TabIndex = 12;
            // 
            // btncadastrar
            // 
            this.btncadastrar.Location = new System.Drawing.Point(260, 380);
            this.btncadastrar.Name = "btncadastrar";
            this.btncadastrar.Size = new System.Drawing.Size(292, 43);
            this.btncadastrar.TabIndex = 15;
            this.btncadastrar.Text = "CADASTRAR!";
            this.btncadastrar.UseVisualStyleBackColor = true;
            this.btncadastrar.Click += new System.EventHandler(this.button1_Click);
            // 
            // txtcodautor
            // 
            this.txtcodautor.Location = new System.Drawing.Point(416, 235);
            this.txtcodautor.Name = "txtcodautor";
            this.txtcodautor.Size = new System.Drawing.Size(34, 20);
            this.txtcodautor.TabIndex = 13;
            // 
            // txtstatus
            // 
            this.txtstatus.Location = new System.Drawing.Point(652, 231);
            this.txtstatus.Name = "txtstatus";
            this.txtstatus.Size = new System.Drawing.Size(34, 20);
            this.txtstatus.TabIndex = 14;
            this.txtstatus.TextChanged += new System.EventHandler(this.txtstatus_TextChanged);
            // 
            // label8
            // 
            this.label8.AutoSize = true;
            this.label8.Location = new System.Drawing.Point(533, 238);
            this.label8.Name = "label8";
            this.label8.Size = new System.Drawing.Size(113, 13);
            this.label8.TabIndex = 7;
            this.label8.Text = "CODIGO DE STATUS";
            // 
            // label7
            // 
            this.label7.AutoSize = true;
            this.label7.Location = new System.Drawing.Point(301, 238);
            this.label7.Name = "label7";
            this.label7.Size = new System.Drawing.Size(109, 13);
            this.label7.TabIndex = 6;
            this.label7.Text = "CODIGO DO AUTOR";
            // 
            // frmCadastro
            // 
            this.AutoScaleDimensions = new System.Drawing.SizeF(6F, 13F);
            this.AutoScaleMode = System.Windows.Forms.AutoScaleMode.Font;
            this.ClientSize = new System.Drawing.Size(800, 450);
            this.Controls.Add(this.btncadastrar);
            this.Controls.Add(this.txtstatus);
            this.Controls.Add(this.txtcodautor);
            this.Controls.Add(this.txtcodbarra);
            this.Controls.Add(this.txtcodtema);
            this.Controls.Add(this.txtdatapublica);
            this.Controls.Add(this.txteditora);
            this.Controls.Add(this.txtnome);
            this.Controls.Add(this.label8);
            this.Controls.Add(this.label7);
            this.Controls.Add(this.label6);
            this.Controls.Add(this.label5);
            this.Controls.Add(this.label4);
            this.Controls.Add(this.label3);
            this.Controls.Add(this.label2);
            this.Controls.Add(this.label1);
            this.Name = "frmCadastro";
            this.ResumeLayout(false);
            this.PerformLayout();

        }

        #endregion

        private System.Windows.Forms.Label label1;
        private System.Windows.Forms.Label label2;
        private System.Windows.Forms.Label label3;
        private System.Windows.Forms.Label label4;
        private System.Windows.Forms.Label label5;
        private System.Windows.Forms.Label label6;
        private System.Windows.Forms.TextBox txtnome;
        private System.Windows.Forms.TextBox txteditora;
        private System.Windows.Forms.TextBox txtdatapublica;
        private System.Windows.Forms.TextBox txtcodtema;
        private System.Windows.Forms.TextBox txtcodbarra;
        private System.Windows.Forms.Button btncadastrar;
        private System.Windows.Forms.TextBox txtcodautor;
        private System.Windows.Forms.TextBox txtstatus;
        private System.Windows.Forms.Label label8;
        private System.Windows.Forms.Label label7;
    }
}