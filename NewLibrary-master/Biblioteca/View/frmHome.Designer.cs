namespace Biblioteca.View
{
    partial class frmHome
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
            this.dgvAcervo = new System.Windows.Forms.DataGridView();
            this.btnPesquisar = new System.Windows.Forms.Button();
            this.lblWelcome = new System.Windows.Forms.Label();
            this.txtcadlivro = new System.Windows.Forms.Button();
            this.btncadastrauser = new System.Windows.Forms.Button();
            this.btncadasfu = new System.Windows.Forms.Button();
            this.btnefetalu = new System.Windows.Forms.Button();
            this.btncadautor = new System.Windows.Forms.Button();
            this.btncadtema = new System.Windows.Forms.Button();
            this.btnpesusu = new System.Windows.Forms.Button();
            this.btnpesqfu = new System.Windows.Forms.Button();
            this.btnpesqautor = new System.Windows.Forms.Button();
            this.btnpesqtema = new System.Windows.Forms.Button();
            this.btnalu = new System.Windows.Forms.Button();
            this.btndelete = new System.Windows.Forms.Button();
            this.btnalterar = new System.Windows.Forms.Button();
            this.btnlivrodev = new System.Windows.Forms.Button();
            ((System.ComponentModel.ISupportInitialize)(this.dgvAcervo)).BeginInit();
            this.SuspendLayout();
            // 
            // dgvAcervo
            // 
            this.dgvAcervo.ColumnHeadersHeightSizeMode = System.Windows.Forms.DataGridViewColumnHeadersHeightSizeMode.AutoSize;
            this.dgvAcervo.Location = new System.Drawing.Point(27, 272);
            this.dgvAcervo.Name = "dgvAcervo";
            this.dgvAcervo.Size = new System.Drawing.Size(930, 294);
            this.dgvAcervo.TabIndex = 0;
            this.dgvAcervo.CellContentClick += new System.Windows.Forms.DataGridViewCellEventHandler(this.dgvAcervo_CellContentClick);
            // 
            // btnPesquisar
            // 
            this.btnPesquisar.Location = new System.Drawing.Point(48, 204);
            this.btnPesquisar.Name = "btnPesquisar";
            this.btnPesquisar.Size = new System.Drawing.Size(140, 23);
            this.btnPesquisar.TabIndex = 1;
            this.btnPesquisar.Text = "Pesquisar Livros";
            this.btnPesquisar.UseVisualStyleBackColor = true;
            this.btnPesquisar.Click += new System.EventHandler(this.btnPesquisar_Click);
            // 
            // lblWelcome
            // 
            this.lblWelcome.AutoSize = true;
            this.lblWelcome.Location = new System.Drawing.Point(191, 45);
            this.lblWelcome.Name = "lblWelcome";
            this.lblWelcome.Size = new System.Drawing.Size(0, 13);
            this.lblWelcome.TabIndex = 2;
            // 
            // txtcadlivro
            // 
            this.txtcadlivro.Location = new System.Drawing.Point(48, 73);
            this.txtcadlivro.Name = "txtcadlivro";
            this.txtcadlivro.Size = new System.Drawing.Size(140, 23);
            this.txtcadlivro.TabIndex = 3;
            this.txtcadlivro.Text = "CADASTRAR LIVRO";
            this.txtcadlivro.UseVisualStyleBackColor = true;
            this.txtcadlivro.Click += new System.EventHandler(this.button1_Click);
            // 
            // btncadastrauser
            // 
            this.btncadastrauser.Location = new System.Drawing.Point(194, 73);
            this.btncadastrauser.Name = "btncadastrauser";
            this.btncadastrauser.Size = new System.Drawing.Size(140, 23);
            this.btncadastrauser.TabIndex = 4;
            this.btncadastrauser.Text = "CADASTRAR USUARIO";
            this.btncadastrauser.UseVisualStyleBackColor = true;
            this.btncadastrauser.Click += new System.EventHandler(this.btncadastrauser_Click);
            // 
            // btncadasfu
            // 
            this.btncadasfu.Location = new System.Drawing.Point(340, 73);
            this.btncadasfu.Name = "btncadasfu";
            this.btncadasfu.Size = new System.Drawing.Size(210, 23);
            this.btncadasfu.TabIndex = 5;
            this.btncadasfu.Text = "CADASTRAR FUNCIONARIO";
            this.btncadasfu.UseVisualStyleBackColor = true;
            this.btncadasfu.Click += new System.EventHandler(this.btncadasfu_Click);
            // 
            // btnefetalu
            // 
            this.btnefetalu.Location = new System.Drawing.Point(124, 129);
            this.btnefetalu.Name = "btnefetalu";
            this.btnefetalu.Size = new System.Drawing.Size(319, 51);
            this.btnefetalu.TabIndex = 6;
            this.btnefetalu.Text = "ALUGAR LIVRO";
            this.btnefetalu.UseVisualStyleBackColor = true;
            this.btnefetalu.Click += new System.EventHandler(this.button1_Click_1);
            // 
            // btncadautor
            // 
            this.btncadautor.AutoSize = true;
            this.btncadautor.Location = new System.Drawing.Point(556, 73);
            this.btncadautor.Name = "btncadautor";
            this.btncadautor.Size = new System.Drawing.Size(124, 23);
            this.btncadautor.TabIndex = 7;
            this.btncadautor.Text = "CADASTRAR AUTOR";
            this.btncadautor.UseVisualStyleBackColor = true;
            this.btncadautor.Click += new System.EventHandler(this.button1_Click_2);
            // 
            // btncadtema
            // 
            this.btncadtema.Location = new System.Drawing.Point(686, 73);
            this.btncadtema.Name = "btncadtema";
            this.btncadtema.Size = new System.Drawing.Size(131, 23);
            this.btncadtema.TabIndex = 8;
            this.btncadtema.Text = "CADASTRAR TEMA";
            this.btncadtema.UseVisualStyleBackColor = true;
            this.btncadtema.Click += new System.EventHandler(this.btncadtema_Click);
            // 
            // btnpesusu
            // 
            this.btnpesusu.Location = new System.Drawing.Point(194, 204);
            this.btnpesusu.Name = "btnpesusu";
            this.btnpesusu.Size = new System.Drawing.Size(140, 23);
            this.btnpesusu.TabIndex = 9;
            this.btnpesusu.Text = "Pesquisar Usuarios";
            this.btnpesusu.UseVisualStyleBackColor = true;
            this.btnpesusu.Click += new System.EventHandler(this.btnpesusu_Click);
            // 
            // btnpesqfu
            // 
            this.btnpesqfu.Location = new System.Drawing.Point(340, 204);
            this.btnpesqfu.Name = "btnpesqfu";
            this.btnpesqfu.Size = new System.Drawing.Size(140, 23);
            this.btnpesqfu.TabIndex = 10;
            this.btnpesqfu.Text = "Pesquisar Funcionarios";
            this.btnpesqfu.UseVisualStyleBackColor = true;
            this.btnpesqfu.Click += new System.EventHandler(this.btnpesqfu_Click);
            // 
            // btnpesqautor
            // 
            this.btnpesqautor.Location = new System.Drawing.Point(486, 204);
            this.btnpesqautor.Name = "btnpesqautor";
            this.btnpesqautor.Size = new System.Drawing.Size(140, 23);
            this.btnpesqautor.TabIndex = 11;
            this.btnpesqautor.Text = "Pesquisar Autores";
            this.btnpesqautor.UseVisualStyleBackColor = true;
            this.btnpesqautor.Click += new System.EventHandler(this.btnpesqautor_Click);
            // 
            // btnpesqtema
            // 
            this.btnpesqtema.Location = new System.Drawing.Point(632, 204);
            this.btnpesqtema.Name = "btnpesqtema";
            this.btnpesqtema.Size = new System.Drawing.Size(140, 23);
            this.btnpesqtema.TabIndex = 12;
            this.btnpesqtema.Text = "Pesquisar Temas";
            this.btnpesqtema.UseVisualStyleBackColor = true;
            this.btnpesqtema.Click += new System.EventHandler(this.btnpesqtema_Click);
            // 
            // btnalu
            // 
            this.btnalu.Location = new System.Drawing.Point(778, 204);
            this.btnalu.Name = "btnalu";
            this.btnalu.Size = new System.Drawing.Size(140, 23);
            this.btnalu.TabIndex = 13;
            this.btnalu.Text = "Pesquisar Aluguel";
            this.btnalu.UseVisualStyleBackColor = true;
            this.btnalu.Click += new System.EventHandler(this.btnalu_Click);
            // 
            // btndelete
            // 
            this.btndelete.Location = new System.Drawing.Point(297, 233);
            this.btndelete.Name = "btndelete";
            this.btndelete.Size = new System.Drawing.Size(146, 33);
            this.btndelete.TabIndex = 14;
            this.btndelete.Text = "DELETAR";
            this.btndelete.UseVisualStyleBackColor = true;
            this.btndelete.Click += new System.EventHandler(this.btndelete_Click_1);
            // 
            // btnalterar
            // 
            this.btnalterar.Location = new System.Drawing.Point(470, 233);
            this.btnalterar.Name = "btnalterar";
            this.btnalterar.Size = new System.Drawing.Size(146, 33);
            this.btnalterar.TabIndex = 15;
            this.btnalterar.Text = "ALTERAR";
            this.btnalterar.UseVisualStyleBackColor = true;
            this.btnalterar.Click += new System.EventHandler(this.btnalterar_Click);
            // 
            // btnlivrodev
            // 
            this.btnlivrodev.Location = new System.Drawing.Point(499, 129);
            this.btnlivrodev.Name = "btnlivrodev";
            this.btnlivrodev.Size = new System.Drawing.Size(273, 51);
            this.btnlivrodev.TabIndex = 16;
            this.btnlivrodev.Text = "DEVOLVER LIVRO";
            this.btnlivrodev.UseVisualStyleBackColor = true;
            this.btnlivrodev.Click += new System.EventHandler(this.btnlivrodev_Click);
            // 
            // frmHome
            // 
            this.AutoScaleDimensions = new System.Drawing.SizeF(6F, 13F);
            this.AutoScaleMode = System.Windows.Forms.AutoScaleMode.Font;
            this.ClientSize = new System.Drawing.Size(999, 595);
            this.Controls.Add(this.btnlivrodev);
            this.Controls.Add(this.btnalterar);
            this.Controls.Add(this.btndelete);
            this.Controls.Add(this.btnalu);
            this.Controls.Add(this.btnpesqtema);
            this.Controls.Add(this.btnpesqautor);
            this.Controls.Add(this.btnpesqfu);
            this.Controls.Add(this.btnpesusu);
            this.Controls.Add(this.btncadtema);
            this.Controls.Add(this.btncadautor);
            this.Controls.Add(this.btnefetalu);
            this.Controls.Add(this.btncadasfu);
            this.Controls.Add(this.btncadastrauser);
            this.Controls.Add(this.txtcadlivro);
            this.Controls.Add(this.lblWelcome);
            this.Controls.Add(this.btnPesquisar);
            this.Controls.Add(this.dgvAcervo);
            this.Name = "frmHome";
            this.Text = "Home";
            this.Load += new System.EventHandler(this.frmHome_Load);
            ((System.ComponentModel.ISupportInitialize)(this.dgvAcervo)).EndInit();
            this.ResumeLayout(false);
            this.PerformLayout();

        }

        #endregion

        private System.Windows.Forms.DataGridView dgvAcervo;
        private System.Windows.Forms.Button btnPesquisar;
        public System.Windows.Forms.Label lblWelcome;
        private System.Windows.Forms.Button txtcadlivro;
        private System.Windows.Forms.Button btncadastrauser;
        private System.Windows.Forms.Button btncadasfu;
        private System.Windows.Forms.Button btnefetalu;
        private System.Windows.Forms.Button btncadautor;
        private System.Windows.Forms.Button btncadtema;
        private System.Windows.Forms.Button btnpesusu;
        private System.Windows.Forms.Button btnpesqfu;
        private System.Windows.Forms.Button btnpesqautor;
        private System.Windows.Forms.Button btnpesqtema;
        private System.Windows.Forms.Button btnalu;
        private System.Windows.Forms.Button btndelete;
        private System.Windows.Forms.Button btnalterar;
        private System.Windows.Forms.Button btnlivrodev;
    }
}