using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Windows.Forms;

namespace database_2
{
    public partial class Form1 : Form
    {
        public Form1()
        {
            InitializeComponent();
        }

        private void Form1_Load(object sender, EventArgs e)
        {
            // TODO: данная строка кода позволяет загрузить данные в таблицу "database1DataSet.Lukaka". При необходимости она может быть перемещена или удалена.
            this.lukakaTableAdapter.Fill(this.database1DataSet.Lukaka);
            // TODO: данная строка кода позволяет загрузить данные в таблицу "database1DataSet1.Lukaka". При необходимости она может быть перемещена или удалена.
            // TODO: данная строка кода позволяет загрузить данные в таблицу "database1DataSet.Lukaka". При необходимости она может быть перемещена или удалена.

        }

        private void label1_Click(object sender, EventArgs e)
        {

        }

        private void bindingNavigator1_RefreshItems(object sender, EventArgs e)
        {

        }

        private void toolStripContainer1_TopToolStripPanel_Click(object sender, EventArgs e)
        {

        }

        private void button7_Click(object sender, EventArgs e)
        {
            this.lukakaTableAdapter.Update(this.database1DataSet.Lukaka);
        }

        private void dataGridView1_CellContentClick(object sender, DataGridViewCellEventArgs e)
        {

        }

        private void button6_Click(object sender, EventArgs e)
        {
            try
            {
                this.lukakaTableAdapter.FillBy(this.database1DataSet.Lukaka, "Северная Америка");
            }
            catch (Exception ex)
            {
                MessageBox.Show(ex.Message);
            }
        }

        private void button4_Click(object sender, EventArgs e)
        {
            try
            {
                this.lukakaTableAdapter.FillBy(this.database1DataSet.Lukaka, "Южная Америка");
            }
            catch (Exception ex)
            {
                MessageBox.Show(ex.Message);
            }
        }

        private void button1_Click(object sender, EventArgs e)
        {
            this.lukakaTableAdapter.Fill(this.database1DataSet.Lukaka);
        }

        private void button5_Click(object sender, EventArgs e)
        {
            this.lukakaTableAdapter.FillBy1(this.database1DataSet.Lukaka);
        }

        private void button3_Click(object sender, EventArgs e)
        {
            this.lukakaTableAdapter.FillBy3(this.database1DataSet.Lukaka);
        }

        private void button2_Click(object sender, EventArgs e)
        {
            this.lukakaTableAdapter.FillBy2(this.database1DataSet.Lukaka);
        }
    }
    }
