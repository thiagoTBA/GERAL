namespace Biblioteca.View
{
    partial class frmDevolucao
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
            this.txtstatuscod = new System.Windows.Forms.TextBox();
            this.btndevolve = new System.Windows.Forms.Button();
            this.SuspendLayout();
            // 
            // label1
            // 
            this.label1.AutoSize = true;
            this.label1.Location = new System.Drawing.Point(12, 74);
            this.label1.Name = "label1";
            this.label1.Size = new System.Drawing.Size(153, 13);
            this.label1.TabIndex = 0;
            this.label1.Text = "DIGITE O CODIGO DO LIVRO";
            this.label1.Click += new System.EventHandler(this.label1_Click);
            // 
            // txtstatuscod
            // 
            this.txtstatuscod.Location = new System.Drawing.Point(188, 74);
            this.txtstatuscod.Name = "txtstatuscod";
            this.txtstatuscod.Size = new System.Drawing.Size(100, 20);
            this.txtstatuscod.TabIndex = 1;
            // 
            // btndevolve
            // 
            this.btndevolve.Location = new System.Drawing.Point(79, 182);
            this.btndevolve.Name = "btndevolve";
            this.btndevolve.Size = new System.Drawing.Size(177, 66);
            this.btndevolve.TabIndex = 2;
            this.btndevolve.Text = "DEVOLVER!";
            this.btndevolve.UseVisualStyleBackColor = true;
            this.btndevolve.Click += new System.EventHandler(this.btndevolve_Click);
            // 
            // frmDevolucao
            // 
            this.AutoScaleDimensions = new System.Drawing.SizeF(6F, 13F);
            this.AutoScaleMode = System.Windows.Forms.AutoScaleMode.Font;
            this.ClientSize = new System.Drawing.Size(348, 381);
            this.Controls.Add(this.btndevolve);
            this.Controls.Add(this.txtstatuscod);
            this.Controls.Add(this.label1);
            this.Name = "frmDevolucao";
            this.Text = "frmDevolucao";
            this.ResumeLayout(false);
            this.PerformLayout();

        }

        #endregion

        private System.Windows.Forms.Label label1;
        private System.Windows.Forms.TextBox txtstatuscod;
        private System.Windows.Forms.Button btndevolve;
    }
}