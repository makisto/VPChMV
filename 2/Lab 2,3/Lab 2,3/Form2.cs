using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Windows.Forms;

namespace Lab_2_3
{
	public partial class Form2 : Form
	{
		public Form2()
		{
			InitializeComponent();
		}
		public int x, y;
		private void button1_Click(object sender, EventArgs e)
		{
			x = Convert.ToInt32(numericUpDown1.Value);
			y = Convert.ToInt32(numericUpDown2.Value);
		}

		private void Form2_Load(object sender, EventArgs e)
		{

		}

		private void button2_Click(object sender, EventArgs e)
		{
			this.Close();
		}
	}
}
