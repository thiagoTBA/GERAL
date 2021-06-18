namespace Biblioteca.View
{
    partial class frmCadastrarTema
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
            this.btncadtema = new System.Windows.Forms.Button();
            this.label1 = new System.Windows.Forms.Label();
            this.txtcadtema = new System.Windows.Forms.TextBox();
            this.SuspendLayout();
            // 
            // btncadtema
            // 
            this.btncadtema.Location = new System.Drawing.Point(145, 259);
            this.btncadtema.Name = "btncadtema";
            this.btncadtema.Size = new System.Drawing.Size(218, 57);
            this.btncadtema.TabIndex = 0;
            this.btncadtema.Text = "CADASTRAR!";
            this.btncadtema.UseVisualStyleBackColor = true;
            this.btncadtema.Click += new System.EventHandler(this.btncadtema_Click);
            // 
            // label1
            // 
            this.label1.AutoSize = true;
            this.label1.Location = new System.Drawing.Point(69, 108);
            this.label1.Name = "label1";
            this.label1.Size = new System.Drawing.Size(91, 13);
            this.label1.TabIndex = 1;
            this.label1.Text = "NOME DO TEMA";
            this.label1.Click += new System.EventHandler(this.label1_Click);
            // 
            // txtcadtema
            // 
            this.txtcadtema.Location = new System.Drawing.Point(220, 101);
            this.txtcadtema.Name = "txtcadtema";
            this.txtcadtema.Size = new System.Drawing.Size(297, 20);
            this.txtcadtema.TabIndex = 2;
            // 
            // frmCadastrarTema
            // 
            this.AutoScaleDimensions = new System.Drawing.SizeF(6F, 13F);
            this.AutoScaleMode = System.Windows.Forms.AutoScaleMode.Font;
            this.ClientSize = new System.Drawing.Size(558, 391);
            this.Controls.Add(this.txtcadtema);
            this.Controls.Add(this.label1);
            this.Controls.Add(this.btncadtema);
            this.Name = "frmCadastrarTema";
            this.Text = "frmCadastrarTema";
            this.ResumeLayout(false);
            this.PerformLayout();

        }

        #endregion

        private System.Windows.Forms.Button btncadtema;
        private System.Windows.Forms.Label label1;
        private System.Windows.Forms.TextBox txtcadtema;
    }
}