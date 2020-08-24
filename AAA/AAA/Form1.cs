using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.IO;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace AAA
{
    public partial class Form1 : Form
    {
        Point m_NowFormPos;
        Point m_ePos;
        int LeftMove = 5;
        int RightMove = 5;
        int UpMove = 5;
        int DownMove = 5;
        public Form1()
        {
            InitializeComponent();
            this.SetStyle(ControlStyles.DoubleBuffer, true);

            this.SetStyle(ControlStyles.AllPaintingInWmPaint, true);

            this.SetStyle(ControlStyles.UserPaint, true);
        }






        private void Form1_Load(object sender, EventArgs e)
        {
            Image im = Image.FromFile("unnamed.png");

            this.BackgroundImage = im;
            this.BackgroundImageLayout = ImageLayout.Stretch;
        }


        private void Form1_KeyDown(object sender, KeyEventArgs e)
        {
            if (e.KeyCode == Keys.Up)
            {
                Player.Top += -15;
            }
            else if (e.KeyCode == Keys.Down)
            {
                Player.Top += 15;
            }
            else if (e.KeyCode == Keys.Left)
            {
                Player.Left += -15;
            }
            else if (e.KeyCode == Keys.Right)
            {
                Player.Left += 15;
            }
            else if (e.KeyCode == Keys.Space)
            {
               
                PictureBox pictureBox = new PictureBox() { Left = Player.Left, Top = Player.Top};
                pictureBox.Image = AAA.Properties.Resources.AAB;s



            }                
        }

        private void Form1_KeyUp(object sender, KeyEventArgs e)
        {
            if (e.KeyCode == Keys.Up)
            {
                Player.Top += -15;
            }
            else if (e.KeyCode == Keys.Down)
            {
                Player.Top += 15;
            }
            else if (e.KeyCode == Keys.Left)
            {
                Player.Left += -15;
            }
            else if (e.KeyCode == Keys.Right)
            {
                Player.Left += 15;
            }
        }

    }
}
