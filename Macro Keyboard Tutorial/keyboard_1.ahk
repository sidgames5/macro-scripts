#NoEnv
SendMode Input
#InstallKeybdHook
#UseHook On
Menu, Tray, Icon, shell32.dll, 283
#SingleInstance force
#MaxHotkeysPerInterval 2000
#WinActivateForce
~F24::
	FileRead, key, C:\Users\saytl\Documents\MACROOOOOOOOOOOS\keypressed.txt
	If (key = "1")
		; This "macro" presses Alt+Tab to switch windows. You would usually set this to something more complex that you can't press with one hand.
		Send, {Alt}{Tab}
	Else If(key = "c")
		Send, !c
	Else If(key = "v")
		Send, !v
	Else If(key = "z")
		Send, !z
	Else If(key = "x")
		Send, !x
	Else If(key = "a")
		Send, !a
	Else If(key = "s")
		Send, !s
	Else If(key = "backspace")
	{
		; This macro was made to quickly delete all text in a file. This is a good example of a macro that does multiple functions
		Send, !a
		Send, {BackSpace}
	}
	Else If(key = "enter")
	{
		Send, !a
		Send, !c
	}

Return