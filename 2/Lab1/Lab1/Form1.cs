using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;
using System.Text.RegularExpressions;
using System.IO;

namespace Lab1
{
	public partial class Form1 : Form
	{
		public Form1()
		{
			InitializeComponent();
		}

		private void openToolStripMenuItem_Click(object sender, EventArgs e)
		{
			OpenFileDialog dlg = new OpenFileDialog();
			dlg.Filter = "txt files(*.txt)|*.txt|All Files|*.*";
			if (dlg.ShowDialog() == DialogResult.OK)
			{
				StreamReader reader = new StreamReader(dlg.FileName, Encoding.Default);
				richTextBox1.Text = reader.ReadToEnd();
				reader.Close();
			}

			dlg.Dispose();
		}

		private void saveToolStripMenuItem_Click(object sender, EventArgs e)
		{
			SaveFileDialog dlg = new SaveFileDialog();
			dlg.Filter = "txt files(*.txt)|*.txt|All Files|*.*";
			if (dlg.ShowDialog() == DialogResult.OK)
			{
				StreamWriter writer = new StreamWriter(dlg.FileName);
				for (int i = 0; i < listBox2.Items.Count; i++)
				{
					writer.WriteLine((string)listBox2.Items[i]);
				}
				writer.Close();
			}

			dlg.Dispose();
		}

		private void aboutToolStripMenuItem_Click(object sender, EventArgs e)
		{
			MessageBox.Show("ФИО:\nМартасов И.О.\nЩерба А.С.\nГруппа:ИП-711");
		}

		private void resetButton_Click(object sender, EventArgs e)
		{
			listBox1.Items.Clear();
			listBox2.Items.Clear();
			listBox3.Items.Clear();
			richTextBox1.Clear();
			checkBox1.Checked = true;
			checkBox2.Checked = false;
			radioButton1.Checked = true;
		}

		private void exitButton_Click(object sender, EventArgs e)
		{
			Application.Exit();
		}

		private void startButton_Click(object sender, EventArgs e)
		{
			listBox1.Items.Clear();
			listBox2.Items.Clear();

			listBox1.BeginUpdate();

			string[] strings = richTextBox1.Text.Split(new char[] { '\n', '\t', ' '}, StringSplitOptions.RemoveEmptyEntries);
			foreach (string s in strings)
			{
				string str = s.Trim();
				if (str == String.Empty)
					continue;
				if (radioButton1.Checked)
				{
					listBox1.Items.Add(str);
				}
				if (radioButton2.Checked)
				{
					if (Regex.IsMatch(str, @"\d"))
						listBox1.Items.Add(str);
				}
				if (radioButton3.Checked)
				{
					if (Regex.IsMatch(str, @"\w+@\w+\.\w+"))
						listBox1.Items.Add(str);
				}
			}
			listBox1.EndUpdate();
		}

		private void DeleteSelectedItems(ListBox lstFrom)
		{
			string[] stringsArray = new string[lstFrom.SelectedItems.Count];
			lstFrom.SelectedItems.CopyTo(stringsArray, 0);

			for (int i = 0; i < stringsArray.Length; i++)
			{
				lstFrom.Items.Remove(stringsArray[i]);
			}
		}

		private void MoveSelectedItems(ListBox lstFrom, ListBox lstTo)
		{
			string[] stringsArray = new string[lstFrom.SelectedItems.Count];
			lstFrom.SelectedItems.CopyTo(stringsArray, 0);

			for (int i = 0; i < stringsArray.Length; i++)
			{
				lstTo.Items.Add(stringsArray[i]);
				lstFrom.Items.Remove(stringsArray[i]);
			}
		}

		private void MoveAllItems(ListBox lstFrom, ListBox lstTo)
		{
			lstTo.Items.AddRange(lstFrom.Items);
			lstFrom.Items.Clear();
		}

		private void deleteButton_Click(object sender, EventArgs e)
		{
			DeleteSelectedItems(listBox1);
			DeleteSelectedItems(listBox2);
		}

		private void moveToList2Button_Click(object sender, EventArgs e)
		{
			MoveSelectedItems(listBox1, listBox2);
		}

		private void moveToList1Button_Click(object sender, EventArgs e)
		{
			MoveSelectedItems(listBox2, listBox1);
		}

		private void allToList2Button_Click(object sender, EventArgs e)
		{
			MoveAllItems(listBox1, listBox2);
		}

		private void allToList1Button_Click(object sender, EventArgs e)
		{
			MoveAllItems(listBox2, listBox1);
		}

		private void addButton_Click(object sender, EventArgs e)
		{
			AddNewItem dlg = new AddNewItem();
			dlg.Owner = this;
			dlg.ShowDialog();
			/*AddNewItem dlg = new AddNewItem();
			if (dlg.ShowDialog() == DialogResult.OK)
			{
				switch (dlg.Section)
				{
					case 1: listBox1.Items.Add(dlg.UserInput); break;
					case 2: listBox2.Items.Add(dlg.UserInput); break;
					default: break;
				}
			}*/
		}

		private void clrLIst1Button_Click(object sender, EventArgs e)
		{
			listBox1.Items.Clear();
		}

		private void clrList2Button_Click(object sender, EventArgs e)
		{
			listBox2.Items.Clear();
		}

		private void SortListBox(ListBox list, int order)
		{
			this.Cursor = Cursors.WaitCursor;

			string[] stringsArray = new string[list.Items.Count];
			list.Items.CopyTo(stringsArray, 0);
			for (int i = 0; i < stringsArray.Length - 1; i++)
			{
				for (int j = 0; j < stringsArray.Length - i - 1; j++)
				{ 
					switch (order)
					{
						case 0:
							string a = stringsArray[j];
							string b = stringsArray[j + 1];
							int var = new int();
							var = a.CompareTo(b);
							if (var > 0)
							{
								string temp = stringsArray[j];
								stringsArray[j] = stringsArray[j + 1];
								stringsArray[j + 1] = temp;
							}
							break;

						case 1:
							string c = stringsArray[j];
							string d = stringsArray[j + 1];
							int var2 = new int();
							var2 = c.CompareTo(d);
							if (var2 < 0)
							{
								string temp = stringsArray[j];
								stringsArray[j] = stringsArray[j + 1];
								stringsArray[j + 1] = temp;
							}
							break;
						case 2:
							int e = new int();
							e = stringsArray[j].Length;
							int f = new int();
							f = stringsArray[j + 1].Length;
							if (e > f)
							{
								string temp = stringsArray[j];
								stringsArray[j] = stringsArray[j + 1];
								stringsArray[j + 1] = temp;
							}
							break;
						case 3:
							int g = new int();
							g = stringsArray[j].Length;
							int h = new int();
							h = stringsArray[j + 1].Length;
							if (g < h)
							{
								string temp = stringsArray[j];
								stringsArray[j] = stringsArray[j + 1];
								stringsArray[j + 1] = temp;
							}
							break;
						default:
							break;
					}
				}
			}
			list.Items.Clear();
			list.Items.AddRange(stringsArray);

			this.Cursor = Cursors.Default;
		}

		private void sortList1Button_Click(object sender, EventArgs e)
		{
			SortListBox(listBox1, comboBox1.SelectedIndex);
		}

		private void sortList2Button_Click(object sender, EventArgs e)
		{
			SortListBox(listBox2, comboBox2.SelectedIndex);
		}

		private void findButton_Click(object sender, EventArgs e)
		{
			listBox3.Items.Clear();
			string textToFind = textBox1.Text;

			if (checkBox1.Checked)
			{
				foreach (string s in listBox1.Items)
				{
					if (s.Contains(textToFind))
						listBox3.Items.Add(s);
				}
			}

			if (checkBox2.Checked)
			{
				foreach (string s in listBox2.Items)
				{
					if (s.Contains(textToFind))
						listBox3.Items.Add(s);
				}
			}
		}
	}
}
