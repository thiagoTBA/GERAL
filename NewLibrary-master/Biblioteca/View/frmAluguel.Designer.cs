namespace Biblioteca.View
{
    partial class frmAluguel
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
            this.btnalugar = new System.Windows.Forms.Button();
            this.label1 = new System.Windows.Forms.Label();
            this.txtcodfu = new System.Windows.Forms.TextBox();
            this.label2 = new System.Windows.Forms.Label();
            this.label3 = new System.Windows.Forms.Label();
            this.label4 = new System.Windows.Forms.Label();
            this.label5 = new System.Windows.Forms.Label();
            this.txtcodusu = new System.Windows.Forms.TextBox();
            this.txtcodlivro = new System.Windows.Forms.TextBox();
            this.label8 = new System.Windows.Forms.Label();
            this.txtcodbarra = new System.Windows.Forms.TextBox();
            this.txtdatadev = new System.Windows.Forms.TextBox();
            this.txtdataemp = new System.Windows.Forms.TextBox();
            this.label6 = new System.Windows.Forms.Label();
            this.btnAtualiza = new System.Windows.Forms.Button();
            this.SuspendLayout();
            // 
            // btnalugar
            // 
            this.btnalugar.Location = new System.Drawing.Point(328, 444);
            this.btnalugar.Name = "btnalugar";
            this.btnalugar.Size = new System.Drawing.Size(183, 70);
            this.btnalugar.TabIndex = 0;
            this.btnalugar.Text = "ALUGAR!";
            this.btnalugar.UseVisualStyleBackColor = true;
            this.btnalugar.Click += new System.EventHandler(this.btnalugar_Click);
            // 
            // label1
            // 
            this.label1.AutoSize = true;
            this.label1.Location = new System.Drawing.Point(65, 79);
            this.label1.Name = "label1";
            this.label1.Size = new System.Drawing.Size(109, 13);
            this.label1.TabIndex = 1;
            this.label1.Text = "COD/FUNCIONARIO";
            // 
            // txtcodfu
            // 
            this.txtcodfu.Location = new System.Drawing.Point(180, 75);
            this.txtcodfu.Name = "txtcodfu";
            this.txtcodfu.Size = new System.Drawing.Size(36, 20);
            this.txtcodfu.TabIndex = 2;
            // 
            // label2
            // 
            this.label2.AutoSize = true;
            this.label2.Location = new System.Drawing.Point(450, 78);
            this.label2.Name = "label2";
            this.label2.Size = new System.Drawing.Size(84, 13);
            this.label2.TabIndex = 3;
            this.label2.Text = "COD/USUARIO";
            // 
            // label3
            // 
            this.label3.AutoSize = true;
            this.label3.Location = new System.Drawing.Point(65, 210);
            this.label3.Name = "label3";
            this.label3.Size = new System.Drawing.Size(67, 13);
            this.label3.TabIndex = 4;
            this.label3.Text = "COD/LIVRO";
            this.label3.Click += new System.EventHandler(this.label3_Click);
            // 
            // label4
            // 
            this.label4.AutoSize = true;
            this.label4.Location = new System.Drawing.Point(65, 355);
            this.label4.Name = "label4";
            this.label4.Size = new System.Drawing.Size(113, 13);
            this.label4.TabIndex = 5;
            this.label4.Text = "DATA/EMPRESTIMO";
            this.label4.Click += new System.EventHandler(this.label4_Click);
            // 
            // label5
            // 
            this.label5.AutoSize = true;
            this.label5.Location = new System.Drawing.Point(450, 355);
            this.label5.Name = "label5";
            this.label5.Size = new System.Drawing.Size(105, 13);
            this.label5.TabIndex = 6;
            this.label5.Text = "DATA DEVOLUCAO";
            // 
            // txtcodusu
            // 
            this.txtcodusu.Location = new System.Drawing.Point(637, 72);
            this.txtcodusu.Name = "txtcodusu";
            this.txtcodusu.Size = new System.Drawing.Size(36, 20);
            this.txtcodusu.TabIndex = 9;
            this.txtcodusu.TextChanged += new System.EventHandler(this.textBox2_TextChanged);
            // 
            // txtcodlivro
            // 
            this.txtcodlivro.Location = new System.Drawing.Point(180, 203);
            this.txtcodlivro.Name = "txtcodlivro";
            this.txtcodlivro.Size = new System.Drawing.Size(36, 20);
            this.txtcodlivro.TabIndex = 10;
            // 
            // label8
            // 
            this.label8.AutoSize = true;
            this.label8.Location = new System.Drawing.Point(450, 210);
            this.label8.Name = "label8";
            this.label8.Size = new System.Drawing.Size(168, 13);
            this.label8.TabIndex = 11;
            this.label8.Text = "CODIGO DE BARRAS DO LIVRO";
            // 
            // txtcodbarra
            // 
            this.txtcodbarra.Location = new System.Drawing.Point(637, 207);
            this.txtcodbarra.Name = "txtcodbarra";
            this.txtcodbarra.Size = new System.Drawing.Size(68, 20);
            this.txtcodbarra.TabIndex = 12;
            // 
            // txtdatadev
            // 
            this.txtdatadev.Location = new System.Drawing.Point(637, 348);
            this.txtdatadev.Name = "txtdatadev";
            this.txtdatadev.Size = new System.Drawing.Size(159, 20);
            this.txtdatadev.TabIndex = 13;
            // 
            // txtdataemp
            // 
            this.txtdataemp.Location = new System.Drawing.Point(180, 352);
            this.txtdataemp.Name = "txtdataemp";
            this.txtdataemp.Size = new System.Drawing.Size(159, 20);
            this.txtdataemp.TabIndex = 14;
            // 
            // label6
            // 
            this.label6.AutoSize = true;
            this.label6.Location = new System.Drawing.Point(296, 38);
            this.label6.Name = "label6";
            this.label6.Size = new System.Drawing.Size(0, 13);
            this.label6.TabIndex = 15;
            this.label6.Click += new System.EventHandler(this.label6_Click);
            // 
            // btnAtualiza
            // 
            this.btnAtualiza.Location = new System.Drawing.Point(377, 393);
            this.btnAtualiza.Name = "btnAtualiza";
            this.btnAtualiza.Size = new System.Drawing.Size(75, 23);
            this.btnAtualiza.TabIndex = 16;
            this.btnAtualiza.Text = "ATUALIZA REGISTRO";
            this.btnAtualiza.UseVisualStyleBackColor = true;
            this.btnAtualiza.Click += new System.EventHandler(this.btnAtualiza_Click);
            // 
            // frmAluguel
            // 
            this.AutoScaleDimensions = new System.Drawing.SizeF(6F, 13F);
            this.AutoScaleMode = System.Windows.Forms.AutoScaleMode.Font;
            this.ClientSize = new System.Drawing.Size(835, 573);
            this.Controls.Add(this.btnAtualiza);
            this.Controls.Add(this.label6);
            this.Controls.Add(this.txtdataemp);
            this.Controls.Add(this.txtdatadev);
            this.Controls.Add(this.txtcodbarra);
            this.Controls.Add(this.label8);
            this.Controls.Add(this.txtcodlivro);
            this.Controls.Add(this.txtcodusu);
            this.Controls.Add(this.label5);
            this.Controls.Add(this.label4);
            this.Controls.Add(this.label3);
            this.Controls.Add(this.label2);
            this.Controls.Add(this.txtcodfu);
            this.Controls.Add(this.label1);
            this.Controls.Add(this.btnalugar);
            this.Name = "frmAluguel";
            this.Text = "frmAluguel";
            this.Load += new System.EventHandler(this.frmAluguel_Load);
            this.ResumeLayout(false);
            this.PerformLayout();

        }

        #endregion

        private System.Windows.Forms.Button btnalugar;
        private System.Windows.Forms.Label label1;
        private System.Windows.Forms.TextBox txtcodfu;
        private System.Windows.Forms.Label label2;
        private System.Windows.Forms.Label label3;
        private System.Windows.Forms.Label label4;
        private System.Windows.Forms.Label label5;
        private System.Windows.Forms.TextBox txtcodusu;
        private System.Windows.Forms.TextBox txtcodlivro;
        private System.Windows.Forms.Label label8;
        private System.Windows.Forms.TextBox txtcodbarra;
        private System.Windows.Forms.TextBox txtdatadev;
        private System.Windows.Forms.TextBox txtdataemp;
        private System.Windows.Forms.Label label6;
        private System.Windows.Forms.Button btnAtualiza;
    }
}