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
        int bulletSpeed = 0;
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
                Bullet.Top += -15;
                Player.Top += -15;
            }
            else if (e.KeyCode == Keys.Down)
            {
                Bullet.Top +=  15;
                Player.Top += 15;
            }
            else if (e.KeyCode == Keys.Left)
            {
                Bullet.Left += -15;
                Player.Left += -15;
            }
            else if (e.KeyCode == Keys.Right)
            {
                Bullet.Left +=  15;
                Player.Left += 15;
            }
            else if (e.KeyCode == Keys.Space)
            {
                bulletSpeed = 5;

            }                
        }

        private void Form1_KeyUp(object sender, KeyEventArgs e)
        {
        }

        private void Player_Click(object sender, EventArgs e)
        {

        }

        private void pictureBox1_Click(object sender, EventArgs e)
        {

        }

        private void bulletTimer_Tick(object sender, EventArgs e)
        {
            Bullet.Top += bulletSpeed;
        }
    }
}
