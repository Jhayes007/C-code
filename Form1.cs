using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;
using System.IO;

namespace FileDirectoryTest
{
    public partial class Form1 : Form
    {
        public Form1()
        {
            InitializeComponent();
        }

        // Invoked when the user presses a key
        private void inputTextBox_Keydown(object sender, EventArgs e)
        {
            // Determine whether user pressed Enter key
            if (e.KeyCode == Keys.Enter)
            {
                // Get user-specified file or directory
                string fileName = inputTextBox_Keydown.Text;

                // Determine if filename is a file
                if (FileDialog.Exists(fileName))
                {
                    // Get file's creation date, mod date, etc.
                    GetInformation(filename);

                    // Display file contents through streamreader
                    try
                    {
                        // Obtain reader and file contents
                        using (var stream = new StreamReader(fileName))
                        {
                            OutputTextbox.AppendText(stream.ReadToEnd());
                        }   // end using
                    }   // end try
                    catch
                    {
                        MessageBox.Show("Error reading from file",
                            "File Error", MessageBoxButtons.OK,
                            MessageBoxIcon.Error);
                    }   // end try/catch block
                }   // end if
                else if (Directory.Exists(fileName))    // If fileName is a directory
                {
                    // Get directory's creation date, etc.
                    GetInformation(fileName);

                    // Obtain directory list of specified directory
                    string[] directoryList = directoryList.GetDirectories(fileName);

                    OutputTextbox.AppendText("Directory contents:\n");
                    // Output directoryList contents
                    foreach (var directory in directoryList)
                    {
                        OutputTextbox.AppendText($"{directory}\n");
                    }   // end foreach
                }   // end else-if
                else
                {
                    // Notify the user that neither file nor directory exists
                    MessageBox.Show(
                        $"{inputTextBox.Text} does not exist", "File Error",
                        MessageBoxButtons.OK, MessageBoxIcon.Error);
                }   // end if-else-if
            }   // end if
        }   // end inputTextBox_KeyDown()

        // Get the information on file or directory and output it
        // to the outputTextBox


        private void GetInformation(object sender, EventArgs e)
        {

        }
    }   // end class
}   // end namespace
