﻿namespace WindowsFormsApp1
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
			this.components = new System.ComponentModel.Container();
			System.ComponentModel.ComponentResourceManager resources = new System.ComponentModel.ComponentResourceManager(typeof(Form1));
			this.dataGridView1 = new System.Windows.Forms.DataGridView();
			this.кодDataGridViewTextBoxColumn = new System.Windows.Forms.DataGridViewTextBoxColumn();
			this.факультетDataGridViewTextBoxColumn = new System.Windows.Forms.DataGridViewTextBoxColumn();
			this.курсDataGridViewTextBoxColumn = new System.Windows.Forms.DataGridViewTextBoxColumn();
			this.количествоГруппDataGridViewTextBoxColumn = new System.Windows.Forms.DataGridViewTextBoxColumn();
			this.факультетBindingSource = new System.Windows.Forms.BindingSource(this.components);
			this.база_данных3DataSet = new WindowsFormsApp1.База_данных3DataSet();
			this.факультетTableAdapter = new WindowsFormsApp1.База_данных3DataSetTableAdapters.ФакультетTableAdapter();
			this.bindingNavigator1 = new System.Windows.Forms.BindingNavigator(this.components);
			this.bindingNavigatorAddNewItem = new System.Windows.Forms.ToolStripButton();
			this.bindingNavigatorCountItem = new System.Windows.Forms.ToolStripLabel();
			this.bindingNavigatorDeleteItem = new System.Windows.Forms.ToolStripButton();
			this.bindingNavigatorMoveFirstItem = new System.Windows.Forms.ToolStripButton();
			this.bindingNavigatorMovePreviousItem = new System.Windows.Forms.ToolStripButton();
			this.bindingNavigatorSeparator = new System.Windows.Forms.ToolStripSeparator();
			this.bindingNavigatorPositionItem = new System.Windows.Forms.ToolStripTextBox();
			this.bindingNavigatorSeparator1 = new System.Windows.Forms.ToolStripSeparator();
			this.bindingNavigatorMoveNextItem = new System.Windows.Forms.ToolStripButton();
			this.bindingNavigatorMoveLastItem = new System.Windows.Forms.ToolStripButton();
			this.bindingNavigatorSeparator2 = new System.Windows.Forms.ToolStripSeparator();
			this.dataGridView2 = new System.Windows.Forms.DataGridView();
			this.кодDataGridViewTextBoxColumn1 = new System.Windows.Forms.DataGridViewTextBoxColumn();
			this.названиеГруппыDataGridViewTextBoxColumn = new System.Windows.Forms.DataGridViewTextBoxColumn();
			this.фамилияСтаростыDataGridViewTextBoxColumn = new System.Windows.Forms.DataGridViewTextBoxColumn();
			this.количествоDataGridViewTextBoxColumn = new System.Windows.Forms.DataGridViewTextBoxColumn();
			this.факультетIDDataGridViewTextBoxColumn = new System.Windows.Forms.DataGridViewTextBoxColumn();
			this.факультетГруппаBindingSource = new System.Windows.Forms.BindingSource(this.components);
			this.группаTableAdapter = new WindowsFormsApp1.База_данных3DataSetTableAdapters.ГруппаTableAdapter();
			this.bindingNavigator2 = new System.Windows.Forms.BindingNavigator(this.components);
			this.bindingNavigatorAddNewItem1 = new System.Windows.Forms.ToolStripButton();
			this.bindingNavigatorCountItem1 = new System.Windows.Forms.ToolStripLabel();
			this.bindingNavigatorDeleteItem1 = new System.Windows.Forms.ToolStripButton();
			this.bindingNavigatorMoveFirstItem1 = new System.Windows.Forms.ToolStripButton();
			this.bindingNavigatorMovePreviousItem1 = new System.Windows.Forms.ToolStripButton();
			this.bindingNavigatorSeparator3 = new System.Windows.Forms.ToolStripSeparator();
			this.bindingNavigatorPositionItem1 = new System.Windows.Forms.ToolStripTextBox();
			this.bindingNavigatorSeparator4 = new System.Windows.Forms.ToolStripSeparator();
			this.bindingNavigatorMoveNextItem1 = new System.Windows.Forms.ToolStripButton();
			this.bindingNavigatorMoveLastItem1 = new System.Windows.Forms.ToolStripButton();
			this.bindingNavigatorSeparator5 = new System.Windows.Forms.ToolStripSeparator();
			this.dataGridView3 = new System.Windows.Forms.DataGridView();
			this.кодDataGridViewTextBoxColumn2 = new System.Windows.Forms.DataGridViewTextBoxColumn();
			this.фИОDataGridViewTextBoxColumn = new System.Windows.Forms.DataGridViewTextBoxColumn();
			this.адресDataGridViewTextBoxColumn = new System.Windows.Forms.DataGridViewTextBoxColumn();
			this.телефонDataGridViewTextBoxColumn = new System.Windows.Forms.DataGridViewTextBoxColumn();
			this.iDGRDataGridViewTextBoxColumn = new System.Windows.Forms.DataGridViewTextBoxColumn();
			this.группаСтудентыBindingSource = new System.Windows.Forms.BindingSource(this.components);
			this.студентыTableAdapter = new WindowsFormsApp1.База_данных3DataSetTableAdapters.СтудентыTableAdapter();
			this.bindingNavigator3 = new System.Windows.Forms.BindingNavigator(this.components);
			this.bindingNavigatorAddNewItem2 = new System.Windows.Forms.ToolStripButton();
			this.bindingNavigatorCountItem2 = new System.Windows.Forms.ToolStripLabel();
			this.bindingNavigatorDeleteItem2 = new System.Windows.Forms.ToolStripButton();
			this.bindingNavigatorMoveFirstItem2 = new System.Windows.Forms.ToolStripButton();
			this.bindingNavigatorMovePreviousItem2 = new System.Windows.Forms.ToolStripButton();
			this.bindingNavigatorSeparator6 = new System.Windows.Forms.ToolStripSeparator();
			this.bindingNavigatorPositionItem2 = new System.Windows.Forms.ToolStripTextBox();
			this.bindingNavigatorSeparator7 = new System.Windows.Forms.ToolStripSeparator();
			this.bindingNavigatorMoveNextItem2 = new System.Windows.Forms.ToolStripButton();
			this.bindingNavigatorMoveLastItem2 = new System.Windows.Forms.ToolStripButton();
			this.bindingNavigatorSeparator8 = new System.Windows.Forms.ToolStripSeparator();
			this.button1 = new System.Windows.Forms.Button();
			this.textBox1 = new System.Windows.Forms.TextBox();
			this.textBox2 = new System.Windows.Forms.TextBox();
			this.label1 = new System.Windows.Forms.Label();
			this.label2 = new System.Windows.Forms.Label();
			this.button2 = new System.Windows.Forms.Button();
			((System.ComponentModel.ISupportInitialize)(this.dataGridView1)).BeginInit();
			((System.ComponentModel.ISupportInitialize)(this.факультетBindingSource)).BeginInit();
			((System.ComponentModel.ISupportInitialize)(this.база_данных3DataSet)).BeginInit();
			((System.ComponentModel.ISupportInitialize)(this.bindingNavigator1)).BeginInit();
			this.bindingNavigator1.SuspendLayout();
			((System.ComponentModel.ISupportInitialize)(this.dataGridView2)).BeginInit();
			((System.ComponentModel.ISupportInitialize)(this.факультетГруппаBindingSource)).BeginInit();
			((System.ComponentModel.ISupportInitialize)(this.bindingNavigator2)).BeginInit();
			this.bindingNavigator2.SuspendLayout();
			((System.ComponentModel.ISupportInitialize)(this.dataGridView3)).BeginInit();
			((System.ComponentModel.ISupportInitialize)(this.группаСтудентыBindingSource)).BeginInit();
			((System.ComponentModel.ISupportInitialize)(this.bindingNavigator3)).BeginInit();
			this.bindingNavigator3.SuspendLayout();
			this.SuspendLayout();
			// 
			// dataGridView1
			// 
			this.dataGridView1.AutoGenerateColumns = false;
			this.dataGridView1.ColumnHeadersHeightSizeMode = System.Windows.Forms.DataGridViewColumnHeadersHeightSizeMode.AutoSize;
			this.dataGridView1.Columns.AddRange(new System.Windows.Forms.DataGridViewColumn[] {
            this.кодDataGridViewTextBoxColumn,
            this.факультетDataGridViewTextBoxColumn,
            this.курсDataGridViewTextBoxColumn,
            this.количествоГруппDataGridViewTextBoxColumn});
			this.dataGridView1.DataSource = this.факультетBindingSource;
			this.dataGridView1.Location = new System.Drawing.Point(9, 37);
			this.dataGridView1.Name = "dataGridView1";
			this.dataGridView1.Size = new System.Drawing.Size(445, 150);
			this.dataGridView1.TabIndex = 0;
			// 
			// кодDataGridViewTextBoxColumn
			// 
			this.кодDataGridViewTextBoxColumn.DataPropertyName = "Код";
			this.кодDataGridViewTextBoxColumn.HeaderText = "Код";
			this.кодDataGridViewTextBoxColumn.Name = "кодDataGridViewTextBoxColumn";
			// 
			// факультетDataGridViewTextBoxColumn
			// 
			this.факультетDataGridViewTextBoxColumn.DataPropertyName = "Факультет";
			this.факультетDataGridViewTextBoxColumn.HeaderText = "Факультет";
			this.факультетDataGridViewTextBoxColumn.Name = "факультетDataGridViewTextBoxColumn";
			// 
			// курсDataGridViewTextBoxColumn
			// 
			this.курсDataGridViewTextBoxColumn.DataPropertyName = "Курс";
			this.курсDataGridViewTextBoxColumn.HeaderText = "Курс";
			this.курсDataGridViewTextBoxColumn.Name = "курсDataGridViewTextBoxColumn";
			// 
			// количествоГруппDataGridViewTextBoxColumn
			// 
			this.количествоГруппDataGridViewTextBoxColumn.DataPropertyName = "Количество групп";
			this.количествоГруппDataGridViewTextBoxColumn.HeaderText = "Количество групп";
			this.количествоГруппDataGridViewTextBoxColumn.Name = "количествоГруппDataGridViewTextBoxColumn";
			// 
			// факультетBindingSource
			// 
			this.факультетBindingSource.DataMember = "Факультет";
			this.факультетBindingSource.DataSource = this.база_данных3DataSet;
			// 
			// база_данных3DataSet
			// 
			this.база_данных3DataSet.DataSetName = "База_данных3DataSet";
			this.база_данных3DataSet.SchemaSerializationMode = System.Data.SchemaSerializationMode.IncludeSchema;
			// 
			// факультетTableAdapter
			// 
			this.факультетTableAdapter.ClearBeforeFill = true;
			// 
			// bindingNavigator1
			// 
			this.bindingNavigator1.AddNewItem = this.bindingNavigatorAddNewItem;
			this.bindingNavigator1.BindingSource = this.факультетBindingSource;
			this.bindingNavigator1.CountItem = this.bindingNavigatorCountItem;
			this.bindingNavigator1.DeleteItem = this.bindingNavigatorDeleteItem;
			this.bindingNavigator1.Dock = System.Windows.Forms.DockStyle.None;
			this.bindingNavigator1.Items.AddRange(new System.Windows.Forms.ToolStripItem[] {
            this.bindingNavigatorMoveFirstItem,
            this.bindingNavigatorMovePreviousItem,
            this.bindingNavigatorSeparator,
            this.bindingNavigatorPositionItem,
            this.bindingNavigatorCountItem,
            this.bindingNavigatorSeparator1,
            this.bindingNavigatorMoveNextItem,
            this.bindingNavigatorMoveLastItem,
            this.bindingNavigatorSeparator2,
            this.bindingNavigatorAddNewItem,
            this.bindingNavigatorDeleteItem});
			this.bindingNavigator1.Location = new System.Drawing.Point(9, 9);
			this.bindingNavigator1.MoveFirstItem = this.bindingNavigatorMoveFirstItem;
			this.bindingNavigator1.MoveLastItem = this.bindingNavigatorMoveLastItem;
			this.bindingNavigator1.MoveNextItem = this.bindingNavigatorMoveNextItem;
			this.bindingNavigator1.MovePreviousItem = this.bindingNavigatorMovePreviousItem;
			this.bindingNavigator1.Name = "bindingNavigator1";
			this.bindingNavigator1.PositionItem = this.bindingNavigatorPositionItem;
			this.bindingNavigator1.Size = new System.Drawing.Size(263, 25);
			this.bindingNavigator1.TabIndex = 1;
			this.bindingNavigator1.Text = "bindingNavigator1";
			// 
			// bindingNavigatorAddNewItem
			// 
			this.bindingNavigatorAddNewItem.DisplayStyle = System.Windows.Forms.ToolStripItemDisplayStyle.Image;
			this.bindingNavigatorAddNewItem.Image = ((System.Drawing.Image)(resources.GetObject("bindingNavigatorAddNewItem.Image")));
			this.bindingNavigatorAddNewItem.Name = "bindingNavigatorAddNewItem";
			this.bindingNavigatorAddNewItem.RightToLeftAutoMirrorImage = true;
			this.bindingNavigatorAddNewItem.Size = new System.Drawing.Size(23, 22);
			this.bindingNavigatorAddNewItem.Text = "Добавить";
			// 
			// bindingNavigatorCountItem
			// 
			this.bindingNavigatorCountItem.Name = "bindingNavigatorCountItem";
			this.bindingNavigatorCountItem.Size = new System.Drawing.Size(43, 22);
			this.bindingNavigatorCountItem.Text = "для {0}";
			this.bindingNavigatorCountItem.ToolTipText = "Общее число элементов";
			// 
			// bindingNavigatorDeleteItem
			// 
			this.bindingNavigatorDeleteItem.DisplayStyle = System.Windows.Forms.ToolStripItemDisplayStyle.Image;
			this.bindingNavigatorDeleteItem.Image = ((System.Drawing.Image)(resources.GetObject("bindingNavigatorDeleteItem.Image")));
			this.bindingNavigatorDeleteItem.Name = "bindingNavigatorDeleteItem";
			this.bindingNavigatorDeleteItem.RightToLeftAutoMirrorImage = true;
			this.bindingNavigatorDeleteItem.Size = new System.Drawing.Size(23, 22);
			this.bindingNavigatorDeleteItem.Text = "Удалить";
			// 
			// bindingNavigatorMoveFirstItem
			// 
			this.bindingNavigatorMoveFirstItem.DisplayStyle = System.Windows.Forms.ToolStripItemDisplayStyle.Image;
			this.bindingNavigatorMoveFirstItem.Image = ((System.Drawing.Image)(resources.GetObject("bindingNavigatorMoveFirstItem.Image")));
			this.bindingNavigatorMoveFirstItem.Name = "bindingNavigatorMoveFirstItem";
			this.bindingNavigatorMoveFirstItem.RightToLeftAutoMirrorImage = true;
			this.bindingNavigatorMoveFirstItem.Size = new System.Drawing.Size(23, 22);
			this.bindingNavigatorMoveFirstItem.Text = "Переместить в начало";
			// 
			// bindingNavigatorMovePreviousItem
			// 
			this.bindingNavigatorMovePreviousItem.DisplayStyle = System.Windows.Forms.ToolStripItemDisplayStyle.Image;
			this.bindingNavigatorMovePreviousItem.Image = ((System.Drawing.Image)(resources.GetObject("bindingNavigatorMovePreviousItem.Image")));
			this.bindingNavigatorMovePreviousItem.Name = "bindingNavigatorMovePreviousItem";
			this.bindingNavigatorMovePreviousItem.RightToLeftAutoMirrorImage = true;
			this.bindingNavigatorMovePreviousItem.Size = new System.Drawing.Size(23, 22);
			this.bindingNavigatorMovePreviousItem.Text = "Переместить назад";
			// 
			// bindingNavigatorSeparator
			// 
			this.bindingNavigatorSeparator.Name = "bindingNavigatorSeparator";
			this.bindingNavigatorSeparator.Size = new System.Drawing.Size(6, 25);
			// 
			// bindingNavigatorPositionItem
			// 
			this.bindingNavigatorPositionItem.AccessibleName = "Положение";
			this.bindingNavigatorPositionItem.AutoSize = false;
			this.bindingNavigatorPositionItem.Name = "bindingNavigatorPositionItem";
			this.bindingNavigatorPositionItem.Size = new System.Drawing.Size(50, 23);
			this.bindingNavigatorPositionItem.Text = "0";
			this.bindingNavigatorPositionItem.ToolTipText = "Текущее положение";
			// 
			// bindingNavigatorSeparator1
			// 
			this.bindingNavigatorSeparator1.Name = "bindingNavigatorSeparator1";
			this.bindingNavigatorSeparator1.Size = new System.Drawing.Size(6, 25);
			// 
			// bindingNavigatorMoveNextItem
			// 
			this.bindingNavigatorMoveNextItem.DisplayStyle = System.Windows.Forms.ToolStripItemDisplayStyle.Image;
			this.bindingNavigatorMoveNextItem.Image = ((System.Drawing.Image)(resources.GetObject("bindingNavigatorMoveNextItem.Image")));
			this.bindingNavigatorMoveNextItem.Name = "bindingNavigatorMoveNextItem";
			this.bindingNavigatorMoveNextItem.RightToLeftAutoMirrorImage = true;
			this.bindingNavigatorMoveNextItem.Size = new System.Drawing.Size(23, 22);
			this.bindingNavigatorMoveNextItem.Text = "Переместить вперед";
			// 
			// bindingNavigatorMoveLastItem
			// 
			this.bindingNavigatorMoveLastItem.DisplayStyle = System.Windows.Forms.ToolStripItemDisplayStyle.Image;
			this.bindingNavigatorMoveLastItem.Image = ((System.Drawing.Image)(resources.GetObject("bindingNavigatorMoveLastItem.Image")));
			this.bindingNavigatorMoveLastItem.Name = "bindingNavigatorMoveLastItem";
			this.bindingNavigatorMoveLastItem.RightToLeftAutoMirrorImage = true;
			this.bindingNavigatorMoveLastItem.Size = new System.Drawing.Size(23, 22);
			this.bindingNavigatorMoveLastItem.Text = "Переместить в конец";
			// 
			// bindingNavigatorSeparator2
			// 
			this.bindingNavigatorSeparator2.Name = "bindingNavigatorSeparator2";
			this.bindingNavigatorSeparator2.Size = new System.Drawing.Size(6, 25);
			// 
			// dataGridView2
			// 
			this.dataGridView2.AutoGenerateColumns = false;
			this.dataGridView2.ColumnHeadersHeightSizeMode = System.Windows.Forms.DataGridViewColumnHeadersHeightSizeMode.AutoSize;
			this.dataGridView2.Columns.AddRange(new System.Windows.Forms.DataGridViewColumn[] {
            this.кодDataGridViewTextBoxColumn1,
            this.названиеГруппыDataGridViewTextBoxColumn,
            this.фамилияСтаростыDataGridViewTextBoxColumn,
            this.количествоDataGridViewTextBoxColumn,
            this.факультетIDDataGridViewTextBoxColumn});
			this.dataGridView2.DataSource = this.факультетГруппаBindingSource;
			this.dataGridView2.Location = new System.Drawing.Point(9, 218);
			this.dataGridView2.Name = "dataGridView2";
			this.dataGridView2.Size = new System.Drawing.Size(445, 150);
			this.dataGridView2.TabIndex = 2;
			// 
			// кодDataGridViewTextBoxColumn1
			// 
			this.кодDataGridViewTextBoxColumn1.DataPropertyName = "Код";
			this.кодDataGridViewTextBoxColumn1.HeaderText = "Код";
			this.кодDataGridViewTextBoxColumn1.Name = "кодDataGridViewTextBoxColumn1";
			// 
			// названиеГруппыDataGridViewTextBoxColumn
			// 
			this.названиеГруппыDataGridViewTextBoxColumn.DataPropertyName = "Название группы";
			this.названиеГруппыDataGridViewTextBoxColumn.HeaderText = "Название группы";
			this.названиеГруппыDataGridViewTextBoxColumn.Name = "названиеГруппыDataGridViewTextBoxColumn";
			// 
			// фамилияСтаростыDataGridViewTextBoxColumn
			// 
			this.фамилияСтаростыDataGridViewTextBoxColumn.DataPropertyName = "Фамилия старосты";
			this.фамилияСтаростыDataGridViewTextBoxColumn.HeaderText = "Фамилия старосты";
			this.фамилияСтаростыDataGridViewTextBoxColumn.Name = "фамилияСтаростыDataGridViewTextBoxColumn";
			// 
			// количествоDataGridViewTextBoxColumn
			// 
			this.количествоDataGridViewTextBoxColumn.DataPropertyName = "Количество";
			this.количествоDataGridViewTextBoxColumn.HeaderText = "Количество";
			this.количествоDataGridViewTextBoxColumn.Name = "количествоDataGridViewTextBoxColumn";
			// 
			// факультетIDDataGridViewTextBoxColumn
			// 
			this.факультетIDDataGridViewTextBoxColumn.DataPropertyName = "Факультет ID";
			this.факультетIDDataGridViewTextBoxColumn.HeaderText = "Факультет ID";
			this.факультетIDDataGridViewTextBoxColumn.Name = "факультетIDDataGridViewTextBoxColumn";
			// 
			// факультетГруппаBindingSource
			// 
			this.факультетГруппаBindingSource.DataMember = "ФакультетГруппа";
			this.факультетГруппаBindingSource.DataSource = this.факультетBindingSource;
			// 
			// группаTableAdapter
			// 
			this.группаTableAdapter.ClearBeforeFill = true;
			// 
			// bindingNavigator2
			// 
			this.bindingNavigator2.AddNewItem = this.bindingNavigatorAddNewItem1;
			this.bindingNavigator2.BindingSource = this.факультетГруппаBindingSource;
			this.bindingNavigator2.CountItem = this.bindingNavigatorCountItem1;
			this.bindingNavigator2.DeleteItem = this.bindingNavigatorDeleteItem1;
			this.bindingNavigator2.Dock = System.Windows.Forms.DockStyle.None;
			this.bindingNavigator2.Items.AddRange(new System.Windows.Forms.ToolStripItem[] {
            this.bindingNavigatorMoveFirstItem1,
            this.bindingNavigatorMovePreviousItem1,
            this.bindingNavigatorSeparator3,
            this.bindingNavigatorPositionItem1,
            this.bindingNavigatorCountItem1,
            this.bindingNavigatorSeparator4,
            this.bindingNavigatorMoveNextItem1,
            this.bindingNavigatorMoveLastItem1,
            this.bindingNavigatorSeparator5,
            this.bindingNavigatorAddNewItem1,
            this.bindingNavigatorDeleteItem1});
			this.bindingNavigator2.Location = new System.Drawing.Point(12, 190);
			this.bindingNavigator2.MoveFirstItem = this.bindingNavigatorMoveFirstItem1;
			this.bindingNavigator2.MoveLastItem = this.bindingNavigatorMoveLastItem1;
			this.bindingNavigator2.MoveNextItem = this.bindingNavigatorMoveNextItem1;
			this.bindingNavigator2.MovePreviousItem = this.bindingNavigatorMovePreviousItem1;
			this.bindingNavigator2.Name = "bindingNavigator2";
			this.bindingNavigator2.PositionItem = this.bindingNavigatorPositionItem1;
			this.bindingNavigator2.Size = new System.Drawing.Size(263, 25);
			this.bindingNavigator2.TabIndex = 3;
			this.bindingNavigator2.Text = "bindingNavigator2";
			// 
			// bindingNavigatorAddNewItem1
			// 
			this.bindingNavigatorAddNewItem1.DisplayStyle = System.Windows.Forms.ToolStripItemDisplayStyle.Image;
			this.bindingNavigatorAddNewItem1.Image = ((System.Drawing.Image)(resources.GetObject("bindingNavigatorAddNewItem1.Image")));
			this.bindingNavigatorAddNewItem1.Name = "bindingNavigatorAddNewItem1";
			this.bindingNavigatorAddNewItem1.RightToLeftAutoMirrorImage = true;
			this.bindingNavigatorAddNewItem1.Size = new System.Drawing.Size(23, 22);
			this.bindingNavigatorAddNewItem1.Text = "Добавить";
			// 
			// bindingNavigatorCountItem1
			// 
			this.bindingNavigatorCountItem1.Name = "bindingNavigatorCountItem1";
			this.bindingNavigatorCountItem1.Size = new System.Drawing.Size(43, 22);
			this.bindingNavigatorCountItem1.Text = "для {0}";
			this.bindingNavigatorCountItem1.ToolTipText = "Общее число элементов";
			// 
			// bindingNavigatorDeleteItem1
			// 
			this.bindingNavigatorDeleteItem1.DisplayStyle = System.Windows.Forms.ToolStripItemDisplayStyle.Image;
			this.bindingNavigatorDeleteItem1.Image = ((System.Drawing.Image)(resources.GetObject("bindingNavigatorDeleteItem1.Image")));
			this.bindingNavigatorDeleteItem1.Name = "bindingNavigatorDeleteItem1";
			this.bindingNavigatorDeleteItem1.RightToLeftAutoMirrorImage = true;
			this.bindingNavigatorDeleteItem1.Size = new System.Drawing.Size(23, 22);
			this.bindingNavigatorDeleteItem1.Text = "Удалить";
			// 
			// bindingNavigatorMoveFirstItem1
			// 
			this.bindingNavigatorMoveFirstItem1.DisplayStyle = System.Windows.Forms.ToolStripItemDisplayStyle.Image;
			this.bindingNavigatorMoveFirstItem1.Image = ((System.Drawing.Image)(resources.GetObject("bindingNavigatorMoveFirstItem1.Image")));
			this.bindingNavigatorMoveFirstItem1.Name = "bindingNavigatorMoveFirstItem1";
			this.bindingNavigatorMoveFirstItem1.RightToLeftAutoMirrorImage = true;
			this.bindingNavigatorMoveFirstItem1.Size = new System.Drawing.Size(23, 22);
			this.bindingNavigatorMoveFirstItem1.Text = "Переместить в начало";
			// 
			// bindingNavigatorMovePreviousItem1
			// 
			this.bindingNavigatorMovePreviousItem1.DisplayStyle = System.Windows.Forms.ToolStripItemDisplayStyle.Image;
			this.bindingNavigatorMovePreviousItem1.Image = ((System.Drawing.Image)(resources.GetObject("bindingNavigatorMovePreviousItem1.Image")));
			this.bindingNavigatorMovePreviousItem1.Name = "bindingNavigatorMovePreviousItem1";
			this.bindingNavigatorMovePreviousItem1.RightToLeftAutoMirrorImage = true;
			this.bindingNavigatorMovePreviousItem1.Size = new System.Drawing.Size(23, 22);
			this.bindingNavigatorMovePreviousItem1.Text = "Переместить назад";
			// 
			// bindingNavigatorSeparator3
			// 
			this.bindingNavigatorSeparator3.Name = "bindingNavigatorSeparator3";
			this.bindingNavigatorSeparator3.Size = new System.Drawing.Size(6, 25);
			// 
			// bindingNavigatorPositionItem1
			// 
			this.bindingNavigatorPositionItem1.AccessibleName = "Положение";
			this.bindingNavigatorPositionItem1.AutoSize = false;
			this.bindingNavigatorPositionItem1.Name = "bindingNavigatorPositionItem1";
			this.bindingNavigatorPositionItem1.Size = new System.Drawing.Size(50, 23);
			this.bindingNavigatorPositionItem1.Text = "0";
			this.bindingNavigatorPositionItem1.ToolTipText = "Текущее положение";
			// 
			// bindingNavigatorSeparator4
			// 
			this.bindingNavigatorSeparator4.Name = "bindingNavigatorSeparator4";
			this.bindingNavigatorSeparator4.Size = new System.Drawing.Size(6, 25);
			// 
			// bindingNavigatorMoveNextItem1
			// 
			this.bindingNavigatorMoveNextItem1.DisplayStyle = System.Windows.Forms.ToolStripItemDisplayStyle.Image;
			this.bindingNavigatorMoveNextItem1.Image = ((System.Drawing.Image)(resources.GetObject("bindingNavigatorMoveNextItem1.Image")));
			this.bindingNavigatorMoveNextItem1.Name = "bindingNavigatorMoveNextItem1";
			this.bindingNavigatorMoveNextItem1.RightToLeftAutoMirrorImage = true;
			this.bindingNavigatorMoveNextItem1.Size = new System.Drawing.Size(23, 22);
			this.bindingNavigatorMoveNextItem1.Text = "Переместить вперед";
			// 
			// bindingNavigatorMoveLastItem1
			// 
			this.bindingNavigatorMoveLastItem1.DisplayStyle = System.Windows.Forms.ToolStripItemDisplayStyle.Image;
			this.bindingNavigatorMoveLastItem1.Image = ((System.Drawing.Image)(resources.GetObject("bindingNavigatorMoveLastItem1.Image")));
			this.bindingNavigatorMoveLastItem1.Name = "bindingNavigatorMoveLastItem1";
			this.bindingNavigatorMoveLastItem1.RightToLeftAutoMirrorImage = true;
			this.bindingNavigatorMoveLastItem1.Size = new System.Drawing.Size(23, 22);
			this.bindingNavigatorMoveLastItem1.Text = "Переместить в конец";
			// 
			// bindingNavigatorSeparator5
			// 
			this.bindingNavigatorSeparator5.Name = "bindingNavigatorSeparator5";
			this.bindingNavigatorSeparator5.Size = new System.Drawing.Size(6, 25);
			// 
			// dataGridView3
			// 
			this.dataGridView3.AutoGenerateColumns = false;
			this.dataGridView3.ColumnHeadersHeightSizeMode = System.Windows.Forms.DataGridViewColumnHeadersHeightSizeMode.AutoSize;
			this.dataGridView3.Columns.AddRange(new System.Windows.Forms.DataGridViewColumn[] {
            this.кодDataGridViewTextBoxColumn2,
            this.фИОDataGridViewTextBoxColumn,
            this.адресDataGridViewTextBoxColumn,
            this.телефонDataGridViewTextBoxColumn,
            this.iDGRDataGridViewTextBoxColumn});
			this.dataGridView3.DataSource = this.группаСтудентыBindingSource;
			this.dataGridView3.Location = new System.Drawing.Point(9, 404);
			this.dataGridView3.Name = "dataGridView3";
			this.dataGridView3.Size = new System.Drawing.Size(445, 150);
			this.dataGridView3.TabIndex = 4;
			// 
			// кодDataGridViewTextBoxColumn2
			// 
			this.кодDataGridViewTextBoxColumn2.DataPropertyName = "Код";
			this.кодDataGridViewTextBoxColumn2.HeaderText = "Код";
			this.кодDataGridViewTextBoxColumn2.Name = "кодDataGridViewTextBoxColumn2";
			// 
			// фИОDataGridViewTextBoxColumn
			// 
			this.фИОDataGridViewTextBoxColumn.DataPropertyName = "ФИО";
			this.фИОDataGridViewTextBoxColumn.HeaderText = "ФИО";
			this.фИОDataGridViewTextBoxColumn.Name = "фИОDataGridViewTextBoxColumn";
			// 
			// адресDataGridViewTextBoxColumn
			// 
			this.адресDataGridViewTextBoxColumn.DataPropertyName = "Адрес";
			this.адресDataGridViewTextBoxColumn.HeaderText = "Адрес";
			this.адресDataGridViewTextBoxColumn.Name = "адресDataGridViewTextBoxColumn";
			// 
			// телефонDataGridViewTextBoxColumn
			// 
			this.телефонDataGridViewTextBoxColumn.DataPropertyName = "Телефон";
			this.телефонDataGridViewTextBoxColumn.HeaderText = "Телефон";
			this.телефонDataGridViewTextBoxColumn.Name = "телефонDataGridViewTextBoxColumn";
			// 
			// iDGRDataGridViewTextBoxColumn
			// 
			this.iDGRDataGridViewTextBoxColumn.DataPropertyName = "ID_GR";
			this.iDGRDataGridViewTextBoxColumn.HeaderText = "ID_GR";
			this.iDGRDataGridViewTextBoxColumn.Name = "iDGRDataGridViewTextBoxColumn";
			// 
			// группаСтудентыBindingSource
			// 
			this.группаСтудентыBindingSource.DataMember = "ГруппаСтуденты";
			this.группаСтудентыBindingSource.DataSource = this.факультетГруппаBindingSource;
			// 
			// студентыTableAdapter
			// 
			this.студентыTableAdapter.ClearBeforeFill = true;
			// 
			// bindingNavigator3
			// 
			this.bindingNavigator3.AddNewItem = this.bindingNavigatorAddNewItem2;
			this.bindingNavigator3.BindingSource = this.группаСтудентыBindingSource;
			this.bindingNavigator3.CountItem = this.bindingNavigatorCountItem2;
			this.bindingNavigator3.DeleteItem = this.bindingNavigatorDeleteItem2;
			this.bindingNavigator3.Dock = System.Windows.Forms.DockStyle.None;
			this.bindingNavigator3.Items.AddRange(new System.Windows.Forms.ToolStripItem[] {
            this.bindingNavigatorMoveFirstItem2,
            this.bindingNavigatorMovePreviousItem2,
            this.bindingNavigatorSeparator6,
            this.bindingNavigatorPositionItem2,
            this.bindingNavigatorCountItem2,
            this.bindingNavigatorSeparator7,
            this.bindingNavigatorMoveNextItem2,
            this.bindingNavigatorMoveLastItem2,
            this.bindingNavigatorSeparator8,
            this.bindingNavigatorAddNewItem2,
            this.bindingNavigatorDeleteItem2});
			this.bindingNavigator3.Location = new System.Drawing.Point(9, 376);
			this.bindingNavigator3.MoveFirstItem = this.bindingNavigatorMoveFirstItem2;
			this.bindingNavigator3.MoveLastItem = this.bindingNavigatorMoveLastItem2;
			this.bindingNavigator3.MoveNextItem = this.bindingNavigatorMoveNextItem2;
			this.bindingNavigator3.MovePreviousItem = this.bindingNavigatorMovePreviousItem2;
			this.bindingNavigator3.Name = "bindingNavigator3";
			this.bindingNavigator3.PositionItem = this.bindingNavigatorPositionItem2;
			this.bindingNavigator3.Size = new System.Drawing.Size(263, 25);
			this.bindingNavigator3.TabIndex = 5;
			this.bindingNavigator3.Text = "bindingNavigator3";
			// 
			// bindingNavigatorAddNewItem2
			// 
			this.bindingNavigatorAddNewItem2.DisplayStyle = System.Windows.Forms.ToolStripItemDisplayStyle.Image;
			this.bindingNavigatorAddNewItem2.Image = ((System.Drawing.Image)(resources.GetObject("bindingNavigatorAddNewItem2.Image")));
			this.bindingNavigatorAddNewItem2.Name = "bindingNavigatorAddNewItem2";
			this.bindingNavigatorAddNewItem2.RightToLeftAutoMirrorImage = true;
			this.bindingNavigatorAddNewItem2.Size = new System.Drawing.Size(23, 22);
			this.bindingNavigatorAddNewItem2.Text = "Добавить";
			// 
			// bindingNavigatorCountItem2
			// 
			this.bindingNavigatorCountItem2.Name = "bindingNavigatorCountItem2";
			this.bindingNavigatorCountItem2.Size = new System.Drawing.Size(43, 22);
			this.bindingNavigatorCountItem2.Text = "для {0}";
			this.bindingNavigatorCountItem2.ToolTipText = "Общее число элементов";
			// 
			// bindingNavigatorDeleteItem2
			// 
			this.bindingNavigatorDeleteItem2.DisplayStyle = System.Windows.Forms.ToolStripItemDisplayStyle.Image;
			this.bindingNavigatorDeleteItem2.Image = ((System.Drawing.Image)(resources.GetObject("bindingNavigatorDeleteItem2.Image")));
			this.bindingNavigatorDeleteItem2.Name = "bindingNavigatorDeleteItem2";
			this.bindingNavigatorDeleteItem2.RightToLeftAutoMirrorImage = true;
			this.bindingNavigatorDeleteItem2.Size = new System.Drawing.Size(23, 22);
			this.bindingNavigatorDeleteItem2.Text = "Удалить";
			// 
			// bindingNavigatorMoveFirstItem2
			// 
			this.bindingNavigatorMoveFirstItem2.DisplayStyle = System.Windows.Forms.ToolStripItemDisplayStyle.Image;
			this.bindingNavigatorMoveFirstItem2.Image = ((System.Drawing.Image)(resources.GetObject("bindingNavigatorMoveFirstItem2.Image")));
			this.bindingNavigatorMoveFirstItem2.Name = "bindingNavigatorMoveFirstItem2";
			this.bindingNavigatorMoveFirstItem2.RightToLeftAutoMirrorImage = true;
			this.bindingNavigatorMoveFirstItem2.Size = new System.Drawing.Size(23, 22);
			this.bindingNavigatorMoveFirstItem2.Text = "Переместить в начало";
			// 
			// bindingNavigatorMovePreviousItem2
			// 
			this.bindingNavigatorMovePreviousItem2.DisplayStyle = System.Windows.Forms.ToolStripItemDisplayStyle.Image;
			this.bindingNavigatorMovePreviousItem2.Image = ((System.Drawing.Image)(resources.GetObject("bindingNavigatorMovePreviousItem2.Image")));
			this.bindingNavigatorMovePreviousItem2.Name = "bindingNavigatorMovePreviousItem2";
			this.bindingNavigatorMovePreviousItem2.RightToLeftAutoMirrorImage = true;
			this.bindingNavigatorMovePreviousItem2.Size = new System.Drawing.Size(23, 22);
			this.bindingNavigatorMovePreviousItem2.Text = "Переместить назад";
			// 
			// bindingNavigatorSeparator6
			// 
			this.bindingNavigatorSeparator6.Name = "bindingNavigatorSeparator6";
			this.bindingNavigatorSeparator6.Size = new System.Drawing.Size(6, 25);
			// 
			// bindingNavigatorPositionItem2
			// 
			this.bindingNavigatorPositionItem2.AccessibleName = "Положение";
			this.bindingNavigatorPositionItem2.AutoSize = false;
			this.bindingNavigatorPositionItem2.Name = "bindingNavigatorPositionItem2";
			this.bindingNavigatorPositionItem2.Size = new System.Drawing.Size(50, 23);
			this.bindingNavigatorPositionItem2.Text = "0";
			this.bindingNavigatorPositionItem2.ToolTipText = "Текущее положение";
			// 
			// bindingNavigatorSeparator7
			// 
			this.bindingNavigatorSeparator7.Name = "bindingNavigatorSeparator7";
			this.bindingNavigatorSeparator7.Size = new System.Drawing.Size(6, 25);
			// 
			// bindingNavigatorMoveNextItem2
			// 
			this.bindingNavigatorMoveNextItem2.DisplayStyle = System.Windows.Forms.ToolStripItemDisplayStyle.Image;
			this.bindingNavigatorMoveNextItem2.Image = ((System.Drawing.Image)(resources.GetObject("bindingNavigatorMoveNextItem2.Image")));
			this.bindingNavigatorMoveNextItem2.Name = "bindingNavigatorMoveNextItem2";
			this.bindingNavigatorMoveNextItem2.RightToLeftAutoMirrorImage = true;
			this.bindingNavigatorMoveNextItem2.Size = new System.Drawing.Size(23, 22);
			this.bindingNavigatorMoveNextItem2.Text = "Переместить вперед";
			// 
			// bindingNavigatorMoveLastItem2
			// 
			this.bindingNavigatorMoveLastItem2.DisplayStyle = System.Windows.Forms.ToolStripItemDisplayStyle.Image;
			this.bindingNavigatorMoveLastItem2.Image = ((System.Drawing.Image)(resources.GetObject("bindingNavigatorMoveLastItem2.Image")));
			this.bindingNavigatorMoveLastItem2.Name = "bindingNavigatorMoveLastItem2";
			this.bindingNavigatorMoveLastItem2.RightToLeftAutoMirrorImage = true;
			this.bindingNavigatorMoveLastItem2.Size = new System.Drawing.Size(23, 22);
			this.bindingNavigatorMoveLastItem2.Text = "Переместить в конец";
			// 
			// bindingNavigatorSeparator8
			// 
			this.bindingNavigatorSeparator8.Name = "bindingNavigatorSeparator8";
			this.bindingNavigatorSeparator8.Size = new System.Drawing.Size(6, 25);
			// 
			// button1
			// 
			this.button1.Location = new System.Drawing.Point(610, 37);
			this.button1.Name = "button1";
			this.button1.Size = new System.Drawing.Size(81, 23);
			this.button1.TabIndex = 6;
			this.button1.Text = "Сортировать";
			this.button1.UseVisualStyleBackColor = true;
			this.button1.Click += new System.EventHandler(this.button1_Click);
			// 
			// textBox1
			// 
			this.textBox1.Location = new System.Drawing.Point(543, 107);
			this.textBox1.Name = "textBox1";
			this.textBox1.Size = new System.Drawing.Size(97, 20);
			this.textBox1.TabIndex = 7;
			this.textBox1.TextChanged += new System.EventHandler(this.textBox1_TextChanged);
			// 
			// textBox2
			// 
			this.textBox2.Location = new System.Drawing.Point(676, 107);
			this.textBox2.Name = "textBox2";
			this.textBox2.Size = new System.Drawing.Size(86, 20);
			this.textBox2.TabIndex = 8;
			this.textBox2.TextChanged += new System.EventHandler(this.textBox2_TextChanged);
			// 
			// label1
			// 
			this.label1.AutoSize = true;
			this.label1.Location = new System.Drawing.Point(540, 91);
			this.label1.Name = "label1";
			this.label1.Size = new System.Drawing.Size(100, 13);
			this.label1.TabIndex = 9;
			this.label1.Text = "Поиск по символу";
			// 
			// label2
			// 
			this.label2.AutoSize = true;
			this.label2.Location = new System.Drawing.Point(673, 91);
			this.label2.Name = "label2";
			this.label2.Size = new System.Drawing.Size(89, 13);
			this.label2.TabIndex = 10;
			this.label2.Text = "Точечный поиск";
			// 
			// button2
			// 
			this.button2.Location = new System.Drawing.Point(470, 39);
			this.button2.Name = "button2";
			this.button2.Size = new System.Drawing.Size(85, 20);
			this.button2.TabIndex = 11;
			this.button2.Text = "Update";
			this.button2.UseVisualStyleBackColor = true;
			this.button2.Click += new System.EventHandler(this.button2_Click);
			// 
			// Form1
			// 
			this.AutoScaleDimensions = new System.Drawing.SizeF(6F, 13F);
			this.AutoScaleMode = System.Windows.Forms.AutoScaleMode.Font;
			this.ClientSize = new System.Drawing.Size(800, 556);
			this.Controls.Add(this.button2);
			this.Controls.Add(this.label2);
			this.Controls.Add(this.label1);
			this.Controls.Add(this.textBox2);
			this.Controls.Add(this.textBox1);
			this.Controls.Add(this.button1);
			this.Controls.Add(this.bindingNavigator3);
			this.Controls.Add(this.dataGridView3);
			this.Controls.Add(this.bindingNavigator2);
			this.Controls.Add(this.dataGridView2);
			this.Controls.Add(this.bindingNavigator1);
			this.Controls.Add(this.dataGridView1);
			this.Name = "Form1";
			this.Text = "Form1";
			this.Load += new System.EventHandler(this.Form1_Load);
			((System.ComponentModel.ISupportInitialize)(this.dataGridView1)).EndInit();
			((System.ComponentModel.ISupportInitialize)(this.факультетBindingSource)).EndInit();
			((System.ComponentModel.ISupportInitialize)(this.база_данных3DataSet)).EndInit();
			((System.ComponentModel.ISupportInitialize)(this.bindingNavigator1)).EndInit();
			this.bindingNavigator1.ResumeLayout(false);
			this.bindingNavigator1.PerformLayout();
			((System.ComponentModel.ISupportInitialize)(this.dataGridView2)).EndInit();
			((System.ComponentModel.ISupportInitialize)(this.факультетГруппаBindingSource)).EndInit();
			((System.ComponentModel.ISupportInitialize)(this.bindingNavigator2)).EndInit();
			this.bindingNavigator2.ResumeLayout(false);
			this.bindingNavigator2.PerformLayout();
			((System.ComponentModel.ISupportInitialize)(this.dataGridView3)).EndInit();
			((System.ComponentModel.ISupportInitialize)(this.группаСтудентыBindingSource)).EndInit();
			((System.ComponentModel.ISupportInitialize)(this.bindingNavigator3)).EndInit();
			this.bindingNavigator3.ResumeLayout(false);
			this.bindingNavigator3.PerformLayout();
			this.ResumeLayout(false);
			this.PerformLayout();

		}

		#endregion

		private System.Windows.Forms.DataGridView dataGridView1;
		private База_данных3DataSet база_данных3DataSet;
		private System.Windows.Forms.BindingSource факультетBindingSource;
		private База_данных3DataSetTableAdapters.ФакультетTableAdapter факультетTableAdapter;
		private System.Windows.Forms.DataGridViewTextBoxColumn кодDataGridViewTextBoxColumn;
		private System.Windows.Forms.DataGridViewTextBoxColumn факультетDataGridViewTextBoxColumn;
		private System.Windows.Forms.DataGridViewTextBoxColumn курсDataGridViewTextBoxColumn;
		private System.Windows.Forms.DataGridViewTextBoxColumn количествоГруппDataGridViewTextBoxColumn;
		private System.Windows.Forms.BindingNavigator bindingNavigator1;
		private System.Windows.Forms.ToolStripButton bindingNavigatorAddNewItem;
		private System.Windows.Forms.ToolStripLabel bindingNavigatorCountItem;
		private System.Windows.Forms.ToolStripButton bindingNavigatorDeleteItem;
		private System.Windows.Forms.ToolStripButton bindingNavigatorMoveFirstItem;
		private System.Windows.Forms.ToolStripButton bindingNavigatorMovePreviousItem;
		private System.Windows.Forms.ToolStripSeparator bindingNavigatorSeparator;
		private System.Windows.Forms.ToolStripTextBox bindingNavigatorPositionItem;
		private System.Windows.Forms.ToolStripSeparator bindingNavigatorSeparator1;
		private System.Windows.Forms.ToolStripButton bindingNavigatorMoveNextItem;
		private System.Windows.Forms.ToolStripButton bindingNavigatorMoveLastItem;
		private System.Windows.Forms.ToolStripSeparator bindingNavigatorSeparator2;
		private System.Windows.Forms.DataGridView dataGridView2;
		private System.Windows.Forms.BindingSource факультетГруппаBindingSource;
		private База_данных3DataSetTableAdapters.ГруппаTableAdapter группаTableAdapter;
		private System.Windows.Forms.DataGridViewTextBoxColumn кодDataGridViewTextBoxColumn1;
		private System.Windows.Forms.DataGridViewTextBoxColumn названиеГруппыDataGridViewTextBoxColumn;
		private System.Windows.Forms.DataGridViewTextBoxColumn фамилияСтаростыDataGridViewTextBoxColumn;
		private System.Windows.Forms.DataGridViewTextBoxColumn количествоDataGridViewTextBoxColumn;
		private System.Windows.Forms.DataGridViewTextBoxColumn факультетIDDataGridViewTextBoxColumn;
		private System.Windows.Forms.BindingNavigator bindingNavigator2;
		private System.Windows.Forms.ToolStripButton bindingNavigatorAddNewItem1;
		private System.Windows.Forms.ToolStripLabel bindingNavigatorCountItem1;
		private System.Windows.Forms.ToolStripButton bindingNavigatorDeleteItem1;
		private System.Windows.Forms.ToolStripButton bindingNavigatorMoveFirstItem1;
		private System.Windows.Forms.ToolStripButton bindingNavigatorMovePreviousItem1;
		private System.Windows.Forms.ToolStripSeparator bindingNavigatorSeparator3;
		private System.Windows.Forms.ToolStripTextBox bindingNavigatorPositionItem1;
		private System.Windows.Forms.ToolStripSeparator bindingNavigatorSeparator4;
		private System.Windows.Forms.ToolStripButton bindingNavigatorMoveNextItem1;
		private System.Windows.Forms.ToolStripButton bindingNavigatorMoveLastItem1;
		private System.Windows.Forms.ToolStripSeparator bindingNavigatorSeparator5;
		private System.Windows.Forms.DataGridView dataGridView3;
		private System.Windows.Forms.BindingSource группаСтудентыBindingSource;
		private База_данных3DataSetTableAdapters.СтудентыTableAdapter студентыTableAdapter;
		private System.Windows.Forms.DataGridViewTextBoxColumn кодDataGridViewTextBoxColumn2;
		private System.Windows.Forms.DataGridViewTextBoxColumn фИОDataGridViewTextBoxColumn;
		private System.Windows.Forms.DataGridViewTextBoxColumn адресDataGridViewTextBoxColumn;
		private System.Windows.Forms.DataGridViewTextBoxColumn телефонDataGridViewTextBoxColumn;
		private System.Windows.Forms.DataGridViewTextBoxColumn iDGRDataGridViewTextBoxColumn;
		private System.Windows.Forms.BindingNavigator bindingNavigator3;
		private System.Windows.Forms.ToolStripButton bindingNavigatorAddNewItem2;
		private System.Windows.Forms.ToolStripLabel bindingNavigatorCountItem2;
		private System.Windows.Forms.ToolStripButton bindingNavigatorDeleteItem2;
		private System.Windows.Forms.ToolStripButton bindingNavigatorMoveFirstItem2;
		private System.Windows.Forms.ToolStripButton bindingNavigatorMovePreviousItem2;
		private System.Windows.Forms.ToolStripSeparator bindingNavigatorSeparator6;
		private System.Windows.Forms.ToolStripTextBox bindingNavigatorPositionItem2;
		private System.Windows.Forms.ToolStripSeparator bindingNavigatorSeparator7;
		private System.Windows.Forms.ToolStripButton bindingNavigatorMoveNextItem2;
		private System.Windows.Forms.ToolStripButton bindingNavigatorMoveLastItem2;
		private System.Windows.Forms.ToolStripSeparator bindingNavigatorSeparator8;
		private System.Windows.Forms.Button button1;
		private System.Windows.Forms.TextBox textBox1;
		private System.Windows.Forms.TextBox textBox2;
		private System.Windows.Forms.Label label1;
		private System.Windows.Forms.Label label2;
		private System.Windows.Forms.Button button2;
	}
}

