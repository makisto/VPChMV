using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace Lab1
{
	public partial class AddNewItem : Form
	{
		private int c;

		public AddNewItem()
		{
			InitializeComponent();
		}

		private void button2_Click(object sender, EventArgs e)
		{
			this.Close();
		}

		private void choose()
		{
			if(radioButton1.Checked == true)
			{
				c = 1;
			}
			else if(radioButton2.Checked == true)
			{
				c = 2;
			}
		}

		private void button1_Click(object sender, EventArgs e)
		{
			Form1 main = this.Owner as Form1;
			choose();
			if (main != null)
			{
				switch (c)
				{
					case 1: main.listBox1.Items.Add(textBox2.Text); break;
					case 2: main.listBox2.Items.Add(textBox2.Text); break;
					default: break;
				}
			}
			this.Close();
		}
	}
}
