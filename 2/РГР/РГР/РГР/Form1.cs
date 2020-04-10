using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;
using Microsoft.Office.Interop.Word;

namespace РГР
{
	public partial class Form1 : Form
	{
		public Form1()
		{
			InitializeComponent();
		}

		private void Form1_Load(object sender, EventArgs e)
		{
			this.продуктыTableAdapter.Update(this.рГРDataSet.Продукты);
			this.блюдаTableAdapter.Update(this.рГРDataSet.Блюда);
			comboBox1.Items.Clear();
			comboBox2.Items.Clear();
			comboBox3.Items.Clear();
			comboBox4.Items.Clear();

			int count = блюдаBindingSource.Count;

			this.блюдаTableAdapter.FillBy(this.рГРDataSet.Блюда, "Закуска");
			count = блюдаBindingSource.Count;

			for (int i = 0; i < count; i++)
			{
				comboBox1.Items.Add(dataGridView1.Rows[i].Cells[1].Value);
			}

			this.блюдаTableAdapter.FillBy(this.рГРDataSet.Блюда, "Первое блюдо");
			count = блюдаBindingSource.Count;

			for (int i = 0; i < count; i++)
			{
				comboBox2.Items.Add(dataGridView1.Rows[i].Cells[1].Value);
			}

			this.блюдаTableAdapter.FillBy(this.рГРDataSet.Блюда, "Второе блюдо");
			count = блюдаBindingSource.Count;

			for (int i = 0; i < count; i++)
			{
				comboBox3.Items.Add(dataGridView1.Rows[i].Cells[1].Value);
			}

			this.блюдаTableAdapter.FillBy(this.рГРDataSet.Блюда, "Десерт");
			count = блюдаBindingSource.Count;

			for (int i = 0; i < count; i++)
			{
				comboBox4.Items.Add(dataGridView1.Rows[i].Cells[1].Value);
			}

			this.продуктыTableAdapter.Fill(this.рГРDataSet.Продукты);
			this.блюдаTableAdapter.Fill(this.рГРDataSet.Блюда);
		}

		private void textBox2_TextChanged(object sender, EventArgs e)
		{
			try
			{
				this.блюдаTableAdapter.FillBy2(this.рГРDataSet.Блюда, textBox2.Text);
			}
			catch
			{
				MessageBox.Show("Ошибка");
			}
		}

		private void textBox3_TextChanged_1(object sender, EventArgs e)
		{
			try
			{
				this.блюдаTableAdapter.FillBy1(this.рГРDataSet.Блюда, textBox3.Text);
				/*int count = this.блюдаBindingSource.Count;
				for (int i = 0; i < count; i++)
				{
					string c = Convert.ToString(dataGridView1.Rows[i].Cells[3].Value);
					//string[] recipe = c.Split(new char[] { ' ', ',' }, StringSplitOptions.RemoveEmptyEntries);
					/*for (int j = 0; j < recipe.Length; j++)
					{

					}
					this.продуктыTableAdapter.FillBy1(this.рГРDataSet.Продукты, c);
				}*/
			}
			catch
			{
				MessageBox.Show("Ошибка");
			}
		}

		private void textBox4_TextChanged_1(object sender, EventArgs e)
		{
			try
			{
				this.блюдаTableAdapter.FillBy3(this.рГРDataSet.Блюда, textBox4.Text);
				this.продуктыTableAdapter.FillBy1(this.рГРDataSet.Продукты, textBox4.Text);
			}
			catch
			{
				MessageBox.Show("Ошибка");
			}
		}

		private void count(string cap, string text)
		{
			this.блюдаTableAdapter.FillBy(this.рГРDataSet.Блюда, cap);
			int count = this.блюдаBindingSource.Count;
			string a = text;
			for (int i = 0; i < count; i++)
			{
				string b = Convert.ToString(dataGridView1.Rows[i].Cells[1].Value);
				int var = new int();
				var = a.CompareTo(b);
				if (var == 0)
				{
					string c = Convert.ToString(dataGridView1.Rows[i].Cells[3].Value);
					string[] recipe = c.Split(new char[] { ' ', ',' }, StringSplitOptions.RemoveEmptyEntries);
					for (int j = 0; j < recipe.Length; j++)
					{
						this.продуктыTableAdapter.FillBy(this.рГРDataSet.Продукты, recipe[j]);
						int prod = Convert.ToInt32(dataGridView2.Rows[0].Cells[2].Value) - Convert.ToInt32(textBox1.Text);
						if(prod >= 0)
						{ 
							try
							{
								this.продуктыTableAdapter.UpdateQuery(Convert.ToString(prod), recipe[j]);
							}
							catch
							{
								MessageBox.Show("Ошибка!");
							}	
						}
					}
				}
			}
		}

		private void button1_Click(object sender, EventArgs e)
		{
			count("Закуска", Convert.ToString(comboBox1.Text));
			count("Первое блюдо", Convert.ToString(comboBox2.Text));
			count("Второе блюдо", Convert.ToString(comboBox3.Text));
			count("Десерт", Convert.ToString(comboBox4.Text));

			this.продуктыTableAdapter.Fill(this.рГРDataSet.Продукты);
			this.блюдаTableAdapter.Fill(this.рГРDataSet.Блюда);

			var wordApp = new Microsoft.Office.Interop.Word.Application();
			string date = Convert.ToString(DateTime.Now);

			wordApp.Visible = false;

			try
			{
				var wordDocument = wordApp.Documents.Open(@"c:\Games\Doc1.docx");

				sub("{time}", date, wordDocument);
				sub("{n}", Convert.ToString(textBox1.Text), wordDocument);
				sub("{закуска}", Convert.ToString(comboBox1.Text), wordDocument);
				sub("{первое блюдо}", Convert.ToString(comboBox2.Text), wordDocument);
				sub("{второе блюдо}", Convert.ToString(comboBox3.Text), wordDocument);
				sub("{десерт}", Convert.ToString(comboBox4.Text), wordDocument);

				wordDocument.SaveAs(@"c:\Games\Обед.docx");
				wordDocument.Close();
			}
			catch
			{
				MessageBox.Show("Ошибка отчёта");
			}
			finally
			{
				wordApp.Quit();
			}
		}

		private void sub(string stub, string text, Microsoft.Office.Interop.Word.Document document)
		{
			var range = document.Content;
			range.Find.ClearFormatting();
			range.Find.Execute(FindText: stub, ReplaceWith: text);
		}

		private void button3_Click(object sender, EventArgs e)
		{
			count("Закуска", Convert.ToString(comboBox1.Text));
			count("Второе блюдо", Convert.ToString(comboBox3.Text));
			count("Десерт", Convert.ToString(comboBox4.Text));

			this.продуктыTableAdapter.Fill(this.рГРDataSet.Продукты);
			this.блюдаTableAdapter.Fill(this.рГРDataSet.Блюда);

			var wordApp = new Microsoft.Office.Interop.Word.Application();
			string date = Convert.ToString(DateTime.Now);

			wordApp.Visible = false;

			try
			{
				var wordDocument = wordApp.Documents.Open(@"c:\Games\Doc2.docx");

				sub("{time}", date, wordDocument);
				sub("{n}", Convert.ToString(textBox1.Text), wordDocument);
				sub("{закуска}", Convert.ToString(comboBox1.Text), wordDocument);
				sub("{второе блюдо}", Convert.ToString(comboBox3.Text), wordDocument);
				sub("{десерт}", Convert.ToString(comboBox4.Text), wordDocument);

				wordDocument.SaveAs(@"c:\Games\Ужин.docx");
				wordDocument.Close();
			}
			catch
			{
				MessageBox.Show("Ошибка отчёта");
			}
			finally
			{
				wordApp.Quit();
			}
		}

		private void button4_Click(object sender, EventArgs e)
		{
			Form2 f2 = new Form2();
			if(f2.ShowDialog() == DialogResult.OK)
			{
				try
				{
					this.блюдаTableAdapter.FillBy4(this.рГРDataSet.Блюда, f2.x, f2.y);
				}
				catch
				{

				}
			}
			f2.Dispose();
		}

		private void button5_Click(object sender, EventArgs e)
		{
			this.продуктыTableAdapter.Fill(this.рГРDataSet.Продукты);
			this.блюдаTableAdapter.Fill(this.рГРDataSet.Блюда);
		}
	}
}
