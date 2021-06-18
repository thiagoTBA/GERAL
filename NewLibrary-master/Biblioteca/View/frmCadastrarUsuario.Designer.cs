namespace Biblioteca.View
{
    partial class frmCadastrarUsuario
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
            this.txtunome = new System.Windows.Forms.TextBox();
            this.txtdatanasc = new System.Windows.Forms.TextBox();
            this.txtfone = new System.Windows.Forms.TextBox();
            this.txtsenha = new System.Windows.Forms.TextBox();
            this.txtdatacadas = new System.Windows.Forms.TextBox();
            this.button1 = new System.Windows.Forms.Button();
            this.SuspendLayout();
            // 
            // label1
            // 
            this.label1.AutoSize = true;
            this.label1.Location = new System.Drawing.Point(52, 72);
            this.label1.Name = "label1";
            this.label1.Size = new System.Drawing.Size(110, 13);
            this.label1.TabIndex = 0;
            this.label1.Text = "NOME DO USUARIO";
            this.label1.Click += new System.EventHandler(this.label1_Click);
            // 
            // label2
            // 
            this.label2.AutoSize = true;
            this.label2.Location = new System.Drawing.Point(52, 132);
            this.label2.Name = "label2";
            this.label2.Size = new System.Drawing.Size(128, 13);
            this.label2.TabIndex = 1;
            this.label2.Text = "DATA DE NASCIMENTO";
            this.label2.Click += new System.EventHandler(this.label2_Click);
            // 
            // label3
            // 
            this.label3.AutoSize = true;
            this.label3.Location = new System.Drawing.Point(52, 188);
            this.label3.Name = "label3";
            this.label3.Size = new System.Drawing.Size(63, 13);
            this.label3.TabIndex = 2;
            this.label3.Text = "TELEFONE";
            this.label3.Click += new System.EventHandler(this.label3_Click);
            // 
            // label4
            // 
            this.label4.AutoSize = true;
            this.label4.Location = new System.Drawing.Point(52, 254);
            this.label4.Name = "label4";
            this.label4.Size = new System.Drawing.Size(44, 13);
            this.label4.TabIndex = 3;
            this.label4.Text = "SENHA";
            // 
            // label5
            // 
            this.label5.AutoSize = true;
            this.label5.Location = new System.Drawing.Point(52, 332);
            this.label5.Name = "label5";
            this.label5.Size = new System.Drawing.Size(119, 13);
            this.label5.TabIndex = 4;
            this.label5.Text = "DATA DE  CADASTRO";
            // 
            // txtunome
            // 
            this.txtunome.Location = new System.Drawing.Point(231, 69);
            this.txtunome.Name = "txtunome";
            this.txtunome.Size = new System.Drawing.Size(412, 20);
            this.txtunome.TabIndex = 5;
            // 
            // txtdatanasc
            // 
            this.txtdatanasc.Location = new System.Drawing.Point(231, 125);
            this.txtdatanasc.Name = "txtdatanasc";
            this.txtdatanasc.Size = new System.Drawing.Size(133, 20);
            this.txtdatanasc.TabIndex = 6;
            // 
            // txtfone
            // 
            this.txtfone.Location = new System.Drawing.Point(231, 181);
            this.txtfone.Name = "txtfone";
            this.txtfone.Size = new System.Drawing.Size(133, 20);
            this.txtfone.TabIndex = 7;
            // 
            // txtsenha
            // 
            this.txtsenha.Location = new System.Drawing.Point(231, 247);
            this.txtsenha.Name = "txtsenha";
            this.txtsenha.Size = new System.Drawing.Size(412, 20);
            this.txtsenha.TabIndex = 8;
            // 
            // txtdatacadas
            // 
            this.txtdatacadas.Location = new System.Drawing.Point(231, 325);
            this.txtdatacadas.Name = "txtdatacadas";
            this.txtdatacadas.Size = new System.Drawing.Size(133, 20);
            this.txtdatacadas.TabIndex = 9;
            // 
            // button1
            // 
            this.button1.Location = new System.Drawing.Point(289, 365);
            this.button1.Name = "button1";
            this.button1.Size = new System.Drawing.Size(222, 59);
            this.button1.TabIndex = 10;
            this.button1.Text = "CADASTRAR!";
            this.button1.UseVisualStyleBackColor = true;
            this.button1.Click += new System.EventHandler(this.button1_Click);
            // 
            // frmCadastrarUsuario
            // 
            this.AutoScaleDimensions = new System.Drawing.SizeF(6F, 13F);
            this.AutoScaleMode = System.Windows.Forms.AutoScaleMode.Font;
            this.ClientSize = new System.Drawing.Size(800, 450);
            this.Controls.Add(this.button1);
            this.Controls.Add(this.txtdatacadas);
            this.Controls.Add(this.txtsenha);
            this.Controls.Add(this.txtfone);
            this.Controls.Add(this.txtdatanasc);
            this.Controls.Add(this.txtunome);
            this.Controls.Add(this.label5);
            this.Controls.Add(this.label4);
            this.Controls.Add(this.label3);
            this.Controls.Add(this.label2);
            this.Controls.Add(this.label1);
            this.Name = "frmCadastrarUsuario";
            this.Text = "Form1";
            this.ResumeLayout(false);
            this.PerformLayout();

        }

        #endregion

        private System.Windows.Forms.Label label1;
        private System.Windows.Forms.Label label2;
        private System.Windows.Forms.Label label3;
        private System.Windows.Forms.Label label4;
        private System.Windows.Forms.Label label5;
        private System.Windows.Forms.TextBox txtunome;
        private System.Windows.Forms.TextBox txtdatanasc;
        private System.Windows.Forms.TextBox txtfone;
        private System.Windows.Forms.TextBox txtsenha;
        private System.Windows.Forms.TextBox txtdatacadas;
        private System.Windows.Forms.Button button1;
    }
}