namespace Lab_2_3
{
    partial class Form3
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
			this.pictureBox1 = new System.Windows.Forms.PictureBox();
			this.Scroll_Red = new System.Windows.Forms.HScrollBar();
			this.Scroll_Green = new System.Windows.Forms.HScrollBar();
			this.Scroll_Blue = new System.Windows.Forms.HScrollBar();
			this.numeric_Red = new System.Windows.Forms.NumericUpDown();
			this.numeric_Green = new System.Windows.Forms.NumericUpDown();
			this.numeric_Blue = new System.Windows.Forms.NumericUpDown();
			this.button1 = new System.Windows.Forms.Button();
			this.button2 = new System.Windows.Forms.Button();
			this.button3 = new System.Windows.Forms.Button();
			this.colorDialog1 = new System.Windows.Forms.ColorDialog();
			((System.ComponentModel.ISupportInitialize)(this.pictureBox1)).BeginInit();
			((System.ComponentModel.ISupportInitialize)(this.numeric_Red)).BeginInit();
			((System.ComponentModel.ISupportInitialize)(this.numeric_Green)).BeginInit();
			((System.ComponentModel.ISupportInitialize)(this.numeric_Blue)).BeginInit();
			this.SuspendLayout();
			// 
			// pictureBox1
			// 
			this.pictureBox1.Location = new System.Drawing.Point(320, 9);
			this.pictureBox1.Name = "pictureBox1";
			this.pictureBox1.Size = new System.Drawing.Size(151, 121);
			this.pictureBox1.TabIndex = 0;
			this.pictureBox1.TabStop = false;
			// 
			// Scroll_Red
			// 
			this.Scroll_Red.Location = new System.Drawing.Point(9, 22);
			this.Scroll_Red.Maximum = 264;
			this.Scroll_Red.Name = "Scroll_Red";
			this.Scroll_Red.Size = new System.Drawing.Size(224, 19);
			this.Scroll_Red.TabIndex = 1;
			this.Scroll_Red.Scroll += new System.Windows.Forms.ScrollEventHandler(this.Scroll_Red_Scroll);
			// 
			// Scroll_Green
			// 
			this.Scroll_Green.Location = new System.Drawing.Point(9, 62);
			this.Scroll_Green.Maximum = 264;
			this.Scroll_Green.Name = "Scroll_Green";
			this.Scroll_Green.Size = new System.Drawing.Size(224, 19);
			this.Scroll_Green.TabIndex = 2;
			this.Scroll_Green.Scroll += new System.Windows.Forms.ScrollEventHandler(this.Scroll_Green_Scroll);
			// 
			// Scroll_Blue
			// 
			this.Scroll_Blue.Location = new System.Drawing.Point(9, 101);
			this.Scroll_Blue.Maximum = 264;
			this.Scroll_Blue.Name = "Scroll_Blue";
			this.Scroll_Blue.Size = new System.Drawing.Size(224, 19);
			this.Scroll_Blue.TabIndex = 3;
			this.Scroll_Blue.Scroll += new System.Windows.Forms.ScrollEventHandler(this.Scroll_Blue_Scroll);
			// 
			// numeric_Red
			// 
			this.numeric_Red.Location = new System.Drawing.Point(250, 21);
			this.numeric_Red.Maximum = new decimal(new int[] {
            255,
            0,
            0,
            0});
			this.numeric_Red.Name = "numeric_Red";
			this.numeric_Red.Size = new System.Drawing.Size(42, 20);
			this.numeric_Red.TabIndex = 4;
			this.numeric_Red.ValueChanged += new System.EventHandler(this.numeric_Red_ValueChanged);
			this.numeric_Red.KeyUp += new System.Windows.Forms.KeyEventHandler(this.numeric_Red_KeyUp);
			// 
			// numeric_Green
			// 
			this.numeric_Green.Location = new System.Drawing.Point(250, 61);
			this.numeric_Green.Maximum = new decimal(new int[] {
            255,
            0,
            0,
            0});
			this.numeric_Green.Name = "numeric_Green";
			this.numeric_Green.Size = new System.Drawing.Size(42, 20);
			this.numeric_Green.TabIndex = 5;
			this.numeric_Green.ValueChanged += new System.EventHandler(this.numeric_Green_ValueChanged);
			this.numeric_Green.KeyUp += new System.Windows.Forms.KeyEventHandler(this.numeric_Green_KeyUp);
			// 
			// numeric_Blue
			// 
			this.numeric_Blue.Location = new System.Drawing.Point(250, 100);
			this.numeric_Blue.Maximum = new decimal(new int[] {
            255,
            0,
            0,
            0});
			this.numeric_Blue.Name = "numeric_Blue";
			this.numeric_Blue.Size = new System.Drawing.Size(42, 20);
			this.numeric_Blue.TabIndex = 6;
			this.numeric_Blue.ValueChanged += new System.EventHandler(this.numeric_Blue_ValueChanged);
			this.numeric_Blue.KeyUp += new System.Windows.Forms.KeyEventHandler(this.numeric_Blue_KeyUp);
			// 
			// button1
			// 
			this.button1.DialogResult = System.Windows.Forms.DialogResult.OK;
			this.button1.Location = new System.Drawing.Point(12, 169);
			this.button1.Name = "button1";
			this.button1.Size = new System.Drawing.Size(100, 26);
			this.button1.TabIndex = 7;
			this.button1.Text = "OK";
			this.button1.UseVisualStyleBackColor = true;
			this.button1.Click += new System.EventHandler(this.button1_Click);
			// 
			// button2
			// 
			this.button2.Location = new System.Drawing.Point(250, 169);
			this.button2.Name = "button2";
			this.button2.Size = new System.Drawing.Size(100, 26);
			this.button2.TabIndex = 8;
			this.button2.Text = "Other Color";
			this.button2.UseVisualStyleBackColor = true;
			this.button2.Click += new System.EventHandler(this.button2_Click);
			// 
			// button3
			// 
			this.button3.DialogResult = System.Windows.Forms.DialogResult.Cancel;
			this.button3.Location = new System.Drawing.Point(371, 170);
			this.button3.Name = "button3";
			this.button3.Size = new System.Drawing.Size(100, 25);
			this.button3.TabIndex = 9;
			this.button3.Text = "Cancel";
			this.button3.UseVisualStyleBackColor = true;
			this.button3.Click += new System.EventHandler(this.button3_Click);
			// 
			// Form3
			// 
			this.AutoScaleDimensions = new System.Drawing.SizeF(6F, 13F);
			this.AutoScaleMode = System.Windows.Forms.AutoScaleMode.Font;
			this.ClientSize = new System.Drawing.Size(483, 207);
			this.Controls.Add(this.button3);
			this.Controls.Add(this.button2);
			this.Controls.Add(this.button1);
			this.Controls.Add(this.numeric_Blue);
			this.Controls.Add(this.numeric_Green);
			this.Controls.Add(this.numeric_Red);
			this.Controls.Add(this.Scroll_Blue);
			this.Controls.Add(this.Scroll_Green);
			this.Controls.Add(this.Scroll_Red);
			this.Controls.Add(this.pictureBox1);
			this.Name = "Form3";
			this.Text = "Form3";
			this.Load += new System.EventHandler(this.Form3_Load);
			((System.ComponentModel.ISupportInitialize)(this.pictureBox1)).EndInit();
			((System.ComponentModel.ISupportInitialize)(this.numeric_Red)).EndInit();
			((System.ComponentModel.ISupportInitialize)(this.numeric_Green)).EndInit();
			((System.ComponentModel.ISupportInitialize)(this.numeric_Blue)).EndInit();
			this.ResumeLayout(false);

        }

        #endregion

        private System.Windows.Forms.PictureBox pictureBox1;
        private System.Windows.Forms.HScrollBar Scroll_Red;
        private System.Windows.Forms.HScrollBar Scroll_Green;
        private System.Windows.Forms.HScrollBar Scroll_Blue;
        private System.Windows.Forms.NumericUpDown numeric_Red;
        private System.Windows.Forms.NumericUpDown numeric_Green;
        private System.Windows.Forms.NumericUpDown numeric_Blue;
        private System.Windows.Forms.Button button1;
        private System.Windows.Forms.Button button2;
        private System.Windows.Forms.Button button3;
        private System.Windows.Forms.ColorDialog colorDialog1;
    }
}