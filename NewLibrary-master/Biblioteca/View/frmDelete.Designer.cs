namespace Biblioteca.View
{
    partial class frmDelete
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
            this.txtcoduse = new System.Windows.Forms.TextBox();
            this.txtcodlivro = new System.Windows.Forms.TextBox();
            this.btndeletausu = new System.Windows.Forms.Button();
            this.btndeletalivro = new System.Windows.Forms.Button();
            this.SuspendLayout();
            // 
            // label1
            // 
            this.label1.AutoSize = true;
            this.label1.Location = new System.Drawing.Point(307, 32);
            this.label1.Name = "label1";
            this.label1.Size = new System.Drawing.Size(84, 13);
            this.label1.TabIndex = 0;
            this.label1.Text = "MENU DELETE";
            // 
            // label2
            // 
            this.label2.AutoSize = true;
            this.label2.Location = new System.Drawing.Point(48, 115);
            this.label2.Name = "label2";
            this.label2.Size = new System.Drawing.Size(109, 13);
            this.label2.TabIndex = 1;
            this.label2.Text = "DELETAR USUARIO";
            // 
            // label3
            // 
            this.label3.AutoSize = true;
            this.label3.Location = new System.Drawing.Point(48, 274);
            this.label3.Name = "label3";
            this.label3.Size = new System.Drawing.Size(92, 13);
            this.label3.TabIndex = 2;
            this.label3.Text = "DELETAR LIVRO";
            // 
            // txtcoduse
            // 
            this.txtcoduse.Location = new System.Drawing.Point(250, 107);
            this.txtcoduse.Name = "txtcoduse";
            this.txtcoduse.Size = new System.Drawing.Size(100, 20);
            this.txtcoduse.TabIndex = 3;
            // 
            // txtcodlivro
            // 
            this.txtcodlivro.Location = new System.Drawing.Point(250, 267);
            this.txtcodlivro.Name = "txtcodlivro";
            this.txtcodlivro.Size = new System.Drawing.Size(100, 20);
            this.txtcodlivro.TabIndex = 4;
            // 
            // btndeletausu
            // 
            this.btndeletausu.Location = new System.Drawing.Point(480, 107);
            this.btndeletausu.Name = "btndeletausu";
            this.btndeletausu.Size = new System.Drawing.Size(75, 23);
            this.btndeletausu.TabIndex = 5;
            this.btndeletausu.Text = "DELETAR";
            this.btndeletausu.UseVisualStyleBackColor = true;
            this.btndeletausu.Click += new System.EventHandler(this.btndeletausu_Click);
            // 
            // btndeletalivro
            // 
            this.btndeletalivro.Location = new System.Drawing.Point(480, 264);
            this.btndeletalivro.Name = "btndeletalivro";
            this.btndeletalivro.Size = new System.Drawing.Size(75, 23);
            this.btndeletalivro.TabIndex = 6;
            this.btndeletalivro.Text = "DELETAR";
            this.btndeletalivro.UseVisualStyleBackColor = true;
            this.btndeletalivro.Click += new System.EventHandler(this.btndeletalivro_Click);
            // 
            // frmDelete
            // 
            this.AutoScaleDimensions = new System.Drawing.SizeF(6F, 13F);
            this.AutoScaleMode = System.Windows.Forms.AutoScaleMode.Font;
            this.ClientSize = new System.Drawing.Size(800, 450);
            this.Controls.Add(this.btndeletalivro);
            this.Controls.Add(this.btndeletausu);
            this.Controls.Add(this.txtcodlivro);
            this.Controls.Add(this.txtcoduse);
            this.Controls.Add(this.label3);
            this.Controls.Add(this.label2);
            this.Controls.Add(this.label1);
            this.Name = "frmDelete";
            this.Text = "frmDelete";
            this.ResumeLayout(false);
            this.PerformLayout();

        }

        #endregion

        private System.Windows.Forms.Label label1;
        private System.Windows.Forms.Label label2;
        private System.Windows.Forms.Label label3;
        private System.Windows.Forms.TextBox txtcoduse;
        private System.Windows.Forms.TextBox txtcodlivro;
        private System.Windows.Forms.Button btndeletausu;
        private System.Windows.Forms.Button btndeletalivro;
    }
}