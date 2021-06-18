namespace Biblioteca.View
{
    partial class FormCadastroUserUpdate
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
            this.txtunome = new System.Windows.Forms.TextBox();
            this.txtdatanasc = new System.Windows.Forms.TextBox();
            this.label2 = new System.Windows.Forms.Label();
            this.label3 = new System.Windows.Forms.Label();
            this.txtfone = new System.Windows.Forms.TextBox();
            this.label4 = new System.Windows.Forms.Label();
            this.txtsenha = new System.Windows.Forms.TextBox();
            this.label5 = new System.Windows.Forms.Label();
            this.txtdatacadas = new System.Windows.Forms.TextBox();
            this.btnalterar = new System.Windows.Forms.Button();
            this.label6 = new System.Windows.Forms.Label();
            this.txtcoduser = new System.Windows.Forms.TextBox();
            this.SuspendLayout();
            // 
            // label1
            // 
            this.label1.AutoSize = true;
            this.label1.Location = new System.Drawing.Point(53, 83);
            this.label1.Name = "label1";
            this.label1.Size = new System.Drawing.Size(110, 13);
            this.label1.TabIndex = 1;
            this.label1.Text = "NOME DO USUARIO";
            // 
            // txtunome
            // 
            this.txtunome.Location = new System.Drawing.Point(196, 83);
            this.txtunome.Name = "txtunome";
            this.txtunome.Size = new System.Drawing.Size(412, 20);
            this.txtunome.TabIndex = 6;
            // 
            // txtdatanasc
            // 
            this.txtdatanasc.Location = new System.Drawing.Point(196, 150);
            this.txtdatanasc.Name = "txtdatanasc";
            this.txtdatanasc.Size = new System.Drawing.Size(133, 20);
            this.txtdatanasc.TabIndex = 7;
            // 
            // label2
            // 
            this.label2.AutoSize = true;
            this.label2.Location = new System.Drawing.Point(53, 157);
            this.label2.Name = "label2";
            this.label2.Size = new System.Drawing.Size(128, 13);
            this.label2.TabIndex = 8;
            this.label2.Text = "DATA DE NASCIMENTO";
            // 
            // label3
            // 
            this.label3.AutoSize = true;
            this.label3.Location = new System.Drawing.Point(53, 220);
            this.label3.Name = "label3";
            this.label3.Size = new System.Drawing.Size(63, 13);
            this.label3.TabIndex = 9;
            this.label3.Text = "TELEFONE";
            // 
            // txtfone
            // 
            this.txtfone.Location = new System.Drawing.Point(196, 220);
            this.txtfone.Name = "txtfone";
            this.txtfone.Size = new System.Drawing.Size(133, 20);
            this.txtfone.TabIndex = 10;
            // 
            // label4
            // 
            this.label4.AutoSize = true;
            this.label4.Location = new System.Drawing.Point(53, 295);
            this.label4.Name = "label4";
            this.label4.Size = new System.Drawing.Size(44, 13);
            this.label4.TabIndex = 11;
            this.label4.Text = "SENHA";
            // 
            // txtsenha
            // 
            this.txtsenha.Location = new System.Drawing.Point(196, 292);
            this.txtsenha.Name = "txtsenha";
            this.txtsenha.Size = new System.Drawing.Size(412, 20);
            this.txtsenha.TabIndex = 12;
            // 
            // label5
            // 
            this.label5.AutoSize = true;
            this.label5.Location = new System.Drawing.Point(53, 377);
            this.label5.Name = "label5";
            this.label5.Size = new System.Drawing.Size(119, 13);
            this.label5.TabIndex = 13;
            this.label5.Text = "DATA DE  CADASTRO";
            // 
            // txtdatacadas
            // 
            this.txtdatacadas.Location = new System.Drawing.Point(196, 374);
            this.txtdatacadas.Name = "txtdatacadas";
            this.txtdatacadas.Size = new System.Drawing.Size(133, 20);
            this.txtdatacadas.TabIndex = 14;
            // 
            // btnalterar
            // 
            this.btnalterar.Location = new System.Drawing.Point(251, 429);
            this.btnalterar.Name = "btnalterar";
            this.btnalterar.Size = new System.Drawing.Size(222, 59);
            this.btnalterar.TabIndex = 15;
            this.btnalterar.Text = "ATUALIZAR";
            this.btnalterar.UseVisualStyleBackColor = true;
            this.btnalterar.Click += new System.EventHandler(this.btnalterar_Click);
            // 
            // label6
            // 
            this.label6.AutoSize = true;
            this.label6.Location = new System.Drawing.Point(53, 37);
            this.label6.Name = "label6";
            this.label6.Size = new System.Drawing.Size(120, 13);
            this.label6.TabIndex = 16;
            this.label6.Text = "CODIGO DO USUARIO";
            // 
            // txtcoduser
            // 
            this.txtcoduser.Location = new System.Drawing.Point(196, 37);
            this.txtcoduser.Name = "txtcoduser";
            this.txtcoduser.Size = new System.Drawing.Size(49, 20);
            this.txtcoduser.TabIndex = 17;
            // 
            // FormCadastroUserUpdate
            // 
            this.AutoScaleDimensions = new System.Drawing.SizeF(6F, 13F);
            this.AutoScaleMode = System.Windows.Forms.AutoScaleMode.Font;
            this.ClientSize = new System.Drawing.Size(813, 500);
            this.Controls.Add(this.txtcoduser);
            this.Controls.Add(this.label6);
            this.Controls.Add(this.btnalterar);
            this.Controls.Add(this.txtdatacadas);
            this.Controls.Add(this.label5);
            this.Controls.Add(this.txtsenha);
            this.Controls.Add(this.label4);
            this.Controls.Add(this.txtfone);
            this.Controls.Add(this.label3);
            this.Controls.Add(this.label2);
            this.Controls.Add(this.txtdatanasc);
            this.Controls.Add(this.txtunome);
            this.Controls.Add(this.label1);
            this.Name = "FormCadastroUserUpdate";
            this.Text = "FormCadastroUserUpdate";
            this.ResumeLayout(false);
            this.PerformLayout();

        }

        #endregion

        private System.Windows.Forms.Label label1;
        private System.Windows.Forms.TextBox txtunome;
        private System.Windows.Forms.TextBox txtdatanasc;
        private System.Windows.Forms.Label label2;
        private System.Windows.Forms.Label label3;
        private System.Windows.Forms.TextBox txtfone;
        private System.Windows.Forms.Label label4;
        private System.Windows.Forms.TextBox txtsenha;
        private System.Windows.Forms.Label label5;
        private System.Windows.Forms.TextBox txtdatacadas;
        private System.Windows.Forms.Button btnalterar;
        private System.Windows.Forms.Label label6;
        private System.Windows.Forms.TextBox txtcoduser;
    }
}