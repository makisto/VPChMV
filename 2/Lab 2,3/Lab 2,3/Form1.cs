using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Drawing.Imaging;
using System.Drawing.Drawing2D;
using System.Linq;
using System.Text;
using System.Windows.Forms;
using System.IO;

namespace Lab_2_3
{
    public partial class Form1 : Form
    {
        bool isPressed;
		Point oldLocation;
        GraphicsPath currentPath;
        Pen p;
        public Color currentColor = Color.Black;
        Bitmap Pic;
		Graphics g;
        int historyCount;
        List<Image> History;
        public Form1()
        {
            InitializeComponent();
            comboBox1.SelectedIndex = 0;
            isPressed = false;
            p = new Pen(currentColor);
            p.DashStyle = DashStyle.Solid;
            p.Width = trackBar1.Value;
            History = new List<Image>();
        }


        private void newToolStripMenuItem_Click(object sender, EventArgs e)
        {
			Form2 f2 = new Form2();
			if (f2.ShowDialog() == DialogResult.OK)
			{
				try
				{
                    History.Clear();
                    historyCount = 0;
                    Pic = new Bitmap(f2.x, f2.y);
                    pictureBox1.Image = Pic;
                    g = Graphics.FromImage(pictureBox1.Image);
					g.Clear(Color.White);
                    History.Add(new Bitmap(pictureBox1.Image));
                }
				catch
				{
					MessageBox.Show("Impossible to create file");
				}
			}
			f2.Dispose();
        }

        private void openToolStripMenuItem_Click(object sender, EventArgs e)
        {
            OpenFileDialog dlg = new OpenFileDialog();
            dlg.Filter = "Image Files(*.BMP; *.JPG; *.GIF; *.PNG)|*.BMP; *.JPG; *.GIF; *.PNG|All files(*.*)|*.*";
            if (dlg.ShowDialog() == DialogResult.OK)
            {
                try
                {
                    History.Clear();
                    historyCount = 0;
                    pictureBox1.Image = new Bitmap(dlg.FileName);
                    g = Graphics.FromImage(pictureBox1.Image);
                    g = pictureBox1.CreateGraphics();
                    History.Add(new Bitmap(pictureBox1.Image));
                }
                catch
                {
                    MessageBox.Show("Impossible to read file");
                }
            }

            dlg.Dispose();
        }

        private void saveToolStripMenuItem_Click_1(object sender, EventArgs e)
        {
            SaveFileDialog dlg = new SaveFileDialog();
            dlg.Filter = "Image Files(*.BMP)|*.bmp;|Image Files(*.JPG)|*.jpeg;|Image Files(*.GIF)|*.gif;|Image Files(*.PNG)|*.png;";
            if (dlg.ShowDialog() == DialogResult.OK)
            {
                try
                {
                    switch (dlg.FilterIndex)
                    {
                        case 1:
                            this.pictureBox1.Image.Save(dlg.FileName, ImageFormat.Bmp);
                            break;
                        case 2:
                            this.pictureBox1.Image.Save(dlg.FileName, ImageFormat.Jpeg);
                            break;
                        case 3:
                            this.pictureBox1.Image.Save(dlg.FileName, ImageFormat.Gif);
                            break;
                        case 4:
                            this.pictureBox1.Image.Save(dlg.FileName, ImageFormat.Png);
                            break;
                    }
                }
                catch
                {
                    MessageBox.Show("Impossible to save file");
                }
            }

            dlg.Dispose();
        }

        private void exitToolStripMenuItem_Click(object sender, EventArgs e)
        {
            Application.Exit();
        }

        private void aboutToolStripMenuItem_Click(object sender, EventArgs e)
        {
            MessageBox.Show("Martasov&Scherba CO. \nAll rights reserved.");
        }

        private void pictureBox1_Click(object sender, EventArgs e)
        {

        }

        private void Form1_Load(object sender, EventArgs e)
        {

        }

		private void pictureBox1_MouseDown(object sender, MouseEventArgs e)
		{
            if (pictureBox1.Image == null)
            {
                return;
            }
            if (e.Button == MouseButtons.Left)
            {
                p.Color = currentColor;
              
                isPressed = true;
                oldLocation = e.Location;
                currentPath = new GraphicsPath();
            }
            if (e.Button == MouseButtons.Right)
            {
                p.Color = Color.White;
              
                isPressed = true;
                oldLocation = e.Location;
                currentPath = new GraphicsPath();
            }

        }

		private void pictureBox1_MouseMove(object sender, MouseEventArgs e)
		{
            label2.Text = e.X.ToString();
            label4.Text = e.Y.ToString();
            if (isPressed)
            {
                g = Graphics.FromImage(pictureBox1.Image);
                currentPath.AddLine(oldLocation, e.Location);
                g.DrawPath(p, currentPath);
                oldLocation = e.Location;
                g.Dispose();
                pictureBox1.Invalidate();
            }
        }

		private void pictureBox1_MouseUp(object sender, MouseEventArgs e)
		{
            isPressed = false;
            try
            {
				History.RemoveRange(historyCount + 1, History.Count - historyCount - 1);
				History.Add(new Bitmap(pictureBox1.Image));
				if (historyCount + 1 < 10) historyCount++;
				if (History.Count - 1 == 10) History.RemoveAt(0);
				currentPath.Dispose();
            }
            catch { };
        }

        private void pictureBox1_Click_1(object sender, EventArgs e)
        {

        }

        private void pictureBox1_MouseLeave(object sender, EventArgs e)
        {
            label2.Text = "-";
            label4.Text = "-";
        }

        private void colorToolStripMenuItem_Click(object sender, EventArgs e)
        {
            Form3 f3 = new Form3(currentColor);
            f3.Owner = this;
            if (f3.ShowDialog() == DialogResult.OK)
            {
                try
                {
                    p.Color = currentColor;
                }
                catch
                {
                }
            }
            f3.Dispose();
        }

        private void dotToolStripMenuItem_Click(object sender, EventArgs e)
        {
            p.DashStyle = DashStyle.Solid;
        }

        private void dashDotDotToolStripMenuItem_Click(object sender, EventArgs e)
        {
            p.DashStyle = DashStyle.DashDot;
        }

        private void solidToolStripMenuItem_Click(object sender, EventArgs e)
        {
            p.DashStyle = DashStyle.DashDotDot;
        }

        private void comboBox1_SelectedIndexChanged(object sender, EventArgs e)
        {
            if(p!=null)
            switch (comboBox1.SelectedIndex)
            {
                case 0:
                    p.DashStyle = DashStyle.Solid;
                    break;
                case 1:
                    p.DashStyle = DashStyle.DashDot;
                    break;
                case 2:
                    p.DashStyle = DashStyle.DashDotDot;
                    break;

            }
        }

        private void undoToolStripMenuItem_Click(object sender, EventArgs e)
        {
            if (History.Count != 0 && historyCount != 0)
            {
                pictureBox1.Image = new Bitmap(History[--historyCount]);
            }
            else MessageBox.Show("История пуста");
        }

        private void trackBar1_Scroll(object sender, EventArgs e)
        {
            p.Width = trackBar1.Value;
        }

        private void redoToolStripMenuItem_Click(object sender, EventArgs e)
        {
            if (historyCount < History.Count - 1)
            {
                pictureBox1.Image = new Bitmap(History[++historyCount]);
            }
            else MessageBox.Show("История пуста");

        }

		private void hScrollBar1_Scroll(object sender, ScrollEventArgs e)
		{

		}
	}
}
