using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace WindowsFormsApplication2
{
    public partial class Form1 : Form
    {
        private Rectangle Rectangle = new Rectangle(10, 10, 200, 100);
        private Rectangle Circle = new Rectangle(220, 10, 150, 100);
        private Rectangle Square = new Rectangle(380, 10, 150, 150);

        private bool isRectangle = false;
        private bool isCircle = false;
        private bool isSquare = false;

        private int Rectangle_X = 0;
        private int Rectangle_Y = 0;
        private int Circle_X = 0;
        private int Circle_Y = 0;
        private int Square_X = 0;
        private int Square_Y = 0;

        private int X, Y, dX, dY;
        private int LastClicked = 0;
        public Form1()
        {
            InitializeComponent();
        }

        private void pictureBox1_Paint(object sender, PaintEventArgs e)
        {
            e.Graphics.FillEllipse(Brushes.Red, Circle);
            e.Graphics.FillRectangle(Brushes.Blue, Square);
            e.Graphics.FillRectangle(Brushes.Yellow, Rectangle);
        }

        private void pictureBox1_MouseDown(object sender, MouseEventArgs e)
        {
            if((e.X < Rectangle.X + Rectangle.Width) && (e.X > Rectangle.X))
            {
                if((e.Y < Rectangle.Y + Rectangle.Height) && (e.Y > Rectangle.Y))
                {
                    isRectangle = true;

                    Rectangle_X = e.X - Rectangle.X;
                    Rectangle_Y = e.Y - Rectangle.Y;
                }
            }

            if ((e.X < Circle.X + Circle.Width) && (e.X > Circle.X))
            {
                if ((e.Y < Circle.Y + Circle.Height) && (e.Y > Circle.Y))
                {
                    isCircle = true;

                    Circle_X = e.X - Circle.X;
                    Circle_Y = e.Y - Circle.Y;
                }
            }

            if ((e.X < Square.X + Square.Width) && (e.X > Square.X))
            {
                if ((e.Y < Square.Y + Square.Height) && (e.Y > Square.Y))
                {
                    isSquare = true;

                    Square_X = e.X - Square.X;
                    Square_Y = e.Y - Square.Y;
                }
            }
        }

        private void pictureBox1_MouseUp(object sender, MouseEventArgs e)
        {
            isRectangle = false;
            isCircle = false;
            isSquare = false;

            if (LastClicked == 1)
            {
                if ((label2.Location.X < Rectangle.X + Rectangle.Width) && (label2.Location.X > Rectangle.X))
                {
                    if ((label2.Location.Y < Rectangle.Y + Rectangle.Height) && (label2.Location.Y > Rectangle.Y))
                    {
                        X = Rectangle.X;
                        Y = Rectangle.Y;
                        dX = Rectangle_X;
                        dY = Rectangle_Y;

                        Rectangle.X = Square.X;
                        Rectangle.Y = Square.Y;
                        Rectangle_X = Square_X;
                        Rectangle_Y = Square_Y;

                        Square.X = X;
                        Square.Y = Y;
                        Square_X = dX;
                        Square_Y = dY;
                    }
                }
            }

            if(LastClicked == 2)
            {
                if((label2.Location.X < Circle.X + Circle.Width) && (label2.Location.X > Circle.X))
                {
                    if((label2.Location.Y < Circle.Y + Circle.Height) && (label2.Location.Y > Circle.Y))
                    {
                        X = Circle.X;
                        Y = Circle.Y;
                        dX = Circle_X;
                        dY = Circle_Y;

                        Circle.X = Rectangle.X;
                        Circle.Y = Rectangle.Y;
                        Circle_X = Rectangle_X;
                        Circle_Y = Rectangle_Y;

                        Rectangle.X = X;
                        Rectangle.Y = Y;
                        Rectangle_X = dX;
                        Rectangle_Y = dY;
                    }
                }
            }

            if (LastClicked == 3)
            {
                if ((label2.Location.X < Square.X + Square.Width) && (label2.Location.X > Square.X))
                {
                    if ((label2.Location.Y < Square.Y + Square.Height) && (label2.Location.Y > Square.Y))
                    {
                        X = Square.X;
                        Y = Square.Y;
                        dX = Square_X;
                        dY = Square_Y;

                        Square.X = Circle.X;
                        Square.Y = Circle.Y;
                        Square_X = Circle_X;
                        Square_Y = Circle_Y;

                        Circle.X = X;
                        Circle.Y = Y;
                        Circle_X = dX;
                        Circle_Y = dY;
                    }
                }
            }
        }

        private void pictureBox1_MouseMove(object sender, MouseEventArgs e)
        {
            if(isRectangle)
            {
                LastClicked = 1;
                Rectangle.X = e.X - Rectangle_X;
                Rectangle.Y = e.Y - Rectangle_Y;
            }

            if (isCircle)
            {
                LastClicked = 2;
                Circle.X = e.X - Circle_X;
                Circle.Y = e.Y - Circle_Y;
            }

            if (isSquare)
            {
                LastClicked = 3;
                Square.X = e.X - Square_X;
                Square.Y = e.Y - Square_Y;
            }

            if((label1.Location.X < Square.X + Square.Width) && (label1.Location.X > Square.X))
            {
                if((label1.Location.Y < Square.Y + Square.Height) && (label1.Location.Y > Square.Y))
                {
                    label3.Text = "Синий Квадрат";
                }
            }

            if ((label1.Location.X < Rectangle.X + Rectangle.Width) && (label1.Location.X > Rectangle.X))
            {
                if ((label1.Location.Y < Rectangle.Y + Rectangle.Height) && (label1.Location.Y > Rectangle.Y))
                {
                    label3.Text = "Жёлтый Прямоугольник";
                }
            }

            if ((label1.Location.X < Circle.X + Circle.Width) && (label1.Location.X > Circle.X))
            {
                if ((label1.Location.Y < Circle.Y + Circle.Height) && (label1.Location.Y > Circle.Y))
                {
                    label3.Text = "Красный Овал";
                }
            }

            pictureBox1.Invalidate();
        }


    }
}
