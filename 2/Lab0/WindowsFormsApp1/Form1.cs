﻿using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace WindowsFormsApp1
{
	public partial class Form1 : Form
	{
		private int n;
		private int m;

		public Form1()
		{
			InitializeComponent();
		}

		private void aboutToolStripMenuItem_Click(object sender, EventArgs e)
		{
			MessageBox.Show("ФИО:\nМартасов И.О.\nЩерба А.С.\nГруппа:ИП-711");
		}

		private void button1_Click(object sender, EventArgs e)
		{
			n = Convert.ToInt32(numericUpDown1.Value);
			m = Convert.ToInt32(numericUpDown2.Value);

			Random rand = new Random();
			if (n != 0 & m != 0)
			{
				dataGridView1.RowCount = n;
				dataGridView1.ColumnCount = m;
				int[,] mas = new int[n, m];
				int i, j;
				for (i = 0; i < n; ++i)
					for (j = 0; j < m; ++j)
					{
						mas[i, j] = rand.Next(100);
						dataGridView1.Rows[i].Cells[j].Value = mas[i, j];
					}
				button2.Enabled = true;
				maxToolStripMenuItem.Enabled = true;
			}
			else
			{
				MessageBox.Show("N и M не могут быть нулевыми");
			}
		}

		private void button2_Click(object sender, EventArgs e)
		{
			int[] mas = new int[n];
			int max;
			int i, j;
			for (i = 0; i < n; ++i)
			{
				mas[i] = Convert.ToInt32(dataGridView1.Rows[i].Cells[0].Value);
				for (j = 0; j < m; ++j)
				{
					max = Convert.ToInt32(dataGridView1.Rows[i].Cells[j].Value);
					if (max > mas[i])
						mas[i] = max;
				}
			}
			dataGridView2.RowCount = n;
			dataGridView2.ColumnCount = 1;

			for (i = 0; i < n; ++i)
				dataGridView2.Rows[i].Cells[0].Value = mas[i];
			button2.Enabled = false;
			maxToolStripMenuItem.Enabled = false;
		}

		private void sizeToolStripMenuItem_Click(object sender, EventArgs e)
		{
			Form2 f = new Form2();
			f.Owner = this;
			f.ShowDialog();
		}

		private void startToolStripMenuItem_Click(object sender, EventArgs e)
		{

		}

		private void maxToolStripMenuItem_Click(object sender, EventArgs e)
		{

		}
	}

}
