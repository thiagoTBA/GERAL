namespace Biblioteca.View
{
    partial class frmCadastrarFuncionario
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
            this.txtfunome = new System.Windows.Forms.TextBox();
            this.label2 = new System.Windows.Forms.Label();
            this.txtfusenha = new System.Windows.Forms.TextBox();
            this.btncadastrarfu = new System.Windows.Forms.Button();
            this.SuspendLayout();
            // 
            // label1
            // 
            this.label1.AutoSize = true;
            this.label1.Location = new System.Drawing.Point(12, 103);
            this.label1.Name = "label1";
            this.label1.Size = new System.Drawing.Size(109, 13);
            this.label1.TabIndex = 0;
            this.label1.Text = "NOME DE USUARIO";
            this.label1.Click += new System.EventHandler(this.label1_Click);
            // 
            // txtfunome
            // 
            this.txtfunome.Location = new System.Drawing.Point(142, 96);
            this.txtfunome.Name = "txtfunome";
            this.txtfunome.Size = new System.Drawing.Size(210, 20);
            this.txtfunome.TabIndex = 1;
            // 
            // label2
            // 
            this.label2.AutoSize = true;
            this.label2.Location = new System.Drawing.Point(12, 160);
            this.label2.Name = "label2";
            this.label2.Size = new System.Drawing.Size(44, 13);
            this.label2.TabIndex = 2;
            this.label2.Text = "SENHA";
            this.label2.Click += new System.EventHandler(this.label2_Click);
            // 
            // txtfusenha
            // 
            this.txtfusenha.Location = new System.Drawing.Point(142, 153);
            this.txtfusenha.Name = "txtfusenha";
            this.txtfusenha.Size = new System.Drawing.Size(210, 20);
            this.txtfusenha.TabIndex = 3;
            // 
            // btncadastrarfu
            // 
            this.btncadastrarfu.Location = new System.Drawing.Point(108, 257);
            this.btncadastrarfu.Name = "btncadastrarfu";
            this.btncadastrarfu.Size = new System.Drawing.Size(193, 78);
            this.btncadastrarfu.TabIndex = 4;
            this.btncadastrarfu.Text = "CADASTRAR!";
            this.btncadastrarfu.UseVisualStyleBackColor = true;
            this.btncadastrarfu.Click += new System.EventHandler(this.btncadastrarfu_Click);
            // 
            // frmCadastrarFuncionario
            // 
            this.AutoScaleDimensions = new System.Drawing.SizeF(6F, 13F);
            this.AutoScaleMode = System.Windows.Forms.AutoScaleMode.Font;
            this.ClientSize = new System.Drawing.Size(442, 371);
            this.Controls.Add(this.btncadastrarfu);
            this.Controls.Add(this.txtfusenha);
            this.Controls.Add(this.label2);
            this.Controls.Add(this.txtfunome);
            this.Controls.Add(this.label1);
            this.Name = "frmCadastrarFuncionario";
            this.Text = "Form1";
            this.Load += new System.EventHandler(this.frmCadastrarFuncionario_Load);
            this.ResumeLayout(false);
            this.PerformLayout();

        }

        #endregion

        private System.Windows.Forms.Label label1;
        private System.Windows.Forms.TextBox txtfunome;
        private System.Windows.Forms.Label label2;
        private System.Windows.Forms.TextBox txtfusenha;
        private System.Windows.Forms.Button btncadastrarfu;
    }
}