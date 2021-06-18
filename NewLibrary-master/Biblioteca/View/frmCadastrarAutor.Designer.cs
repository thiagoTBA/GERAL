namespace Biblioteca.View
{
    partial class frmCadastrarAutor
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
            this.txtautonome = new System.Windows.Forms.TextBox();
            this.label1 = new System.Windows.Forms.Label();
            this.btncadauto = new System.Windows.Forms.Button();
            this.SuspendLayout();
            // 
            // txtautonome
            // 
            this.txtautonome.Location = new System.Drawing.Point(170, 107);
            this.txtautonome.Name = "txtautonome";
            this.txtautonome.Size = new System.Drawing.Size(205, 20);
            this.txtautonome.TabIndex = 0;
            // 
            // label1
            // 
            this.label1.AutoSize = true;
            this.label1.Location = new System.Drawing.Point(26, 114);
            this.label1.Name = "label1";
            this.label1.Size = new System.Drawing.Size(99, 13);
            this.label1.TabIndex = 1;
            this.label1.Text = "NOME DO AUTOR";
            // 
            // btncadauto
            // 
            this.btncadauto.Location = new System.Drawing.Point(106, 228);
            this.btncadauto.Name = "btncadauto";
            this.btncadauto.Size = new System.Drawing.Size(148, 44);
            this.btncadauto.TabIndex = 2;
            this.btncadauto.Text = "CADASTRAR!";
            this.btncadauto.UseVisualStyleBackColor = true;
            this.btncadauto.Click += new System.EventHandler(this.btncadauto_Click);
            // 
            // frmCadastrarAutor
            // 
            this.AutoScaleDimensions = new System.Drawing.SizeF(6F, 13F);
            this.AutoScaleMode = System.Windows.Forms.AutoScaleMode.Font;
            this.ClientSize = new System.Drawing.Size(478, 372);
            this.Controls.Add(this.btncadauto);
            this.Controls.Add(this.label1);
            this.Controls.Add(this.txtautonome);
            this.Name = "frmCadastrarAutor";
            this.Text = "frmCadastrarAutor";
            this.Load += new System.EventHandler(this.frmCadastrarAutor_Load);
            this.ResumeLayout(false);
            this.PerformLayout();

        }

        #endregion

        private System.Windows.Forms.TextBox txtautonome;
        private System.Windows.Forms.Label label1;
        private System.Windows.Forms.Button btncadauto;
    }
}