namespace Lab1
{
	partial class Form1
	{
		/// <summary>
		/// Обязательная переменная конструктора.
		/// </summary>
		private System.ComponentModel.IContainer components = null;

		/// <summary>
		/// Освободить все используемые ресурсы.
		/// </summary>
		/// <param name="disposing">истинно, если управляемый ресурс должен быть удален; иначе ложно.</param>
		protected override void Dispose(bool disposing)
		{
			if (disposing && (components != null))
			{
				components.Dispose();
			}
			base.Dispose(disposing);
		}

		#region Код, автоматически созданный конструктором форм Windows

		/// <summary>
		/// Требуемый метод для поддержки конструктора — не изменяйте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		private void InitializeComponent()
		{
			this.menuStrip1 = new System.Windows.Forms.MenuStrip();
			this.toolStripMenuItem1 = new System.Windows.Forms.ToolStripMenuItem();
			this.openToolStripMenuItem = new System.Windows.Forms.ToolStripMenuItem();
			this.saveToolStripMenuItem = new System.Windows.Forms.ToolStripMenuItem();
			this.exitToolStripMenuItem = new System.Windows.Forms.ToolStripMenuItem();
			this.aboutToolStripMenuItem = new System.Windows.Forms.ToolStripMenuItem();
			this.panel1 = new System.Windows.Forms.Panel();
			this.exitButton = new System.Windows.Forms.Button();
			this.resetButton = new System.Windows.Forms.Button();
			this.groupBox2 = new System.Windows.Forms.GroupBox();
			this.startButton = new System.Windows.Forms.Button();
			this.radioButton3 = new System.Windows.Forms.RadioButton();
			this.radioButton2 = new System.Windows.Forms.RadioButton();
			this.radioButton1 = new System.Windows.Forms.RadioButton();
			this.groupBox1 = new System.Windows.Forms.GroupBox();
			this.findButton = new System.Windows.Forms.Button();
			this.checkBox2 = new System.Windows.Forms.CheckBox();
			this.checkBox1 = new System.Windows.Forms.CheckBox();
			this.listBox3 = new System.Windows.Forms.ListBox();
			this.label3 = new System.Windows.Forms.Label();
			this.textBox1 = new System.Windows.Forms.TextBox();
			this.clrList2Button = new System.Windows.Forms.Button();
			this.sortList2Button = new System.Windows.Forms.Button();
			this.label2 = new System.Windows.Forms.Label();
			this.comboBox2 = new System.Windows.Forms.ComboBox();
			this.listBox2 = new System.Windows.Forms.ListBox();
			this.panel2 = new System.Windows.Forms.Panel();
			this.deleteButton = new System.Windows.Forms.Button();
			this.addButton = new System.Windows.Forms.Button();
			this.allToList1Button = new System.Windows.Forms.Button();
			this.allToList2Button = new System.Windows.Forms.Button();
			this.moveToList1Button = new System.Windows.Forms.Button();
			this.moveToList2Button = new System.Windows.Forms.Button();
			this.clrLIst1Button = new System.Windows.Forms.Button();
			this.sortList1Button = new System.Windows.Forms.Button();
			this.listBox1 = new System.Windows.Forms.ListBox();
			this.label1 = new System.Windows.Forms.Label();
			this.comboBox1 = new System.Windows.Forms.ComboBox();
			this.richTextBox1 = new System.Windows.Forms.RichTextBox();
			this.menuStrip1.SuspendLayout();
			this.panel1.SuspendLayout();
			this.groupBox2.SuspendLayout();
			this.groupBox1.SuspendLayout();
			this.panel2.SuspendLayout();
			this.SuspendLayout();
			// 
			// menuStrip1
			// 
			this.menuStrip1.Items.AddRange(new System.Windows.Forms.ToolStripItem[] {
            this.toolStripMenuItem1,
            this.aboutToolStripMenuItem});
			this.menuStrip1.Location = new System.Drawing.Point(0, 0);
			this.menuStrip1.Name = "menuStrip1";
			this.menuStrip1.Size = new System.Drawing.Size(840, 24);
			this.menuStrip1.TabIndex = 0;
			this.menuStrip1.Text = "menuStrip1";
			// 
			// toolStripMenuItem1
			// 
			this.toolStripMenuItem1.DropDownItems.AddRange(new System.Windows.Forms.ToolStripItem[] {
            this.openToolStripMenuItem,
            this.saveToolStripMenuItem,
            this.exitToolStripMenuItem});
			this.toolStripMenuItem1.Name = "toolStripMenuItem1";
			this.toolStripMenuItem1.Size = new System.Drawing.Size(37, 20);
			this.toolStripMenuItem1.Text = "File";
			// 
			// openToolStripMenuItem
			// 
			this.openToolStripMenuItem.Name = "openToolStripMenuItem";
			this.openToolStripMenuItem.ShortcutKeyDisplayString = "";
			this.openToolStripMenuItem.ShortcutKeys = ((System.Windows.Forms.Keys)((System.Windows.Forms.Keys.Control | System.Windows.Forms.Keys.O)));
			this.openToolStripMenuItem.Size = new System.Drawing.Size(146, 22);
			this.openToolStripMenuItem.Text = "Open";
			this.openToolStripMenuItem.Click += new System.EventHandler(this.openToolStripMenuItem_Click);
			// 
			// saveToolStripMenuItem
			// 
			this.saveToolStripMenuItem.Name = "saveToolStripMenuItem";
			this.saveToolStripMenuItem.ShortcutKeyDisplayString = "";
			this.saveToolStripMenuItem.ShortcutKeys = ((System.Windows.Forms.Keys)((System.Windows.Forms.Keys.Control | System.Windows.Forms.Keys.S)));
			this.saveToolStripMenuItem.Size = new System.Drawing.Size(146, 22);
			this.saveToolStripMenuItem.Text = "Save";
			this.saveToolStripMenuItem.Click += new System.EventHandler(this.saveToolStripMenuItem_Click);
			// 
			// exitToolStripMenuItem
			// 
			this.exitToolStripMenuItem.Name = "exitToolStripMenuItem";
			this.exitToolStripMenuItem.ShortcutKeyDisplayString = "";
			this.exitToolStripMenuItem.ShortcutKeys = ((System.Windows.Forms.Keys)((System.Windows.Forms.Keys.Alt | System.Windows.Forms.Keys.X)));
			this.exitToolStripMenuItem.Size = new System.Drawing.Size(180, 22);
			this.exitToolStripMenuItem.Text = "Exit";
			this.exitToolStripMenuItem.Click += new System.EventHandler(this.exitButton_Click);
			// 
			// aboutToolStripMenuItem
			// 
			this.aboutToolStripMenuItem.Name = "aboutToolStripMenuItem";
			this.aboutToolStripMenuItem.Size = new System.Drawing.Size(24, 20);
			this.aboutToolStripMenuItem.Text = "?";
			this.aboutToolStripMenuItem.Click += new System.EventHandler(this.aboutToolStripMenuItem_Click);
			// 
			// panel1
			// 
			this.panel1.BorderStyle = System.Windows.Forms.BorderStyle.Fixed3D;
			this.panel1.Controls.Add(this.exitButton);
			this.panel1.Controls.Add(this.resetButton);
			this.panel1.Controls.Add(this.groupBox2);
			this.panel1.Controls.Add(this.groupBox1);
			this.panel1.Controls.Add(this.clrList2Button);
			this.panel1.Controls.Add(this.sortList2Button);
			this.panel1.Controls.Add(this.label2);
			this.panel1.Controls.Add(this.comboBox2);
			this.panel1.Controls.Add(this.listBox2);
			this.panel1.Controls.Add(this.panel2);
			this.panel1.Controls.Add(this.clrLIst1Button);
			this.panel1.Controls.Add(this.sortList1Button);
			this.panel1.Controls.Add(this.listBox1);
			this.panel1.Controls.Add(this.label1);
			this.panel1.Controls.Add(this.comboBox1);
			this.panel1.Location = new System.Drawing.Point(12, 27);
			this.panel1.Name = "panel1";
			this.panel1.Size = new System.Drawing.Size(474, 532);
			this.panel1.TabIndex = 1;
			// 
			// exitButton
			// 
			this.exitButton.Location = new System.Drawing.Point(392, 503);
			this.exitButton.Name = "exitButton";
			this.exitButton.Size = new System.Drawing.Size(75, 23);
			this.exitButton.TabIndex = 16;
			this.exitButton.Text = "Close";
			this.exitButton.UseVisualStyleBackColor = true;
			this.exitButton.Click += new System.EventHandler(this.exitButton_Click);
			// 
			// resetButton
			// 
			this.resetButton.Location = new System.Drawing.Point(392, 474);
			this.resetButton.Name = "resetButton";
			this.resetButton.Size = new System.Drawing.Size(75, 23);
			this.resetButton.TabIndex = 15;
			this.resetButton.Text = "Сброс";
			this.resetButton.UseVisualStyleBackColor = true;
			this.resetButton.Click += new System.EventHandler(this.resetButton_Click);
			// 
			// groupBox2
			// 
			this.groupBox2.Controls.Add(this.startButton);
			this.groupBox2.Controls.Add(this.radioButton3);
			this.groupBox2.Controls.Add(this.radioButton2);
			this.groupBox2.Controls.Add(this.radioButton1);
			this.groupBox2.Location = new System.Drawing.Point(233, 302);
			this.groupBox2.Name = "groupBox2";
			this.groupBox2.Size = new System.Drawing.Size(228, 89);
			this.groupBox2.TabIndex = 14;
			this.groupBox2.TabStop = false;
			this.groupBox2.Text = "Выбор слов";
			// 
			// startButton
			// 
			this.startButton.Location = new System.Drawing.Point(147, 41);
			this.startButton.Name = "startButton";
			this.startButton.Size = new System.Drawing.Size(75, 41);
			this.startButton.TabIndex = 3;
			this.startButton.Text = "Начать";
			this.startButton.UseVisualStyleBackColor = true;
			this.startButton.Click += new System.EventHandler(this.startButton_Click);
			// 
			// radioButton3
			// 
			this.radioButton3.AutoSize = true;
			this.radioButton3.Location = new System.Drawing.Point(6, 65);
			this.radioButton3.Name = "radioButton3";
			this.radioButton3.Size = new System.Drawing.Size(131, 17);
			this.radioButton3.TabIndex = 2;
			this.radioButton3.Text = "Содержащие \"e-mail\"";
			this.radioButton3.UseVisualStyleBackColor = true;
			// 
			// radioButton2
			// 
			this.radioButton2.AutoSize = true;
			this.radioButton2.Location = new System.Drawing.Point(6, 42);
			this.radioButton2.Name = "radioButton2";
			this.radioButton2.Size = new System.Drawing.Size(128, 17);
			this.radioButton2.TabIndex = 1;
			this.radioButton2.Text = "Содержащие цифры";
			this.radioButton2.UseVisualStyleBackColor = true;
			// 
			// radioButton1
			// 
			this.radioButton1.AutoSize = true;
			this.radioButton1.Checked = true;
			this.radioButton1.Location = new System.Drawing.Point(6, 19);
			this.radioButton1.Name = "radioButton1";
			this.radioButton1.Size = new System.Drawing.Size(44, 17);
			this.radioButton1.TabIndex = 0;
			this.radioButton1.TabStop = true;
			this.radioButton1.Text = "Все";
			this.radioButton1.UseVisualStyleBackColor = true;
			// 
			// groupBox1
			// 
			this.groupBox1.Controls.Add(this.findButton);
			this.groupBox1.Controls.Add(this.checkBox2);
			this.groupBox1.Controls.Add(this.checkBox1);
			this.groupBox1.Controls.Add(this.listBox3);
			this.groupBox1.Controls.Add(this.label3);
			this.groupBox1.Controls.Add(this.textBox1);
			this.groupBox1.Location = new System.Drawing.Point(18, 302);
			this.groupBox1.Name = "groupBox1";
			this.groupBox1.Size = new System.Drawing.Size(164, 224);
			this.groupBox1.TabIndex = 13;
			this.groupBox1.TabStop = false;
			this.groupBox1.Text = "Поиск";
			// 
			// findButton
			// 
			this.findButton.Location = new System.Drawing.Point(83, 170);
			this.findButton.Name = "findButton";
			this.findButton.Size = new System.Drawing.Size(75, 40);
			this.findButton.TabIndex = 5;
			this.findButton.Text = "Поиск";
			this.findButton.UseVisualStyleBackColor = true;
			this.findButton.Click += new System.EventHandler(this.findButton_Click);
			// 
			// checkBox2
			// 
			this.checkBox2.AutoSize = true;
			this.checkBox2.Location = new System.Drawing.Point(6, 193);
			this.checkBox2.Name = "checkBox2";
			this.checkBox2.Size = new System.Drawing.Size(72, 17);
			this.checkBox2.TabIndex = 4;
			this.checkBox2.Text = "Раздел 2";
			this.checkBox2.UseVisualStyleBackColor = true;
			// 
			// checkBox1
			// 
			this.checkBox1.AutoSize = true;
			this.checkBox1.Checked = true;
			this.checkBox1.CheckState = System.Windows.Forms.CheckState.Checked;
			this.checkBox1.Location = new System.Drawing.Point(6, 170);
			this.checkBox1.Name = "checkBox1";
			this.checkBox1.Size = new System.Drawing.Size(72, 17);
			this.checkBox1.TabIndex = 3;
			this.checkBox1.Text = "Раздел 1";
			this.checkBox1.UseVisualStyleBackColor = true;
			// 
			// listBox3
			// 
			this.listBox3.FormattingEnabled = true;
			this.listBox3.Location = new System.Drawing.Point(6, 69);
			this.listBox3.Name = "listBox3";
			this.listBox3.Size = new System.Drawing.Size(152, 95);
			this.listBox3.TabIndex = 2;
			// 
			// label3
			// 
			this.label3.AutoSize = true;
			this.label3.Location = new System.Drawing.Point(3, 27);
			this.label3.Name = "label3";
			this.label3.Size = new System.Drawing.Size(129, 13);
			this.label3.TabIndex = 1;
			this.label3.Text = "Введите искомое слово";
			// 
			// textBox1
			// 
			this.textBox1.Location = new System.Drawing.Point(6, 43);
			this.textBox1.Name = "textBox1";
			this.textBox1.Size = new System.Drawing.Size(152, 20);
			this.textBox1.TabIndex = 0;
			this.textBox1.Enter += new System.EventHandler(this.findButton_Click);
			// 
			// clrList2Button
			// 
			this.clrList2Button.Location = new System.Drawing.Point(386, 262);
			this.clrList2Button.Name = "clrList2Button";
			this.clrList2Button.Size = new System.Drawing.Size(75, 23);
			this.clrList2Button.TabIndex = 12;
			this.clrList2Button.Text = "Очистить";
			this.clrList2Button.UseVisualStyleBackColor = true;
			this.clrList2Button.Click += new System.EventHandler(this.clrList2Button_Click);
			// 
			// sortList2Button
			// 
			this.sortList2Button.Location = new System.Drawing.Point(298, 262);
			this.sortList2Button.Name = "sortList2Button";
			this.sortList2Button.Size = new System.Drawing.Size(82, 23);
			this.sortList2Button.TabIndex = 11;
			this.sortList2Button.Text = "Сортировать";
			this.sortList2Button.UseVisualStyleBackColor = true;
			this.sortList2Button.Click += new System.EventHandler(this.sortList2Button_Click);
			// 
			// label2
			// 
			this.label2.AutoSize = true;
			this.label2.Location = new System.Drawing.Point(295, 14);
			this.label2.Name = "label2";
			this.label2.Size = new System.Drawing.Size(53, 13);
			this.label2.TabIndex = 10;
			this.label2.Text = "Раздел 2";
			// 
			// comboBox2
			// 
			this.comboBox2.FormattingEnabled = true;
			this.comboBox2.Items.AddRange(new object[] {
            "Алфавиту (по возрастанию)",
            "Алфавиту (по убыванию)",
            "Длине слова (по возрастанию)",
            "Длине слова (по убыванию)"});
			this.comboBox2.Location = new System.Drawing.Point(297, 30);
			this.comboBox2.Name = "comboBox2";
			this.comboBox2.Size = new System.Drawing.Size(164, 21);
			this.comboBox2.TabIndex = 9;
			this.comboBox2.Text = "Сортировка по...";
			// 
			// listBox2
			// 
			this.listBox2.FormattingEnabled = true;
			this.listBox2.Location = new System.Drawing.Point(298, 57);
			this.listBox2.Name = "listBox2";
			this.listBox2.SelectionMode = System.Windows.Forms.SelectionMode.MultiExtended;
			this.listBox2.Size = new System.Drawing.Size(163, 199);
			this.listBox2.TabIndex = 8;
			// 
			// panel2
			// 
			this.panel2.BorderStyle = System.Windows.Forms.BorderStyle.Fixed3D;
			this.panel2.Controls.Add(this.deleteButton);
			this.panel2.Controls.Add(this.addButton);
			this.panel2.Controls.Add(this.allToList1Button);
			this.panel2.Controls.Add(this.allToList2Button);
			this.panel2.Controls.Add(this.moveToList1Button);
			this.panel2.Controls.Add(this.moveToList2Button);
			this.panel2.Location = new System.Drawing.Point(188, 57);
			this.panel2.Name = "panel2";
			this.panel2.Size = new System.Drawing.Size(104, 199);
			this.panel2.TabIndex = 7;
			// 
			// deleteButton
			// 
			this.deleteButton.Location = new System.Drawing.Point(3, 169);
			this.deleteButton.Name = "deleteButton";
			this.deleteButton.Size = new System.Drawing.Size(94, 23);
			this.deleteButton.TabIndex = 5;
			this.deleteButton.Text = "Удалить";
			this.deleteButton.UseVisualStyleBackColor = true;
			this.deleteButton.Click += new System.EventHandler(this.deleteButton_Click);
			// 
			// addButton
			// 
			this.addButton.Location = new System.Drawing.Point(3, 141);
			this.addButton.Name = "addButton";
			this.addButton.Size = new System.Drawing.Size(94, 23);
			this.addButton.TabIndex = 4;
			this.addButton.Text = "Добавить";
			this.addButton.UseVisualStyleBackColor = true;
			this.addButton.Click += new System.EventHandler(this.addButton_Click);
			// 
			// allToList1Button
			// 
			this.allToList1Button.Location = new System.Drawing.Point(3, 90);
			this.allToList1Button.Name = "allToList1Button";
			this.allToList1Button.Size = new System.Drawing.Size(94, 23);
			this.allToList1Button.TabIndex = 3;
			this.allToList1Button.Text = "<<";
			this.allToList1Button.UseVisualStyleBackColor = true;
			this.allToList1Button.Click += new System.EventHandler(this.allToList1Button_Click);
			// 
			// allToList2Button
			// 
			this.allToList2Button.Location = new System.Drawing.Point(3, 61);
			this.allToList2Button.Name = "allToList2Button";
			this.allToList2Button.Size = new System.Drawing.Size(94, 23);
			this.allToList2Button.TabIndex = 2;
			this.allToList2Button.Text = ">>";
			this.allToList2Button.UseVisualStyleBackColor = true;
			this.allToList2Button.Click += new System.EventHandler(this.allToList2Button_Click);
			// 
			// moveToList1Button
			// 
			this.moveToList1Button.Location = new System.Drawing.Point(3, 32);
			this.moveToList1Button.Name = "moveToList1Button";
			this.moveToList1Button.Size = new System.Drawing.Size(94, 23);
			this.moveToList1Button.TabIndex = 1;
			this.moveToList1Button.Text = "<";
			this.moveToList1Button.UseVisualStyleBackColor = true;
			this.moveToList1Button.Click += new System.EventHandler(this.moveToList1Button_Click);
			// 
			// moveToList2Button
			// 
			this.moveToList2Button.Location = new System.Drawing.Point(3, 3);
			this.moveToList2Button.Name = "moveToList2Button";
			this.moveToList2Button.Size = new System.Drawing.Size(94, 23);
			this.moveToList2Button.TabIndex = 0;
			this.moveToList2Button.Text = ">";
			this.moveToList2Button.UseVisualStyleBackColor = true;
			this.moveToList2Button.Click += new System.EventHandler(this.moveToList2Button_Click);
			// 
			// clrLIst1Button
			// 
			this.clrLIst1Button.Location = new System.Drawing.Point(107, 262);
			this.clrLIst1Button.Name = "clrLIst1Button";
			this.clrLIst1Button.Size = new System.Drawing.Size(75, 23);
			this.clrLIst1Button.TabIndex = 6;
			this.clrLIst1Button.Text = "Очистить";
			this.clrLIst1Button.UseVisualStyleBackColor = true;
			this.clrLIst1Button.Click += new System.EventHandler(this.clrLIst1Button_Click);
			// 
			// sortList1Button
			// 
			this.sortList1Button.Location = new System.Drawing.Point(19, 262);
			this.sortList1Button.Name = "sortList1Button";
			this.sortList1Button.Size = new System.Drawing.Size(82, 23);
			this.sortList1Button.TabIndex = 5;
			this.sortList1Button.Text = "Сортировать";
			this.sortList1Button.UseVisualStyleBackColor = true;
			this.sortList1Button.Click += new System.EventHandler(this.sortList1Button_Click);
			// 
			// listBox1
			// 
			this.listBox1.FormattingEnabled = true;
			this.listBox1.Location = new System.Drawing.Point(19, 57);
			this.listBox1.Name = "listBox1";
			this.listBox1.SelectionMode = System.Windows.Forms.SelectionMode.MultiExtended;
			this.listBox1.Size = new System.Drawing.Size(163, 199);
			this.listBox1.TabIndex = 4;
			// 
			// label1
			// 
			this.label1.AutoSize = true;
			this.label1.Location = new System.Drawing.Point(15, 14);
			this.label1.Name = "label1";
			this.label1.Size = new System.Drawing.Size(53, 13);
			this.label1.TabIndex = 3;
			this.label1.Text = "Раздел 1";
			// 
			// comboBox1
			// 
			this.comboBox1.FormattingEnabled = true;
			this.comboBox1.Items.AddRange(new object[] {
            "Алфавиту (по возрастанию)",
            "Алфавиту (по убыванию)",
            "Длине слова (по возрастанию)",
            "Длине слова (по убыванию)"});
			this.comboBox1.Location = new System.Drawing.Point(18, 30);
			this.comboBox1.Name = "comboBox1";
			this.comboBox1.Size = new System.Drawing.Size(164, 21);
			this.comboBox1.TabIndex = 2;
			this.comboBox1.Text = "Сортировка по...";
			// 
			// richTextBox1
			// 
			this.richTextBox1.Location = new System.Drawing.Point(492, 27);
			this.richTextBox1.Name = "richTextBox1";
			this.richTextBox1.Size = new System.Drawing.Size(343, 532);
			this.richTextBox1.TabIndex = 2;
			this.richTextBox1.Text = "";
			// 
			// Form1
			// 
			this.AutoScaleDimensions = new System.Drawing.SizeF(6F, 13F);
			this.AutoScaleMode = System.Windows.Forms.AutoScaleMode.Font;
			this.ClientSize = new System.Drawing.Size(840, 571);
			this.Controls.Add(this.richTextBox1);
			this.Controls.Add(this.panel1);
			this.Controls.Add(this.menuStrip1);
			this.MainMenuStrip = this.menuStrip1;
			this.Name = "Form1";
			this.Text = "Form1";
			this.menuStrip1.ResumeLayout(false);
			this.menuStrip1.PerformLayout();
			this.panel1.ResumeLayout(false);
			this.panel1.PerformLayout();
			this.groupBox2.ResumeLayout(false);
			this.groupBox2.PerformLayout();
			this.groupBox1.ResumeLayout(false);
			this.groupBox1.PerformLayout();
			this.panel2.ResumeLayout(false);
			this.ResumeLayout(false);
			this.PerformLayout();

		}

		#endregion

		private System.Windows.Forms.MenuStrip menuStrip1;
		private System.Windows.Forms.ToolStripMenuItem toolStripMenuItem1;
		private System.Windows.Forms.ToolStripMenuItem aboutToolStripMenuItem;
		private System.Windows.Forms.Panel panel1;
		private System.Windows.Forms.Label label1;
		private System.Windows.Forms.ComboBox comboBox1;
		private System.Windows.Forms.Button clrList2Button;
		private System.Windows.Forms.Button sortList2Button;
		private System.Windows.Forms.Label label2;
		private System.Windows.Forms.ComboBox comboBox2;
		private System.Windows.Forms.Panel panel2;
		private System.Windows.Forms.Button deleteButton;
		private System.Windows.Forms.Button addButton;
		private System.Windows.Forms.Button allToList1Button;
		private System.Windows.Forms.Button allToList2Button;
		private System.Windows.Forms.Button moveToList1Button;
		private System.Windows.Forms.Button moveToList2Button;
		private System.Windows.Forms.Button clrLIst1Button;
		private System.Windows.Forms.Button sortList1Button;
		private System.Windows.Forms.Button exitButton;
		private System.Windows.Forms.Button resetButton;
		private System.Windows.Forms.GroupBox groupBox2;
		private System.Windows.Forms.Button startButton;
		private System.Windows.Forms.RadioButton radioButton3;
		private System.Windows.Forms.RadioButton radioButton2;
		private System.Windows.Forms.RadioButton radioButton1;
		private System.Windows.Forms.GroupBox groupBox1;
		private System.Windows.Forms.Button findButton;
		private System.Windows.Forms.CheckBox checkBox2;
		private System.Windows.Forms.CheckBox checkBox1;
		private System.Windows.Forms.ListBox listBox3;
		private System.Windows.Forms.Label label3;
		private System.Windows.Forms.TextBox textBox1;
		private System.Windows.Forms.ToolStripMenuItem openToolStripMenuItem;
		private System.Windows.Forms.ToolStripMenuItem saveToolStripMenuItem;
		private System.Windows.Forms.ToolStripMenuItem exitToolStripMenuItem;
		private System.Windows.Forms.RichTextBox richTextBox1;
		public System.Windows.Forms.ListBox listBox2;
		public System.Windows.Forms.ListBox listBox1;
	}
}

